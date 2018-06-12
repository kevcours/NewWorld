#include "rayon.h"
#include "ui_rayon.h"
#include <QSqlQuery>
#include <QCheckBox>
#include <QMessageBox>
#include <QDebug>

Rayon::Rayon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rayon)
{
    ui->setupUi(this);
    chargeListeRayon();
    chargeTableauDemande();
    chargeID();

}

Rayon::~Rayon()
{
    delete ui;
}

void Rayon::on_pushButtonProduitQuitter_clicked()
{
    reject();
}

void Rayon::chargeListeRayon()
{
    ui->listWidgetRayon->clear();
    QString txtRequete="select libelleRayon from rayon where accept ";
    QSqlQuery maRequete(txtRequete);
     while(maRequete.next())
        {
            ui->listWidgetRayon->addItem(maRequete.value("libelleRayon").toString());
        }

}

void Rayon::on_pushButtonAjouterRayon_clicked()
{
    QString txtRequete="insert into rayon values(?,?,?,1,?)";
    QSqlQuery maRequete(txtRequete);
    maRequete.addBindValue(ui->spinBoxNUmRayon->value());
    maRequete.addBindValue(ui->lineEditNomRayon->text());
    maRequete.addBindValue(ui->lineEditPhoto->text());
    maRequete.addBindValue(ui->plainTextEditDesc->toPlainText());
    maRequete.exec();
    chargeListeRayon();
    chargeID();

}

void Rayon::on_pushButtonEffacerRayon_clicked()
{
    QString txtRequete="delete from rayon where libelleRayon=?";
    QSqlQuery maRequete(txtRequete);
    QString RayonSelectionner;
    for (int noRayon =0 ; noRayon<ui->listWidgetRayon->count() ; noRayon++)
    {
        if(ui->listWidgetRayon->item(noRayon)->isSelected())
            RayonSelectionner=ui->listWidgetRayon->item(noRayon)->text();
    }
    maRequete.addBindValue(RayonSelectionner);
    if(maRequete.exec()==false)
    {
        QMessageBox::warning(this,"error","La requete n'as pas put etre executer, atention il y a peut etre un produit lier au Rayon .");
    }
    chargeListeRayon();
}

void Rayon::chargeTableauDemande()
{
    ui->tableWidgetRayon->clearContents();
    ui->tableWidgetRayon->setRowCount(0);

    QString txtRequete="select idRayon,libelleRayon, photo , descRayon from rayon where not accept";
    QSqlQuery maRequete(txtRequete);
    while(maRequete.next())
    {
        QCheckBox* valider= new QCheckBox("Valider",ui->tableWidgetRayon);
        valider->setProperty("noRayon",maRequete.value("idRayon").toString());
        connect(valider,SIGNAL(stateChanged(int)),this,SLOT(validerDemande(int )));
        int nbLigne=ui->tableWidgetRayon->rowCount();
        ui->tableWidgetRayon->setRowCount(nbLigne+1);
        ui->tableWidgetRayon->setItem(nbLigne,0,new QTableWidgetItem(maRequete.value("idRayon").toString()));
        ui->tableWidgetRayon->setItem(nbLigne,1,new QTableWidgetItem(maRequete.value("libelleRayon").toString()));
        ui->tableWidgetRayon->setItem(nbLigne,2,new QTableWidgetItem(maRequete.value("descRayon").toString()));
        ui->tableWidgetRayon->setItem(nbLigne,3,new QTableWidgetItem(maRequete.value("photo").toString()));
        ui->tableWidgetRayon->setCellWidget(nbLigne,4,valider);

    }
}

void Rayon::chargeID()
{
    QString txt="select MAX(idRayon) max from rayon";
    QSqlQuery maRequete(txt);
    maRequete.next();
    int idMax=maRequete.value("max").toInt()+1;
    ui->spinBoxNUmRayon->setValue(idMax);
}

void Rayon::validerDemande(int etat)
{
    if (etat==Qt::Checked)
    {
      QString noRayon= ((QCheckBox*)sender())->property("noRayon").toString();
      QString text="update rayon set accept=true where idRayon=\""+noRayon+"\"";
      QSqlQuery maRequete(text);
      chargeTableauDemande();
      chargeListeRayon();
    }
}



