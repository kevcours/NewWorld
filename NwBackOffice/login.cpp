#include "login.h"
#include "ui_login.h"
#include <QSqlDatabase>  // nécessaire pour utiliser un QSqlDatabase
#include <QSqlTableModel> // nécessaire pour utiliser un QSqlTableModel
#include <QMessageBox> // nécessaire pour utiliser un QMessageBox
#include <QSqlQuery>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->mabase=QSqlDatabase::addDatabase("QMYSQL");
    this->mabase.setHostName("localhost");
    this->mabase.setDatabaseName("dbKCnw");
    this->mabase.setUserName("Kevin");
    this->mabase.setPassword("ddxx2rcep");
}

login::~login()
{
    delete ui;
}

void login::on_pushButtonValider_clicked()
{
    this->mabase.open();
    QSqlQuery maRequete;
    maRequete.prepare("select EmployeId from Employe where EmployeLogin=? and EmployeMdp=?");
    maRequete.addBindValue(ui->lineEditLogin->text());
    maRequete.addBindValue(ui->lineEditPassword->text());

    if (maRequete.exec())
    {
        MyLog=ui->lineEditLogin->text();
        accept();
    }
    else if( ui->lineEditLogin->text()!="DUPOND")
        {
            ui->labelLogin->setStyleSheet("color:red");
        }
        else
        {
            ui->labelLogin->setStyleSheet("color:black");
        }
         if(ui->lineEditPassword->text()!="dudu")
        {
            ui->labelPassword->setStyleSheet("color:red");
        }
         else
         {
             ui->labelPassword->setStyleSheet("color:black");
         }
}

void login::on_pushButtonAnnuler_clicked()
{
    reject();
}


void login::on_lineEditLogin_textChanged(const QString &arg1)
{
    if (arg1!="" and ui->lineEditPassword->text()!="")
    {
        ui->pushButtonValider->setEnabled(1);
    }
    else
    {
        ui->pushButtonValider->setEnabled(0);
    }
}

void login::on_lineEditPassword_textChanged(const QString &arg1)
{
    if (arg1!="" and ui->lineEditLogin->text()!="")
    {
        ui->pushButtonValider->setEnabled(1);
    }
    else
    {
        ui->pushButtonValider->setEnabled(0);
    }
}
