/********************************************************************************
** Form generated from reading UI file 'loginpdv.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPDV_H
#define UI_LOGINPDV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginPDV
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *LayoutChamps;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelLogin;
    QLabel *labelLoginImg;
    QLabel *labelPasswordImg;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *LayoutWarning;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelAttention;
    QLabel *labelNotification;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *LayoutBouton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonValider;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAnnuler;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LoginPDV)
    {
        if (LoginPDV->objectName().isEmpty())
            LoginPDV->setObjectName(QStringLiteral("LoginPDV"));
        LoginPDV->resize(411, 197);
        verticalLayout = new QVBoxLayout(LoginPDV);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        LayoutChamps = new QGridLayout();
        LayoutChamps->setObjectName(QStringLiteral("LayoutChamps"));
        lineEditLogin = new QLineEdit(LoginPDV);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        LayoutChamps->addWidget(lineEditLogin, 0, 2, 1, 1);

        labelPassword = new QLabel(LoginPDV);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        LayoutChamps->addWidget(labelPassword, 1, 1, 1, 1);

        lineEditPassword = new QLineEdit(LoginPDV);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        LayoutChamps->addWidget(lineEditPassword, 1, 2, 1, 1);

        labelLogin = new QLabel(LoginPDV);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));

        LayoutChamps->addWidget(labelLogin, 0, 1, 1, 1);

        labelLoginImg = new QLabel(LoginPDV);
        labelLoginImg->setObjectName(QStringLiteral("labelLoginImg"));
        labelLoginImg->setMaximumSize(QSize(50, 50));
        labelLoginImg->setPixmap(QPixmap(QString::fromUtf8(":/icones/imageuser")));
        labelLoginImg->setScaledContents(true);

        LayoutChamps->addWidget(labelLoginImg, 0, 0, 1, 1);

        labelPasswordImg = new QLabel(LoginPDV);
        labelPasswordImg->setObjectName(QStringLiteral("labelPasswordImg"));
        labelPasswordImg->setMaximumSize(QSize(50, 50));
        labelPasswordImg->setPixmap(QPixmap(QString::fromUtf8(":/icones/lockeuser")));
        labelPasswordImg->setScaledContents(true);

        LayoutChamps->addWidget(labelPasswordImg, 1, 0, 1, 1);


        horizontalLayout->addLayout(LayoutChamps);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        LayoutWarning = new QHBoxLayout();
        LayoutWarning->setObjectName(QStringLiteral("LayoutWarning"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutWarning->addItem(horizontalSpacer_5);

        labelAttention = new QLabel(LoginPDV);
        labelAttention->setObjectName(QStringLiteral("labelAttention"));
        labelAttention->setMaximumSize(QSize(25, 25));
        labelAttention->setPixmap(QPixmap(QString::fromUtf8(":/icones/Attention.png")));
        labelAttention->setScaledContents(true);

        LayoutWarning->addWidget(labelAttention);

        labelNotification = new QLabel(LoginPDV);
        labelNotification->setObjectName(QStringLiteral("labelNotification"));

        LayoutWarning->addWidget(labelNotification);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutWarning->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(LayoutWarning);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        LayoutBouton = new QHBoxLayout();
        LayoutBouton->setObjectName(QStringLiteral("LayoutBouton"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutBouton->addItem(horizontalSpacer_2);

        pushButtonValider = new QPushButton(LoginPDV);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/Valider.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValider->setIcon(icon);

        LayoutBouton->addWidget(pushButtonValider);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutBouton->addItem(horizontalSpacer);

        pushButtonAnnuler = new QPushButton(LoginPDV);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icones/Annuler.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAnnuler->setIcon(icon1);

        LayoutBouton->addWidget(pushButtonAnnuler);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutBouton->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(LayoutBouton);


        retranslateUi(LoginPDV);

        QMetaObject::connectSlotsByName(LoginPDV);
    } // setupUi

    void retranslateUi(QDialog *LoginPDV)
    {
        LoginPDV->setWindowTitle(QApplication::translate("LoginPDV", "Interface d'authentification", 0));
        labelPassword->setText(QApplication::translate("LoginPDV", "Password :", 0));
        labelLogin->setText(QApplication::translate("LoginPDV", "login :", 0));
        labelLoginImg->setText(QString());
        labelPasswordImg->setText(QString());
        labelAttention->setText(QString());
        labelNotification->setText(QApplication::translate("LoginPDV", "Mot de passe ou Login incorrecte !", 0));
        pushButtonValider->setText(QApplication::translate("LoginPDV", "Valider", 0));
        pushButtonAnnuler->setText(QApplication::translate("LoginPDV", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginPDV: public Ui_LoginPDV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPDV_H
