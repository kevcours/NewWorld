#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#define URL "http://172.16.63.116/~pvergniez/newWorld/jsonProducteur.php"

MainWindow::MainWindow(LoginPDV* pDlg, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dlg=pDlg;
    //charger les info ici

    auLancement();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::auLancement()
{
    ui->label_2->setFocus();
    ui->tableWidgetProduit->hideColumn(0);

    //recuperation des Producteurs qui livre le PDV aujourd'hui

    QUrl serviceUrl(URL);
    QUrl donnees;
    QUrlQuery query;
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


}


void MainWindow::on_pushButtonFermer_clicked()
{
    ui->label_2->setFocus();
    this->close();
}
