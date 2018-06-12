#include "loginpdv.h"
#include "ui_loginpdv.h"
#include <QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#define URL "http://172.16.63.116/~pvergniez/newWorld/jsonLogin.php"
//#define URL "http://127.0.0.1/gthom/newWorld/jsonLogin.php"



LoginPDV::LoginPDV(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPDV)
{
    ui->setupUi(this);
    ui->labelNotification->hide();
    ui->labelAttention->hide();
    ui->lineEditLogin->setText("p.vergniez@laposte.net");
    ui->lineEditPassword->setText("pierre98");
}

LoginPDV::~LoginPDV()
{
    delete ui;
}

void LoginPDV::on_pushButtonValider_clicked()
{
    //verif du user et du pass
    QUrl serviceUrl(URL);
    QUrl donnees;
    QUrlQuery query;
    query.addQueryItem("login", ui->lineEditLogin->text());
    query.addQueryItem("password",ui->lineEditPassword->text());
    donnees.setQuery(query);
    QByteArray postData(donnees.toString(QUrl::RemoveFragment).remove("?").toLatin1());

    QNetworkRequest request(serviceUrl);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    QNetworkReply *reply1 = myNWM.post(request,postData);
    while(!reply1->isFinished())
    {
        qApp->processEvents();
    }
    QByteArray response_data = reply1->readAll();
    QJsonDocument jsonResponse = QJsonDocument::fromJson(response_data);
    qDebug()<<jsonResponse.object();
    qDebug()<<jsonResponse.object().count();
    if(jsonResponse.object().count()==6)//0.1.2 et nom prenom identifiant
    {
        //recupération des infos
        nom=jsonResponse.object()["nom"].toString();
        prenom=jsonResponse.object()["prenom"].toString();
        identifiant=jsonResponse.object()["identifiant"].toString();
        //si c'est bon
        accept();
    }
    else
    {
        ui->labelLogin->setStyleSheet("color:red;");
        ui->labelPassword->setStyleSheet("color:red;");
        ui->labelNotification->show();
        ui->labelAttention->show();
        ui->lineEditLogin->clear();
        ui->lineEditPassword->clear();
    }
    //nettoyage de reply1
    reply1->deleteLater();
    //sinon on indique que ce n'est pas bon
}




void LoginPDV::on_pushButtonAnnuler_clicked()
{
    reject();
}
