#include "produit.h"
#include "ui_produit.h"
#include <QSqlQuery>
#include <QCheckBox>
#include <QDebug>

Produit::Produit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Produit)
{
    ui->setupUi(this);
    ChangementConstruct();
}

Produit::~Produit()
{
    delete ui;
}

void Produit::chargeID()
{
    QString txt="select MAX(numeroproduit) max from produit";
    QSqlQuery maRequete(txt);
    maRequete.next();
    int idMax=maRequete.value("max").toInt()+1;
    qDebug()<<idMax;
    ui->spinBoxNumProduit->setValue(idMax);
}

void Produit::chargeListeProduit()
{
    ui->tableWidgetListProduit->clearContents();
    ui->tableWidgetListProduit->setRowCount(0);
    QString txtRequete="select libelleVariete ,idVariete from variete where Accept";
    QSqlQuery maRequete(txtRequete);
    while(maRequete.next())
        {
            int nbLigne=ui->tableWidgetListProduit->rowCount();
            ui->tableWidgetListProduit->setRowCount(nbLigne+1);
            ui->tableWidgetListProduit->setItem(nbLigne,0,new QTableWidgetItem(maRequete.value("idVariete").toString()));
            ui->tableWidgetListProduit->setItem(nbLigne,1,new QTableWidgetItem(maRequete.value("libelleVariete").toString()));
        }
}

void Produit::ChangementConstruct()
{
    chargeID();
    chargeListeProduit();
    chargeTableauDemande();
    ChargementDuComboBoxType();
}

void Produit::chargeTableauDemande()
{
    ui->tableWidgetDemandeProduit->clearContents();
    ui->tableWidgetDemandeProduit->setRowCount(0);

    QString txtRequete="select idVariete,libelleVariete, puVariete,descVariete,photo,idProduit from variete where not accept";
    QSqlQuery maRequete(txtRequete);
    while(maRequete.next())
    {
        QCheckBox* valider= new QCheckBox("Valider",ui->tableWidgetDemandeProduit);
        valider->setProperty("noVariete",maRequete.value("idVariete").toString());
        connect(valider,SIGNAL(stateChanged(int)),this,SLOT(validerDemande(int)));
        int nbLigne=ui->tableWidgetDemandeProduit->rowCount();
        ui->tableWidgetDemandeProduit->setRowCount(nbLigne+1);
        ui->tableWidgetDemandeProduit->setItem(nbLigne,0,new QTableWidgetItem(maRequete.value("idVariete").toString()));
        ui->tableWidgetDemandeProduit->setItem(nbLigne,1,new QTableWidgetItem(maRequete.value("libelleVariete").toString()));
        ui->tableWidgetDemandeProduit->setItem(nbLigne,2,new QTableWidgetItem(maRequete.value("descVariete").toString()));
        ui->tableWidgetDemandeProduit->setItem(nbLigne,3,new QTableWidgetItem(maRequete.value("photo").toString()));
        ui->tableWidgetDemandeProduit->setItem(nbLigne,4,new QTableWidgetItem(maRequete.value("puVariete").toString()));
        ui->tableWidgetDemandeProduit->setItem(nbLigne,5,new QTableWidgetItem(maRequete.value("idProduit").toString()));
        ui->tableWidgetDemandeProduit->setCellWidget(nbLigne,6,valider);

    }




}

void Produit::validerDemande(int etat)
{

    if (etat==Qt::Checked)
    {
        QString noVariete= ((QCheckBox*)sender())->property("noVariete").toString();
        QString text="update variete set accept=true where idVariete=\""+noVariete+"\"";
        QSqlQuery maRequete(text);
        chargeTableauDemande();
        chargeListeProduit();

    }

}

void Produit::on_pushButtonProduitQuitter_clicked()
{
    reject();
}


void Produit::ChargementDuComboBoxType()
{
    QString txt="select libelleProduit, idProduit from produit where accept";
    QSqlQuery maRequete(txt);
    while(maRequete.next())
    {
        ui->comboBoxTypeProduit->addItem(maRequete.value("libelleProduit").toString(),maRequete.value("idProduit").toString());
    }
}




void Produit::on_pushButtonAjouterProduit_clicked()
{
    QString txtRequete="insert into produit values(?,?,?,?,?,?,?,?,1)";
    QSqlQuery maRequete(txtRequete);
    maRequete.addBindValue(ui->spinBoxNumProduit->value());
    maRequete.addBindValue(ui->lineEditNomProd->text());
    maRequete.addBindValue(ui->doubleSpinBoxPU->value());
    maRequete.addBindValue(ui->comboBoxTypeProduit->currentData().toString());
    maRequete.exec();
    chargeListeProduit();
    chargeID();

}

