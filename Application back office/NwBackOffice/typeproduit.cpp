#include "typeproduit.h"
#include "ui_typeproduit.h"
#include <QSqlQuery>
#include <QCheckBox>
#include <QDebug>
#include <QMessageBox>
TypeProduit::TypeProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TypeProduit)
{
    ui->setupUi(this);
    inTheConstructor();
}

TypeProduit::~TypeProduit()
{
    delete ui;
}

void TypeProduit::on_pushButtonTypeProduitQuitter_clicked()
{
    reject();
}

void TypeProduit::on_pushButtonAjouterTypeProd_clicked()
{
    QString txtRequete="insert into produit values(?,?,?,?,1,?)";
    QSqlQuery maRequete(txtRequete);
    QString photo="";
    if(ui->lineEditPhotoTypesProd->text().isEmpty())
    {
        photo= "NULL";
    }
    if(maRequete.exec() and photo!="NULL")
    {
        maRequete.addBindValue(ui->spinBoxNum->value());
        maRequete.addBindValue(ui->lineEditNomTypeprod->text());
        maRequete.addBindValue(ui->plainTextEditInfo->toPlainText());
        maRequete.addBindValue(ui->lineEditPhotoTypesProd->text());
        maRequete.addBindValue(ui->comboBoxRayon->currentData());
        maRequete.exec();
        chargeListTypeProduit();
        chargeId();
        ui->lineEditNomTypeprod->clear();
        ui->lineEditPhotoTypesProd->clear();
        ui->plainTextEditInfo->clear();

    }
    else
    {
        maRequete.addBindValue(ui->spinBoxNum->value());
        maRequete.addBindValue(ui->lineEditNomTypeprod->text());
        maRequete.addBindValue(ui->plainTextEditInfo->toPlainText());
        maRequete.addBindValue(photo);
        maRequete.addBindValue(ui->comboBoxRayon->currentData());
        maRequete.exec();
        chargeListTypeProduit();
        chargeId();
        ui->lineEditNomTypeprod->clear();
        ui->lineEditPhotoTypesProd->clear();
        ui->plainTextEditInfo->clear();

    }
}

void TypeProduit::chargeListTypeProduit()
{
    ui->listWidgetTypeProd->clear();
    QString txtRequete="select libelleProduit from produit where accept ";
    QSqlQuery maRequete(txtRequete);
    while(maRequete.next())
        {
            ui->listWidgetTypeProd->addItem(maRequete.value(0).toString());
    }
}

void TypeProduit::chargeTableauDemande()
{
    ui->tableWidgetTypesPRod->clearContents();
    ui->tableWidgetTypesPRod->setRowCount(0);

    QString txtRequete="select idProduit,libelleProduit,descProduit,photoProduit,idRayon from produit where not accept";
    QSqlQuery maRequete(txtRequete);
    while(maRequete.next())
    {
        QCheckBox* valider= new QCheckBox("Valider",ui->tableWidgetTypesPRod);
        connect(valider,SIGNAL(stateChanged(int)),this,SLOT(validerDemande(int)));
        valider->setProperty("noProduit",maRequete.value("idProduit").toString());
        int nbLigne=ui->tableWidgetTypesPRod->rowCount();
        ui->tableWidgetTypesPRod->setRowCount(nbLigne+1);
        ui->tableWidgetTypesPRod->setItem(nbLigne,0,new QTableWidgetItem(maRequete.value("idProduit").toString()));
        ui->tableWidgetTypesPRod->setItem(nbLigne,1,new QTableWidgetItem(maRequete.value("libelleProduit").toString()));
        ui->tableWidgetTypesPRod->setItem(nbLigne,2,new QTableWidgetItem(maRequete.value("photoProduit").toString()));
        ui->tableWidgetTypesPRod->setItem(nbLigne,3,new QTableWidgetItem(maRequete.value("descProduit").toString()));
        ui->tableWidgetTypesPRod->setItem(nbLigne,4,new QTableWidgetItem(maRequete.value("idRayon").toString()));
        ui->tableWidgetTypesPRod->setCellWidget(nbLigne,5,valider);

    }
}

void TypeProduit::inTheConstructor()
{
    chargeListTypeProduit();
    chargeTableauDemande();
    chargeComboBoxMDP();
    chargeId();
}

void TypeProduit::chargeComboBoxMDP()
{
    QString txt="select distinct libelleRayon, idRayon from rayon where accept";
    QSqlQuery maRequete(txt);
    while(maRequete.next())
    {
        ui->comboBoxRayon->addItem(maRequete.value("libelleRayon").toString(),maRequete.value("idRayon").toString());
    }
}



void TypeProduit::on_pushButton_clicked()
{
    QString txtRequete="delete from produit where libelleProduit=?";
    QSqlQuery maRequete(txtRequete);
    QString typeSelectionner;
    for (int notype =0 ; notype<ui->listWidgetTypeProd->count() ; notype++)
    {
        if(ui->listWidgetTypeProd->item(notype)->isSelected())
            typeSelectionner=ui->listWidgetTypeProd->item(notype)->text();

    }

    maRequete.addBindValue(typeSelectionner);
    if(maRequete.exec()==false)
    {
        QMessageBox::warning(this,"error","La requete n'as pas put etre executer, atention il y a peut etre une variétée lier au produit  .");
    }

    chargeListTypeProduit();
}

void TypeProduit::chargeId()
{
    QString txt="select MAX(idProduit) max from produit";
    QSqlQuery maRequete(txt);
    maRequete.next();
    int idMax=maRequete.value("max").toInt()+1;
    ui->spinBoxNum->setValue(idMax);
}

void TypeProduit::validerDemande(int etat)
{
    if (etat==Qt::Checked)
    {
      QString noProduit= ((QCheckBox*)sender())->property("noProduit").toString();
      QString text="update produit set accept=true where idProduit=\""+noProduit+"\"";
      QSqlQuery maRequete(text);
      chargeTableauDemande();
      chargeListTypeProduit();
    }
}
