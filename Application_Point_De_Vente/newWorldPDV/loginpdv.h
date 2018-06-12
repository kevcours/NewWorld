#ifndef LOGINPDV_H
#define LOGINPDV_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>

namespace Ui {
class LoginPDV;
}

class LoginPDV : public QDialog
{
    Q_OBJECT

public:
    QString nom;
    QString prenom;
    QString identifiant;
    QNetworkAccessManager myNWM;
    QNetworkCookieJar cookieJar;
    explicit LoginPDV(QWidget *parent = 0);
    ~LoginPDV();

private slots:


    void on_pushButtonValider_clicked();

    void on_pushButtonAnnuler_clicked();



private:
    Ui::LoginPDV *ui;
};

#endif // LOGINPDV_H
