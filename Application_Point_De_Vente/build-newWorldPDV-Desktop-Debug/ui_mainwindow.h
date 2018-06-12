/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFermer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *comboBoxProducteur;
    QSpacerItem *horizontalSpacer_10;
    QTableWidget *tableWidgetProduit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QPushButton *pushButtonAccordProducteur;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(520, 850);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/icon_livraison.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonFermer = new QPushButton(centralWidget);
        pushButtonFermer->setObjectName(QStringLiteral("pushButtonFermer"));
        pushButtonFermer->setStyleSheet(QStringLiteral("border: none;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icones/fermer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonFermer->setIcon(icon1);
        pushButtonFermer->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonFermer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(75, 75));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icones/icon_livraison.png")));
        label_2->setScaledContents(true);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        comboBoxProducteur = new QComboBox(centralWidget);
        comboBoxProducteur->setObjectName(QStringLiteral("comboBoxProducteur"));

        horizontalLayout_3->addWidget(comboBoxProducteur);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_3);

        tableWidgetProduit = new QTableWidget(centralWidget);
        if (tableWidgetProduit->columnCount() < 5)
            tableWidgetProduit->setColumnCount(5);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setForeground(brush);
        tableWidgetProduit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetProduit->setObjectName(QStringLiteral("tableWidgetProduit"));
        tableWidgetProduit->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidgetProduit->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduit->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetProduit->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidgetProduit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        pushButtonAccordProducteur = new QPushButton(centralWidget);
        pushButtonAccordProducteur->setObjectName(QStringLiteral("pushButtonAccordProducteur"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icones/Valider.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAccordProducteur->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButtonAccordProducteur);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 520, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion Livraison", 0));
        pushButtonFermer->setText(QString());
        label_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Rayon", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Variete", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduit->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Livr\303\251", 0));
        label->setText(QApplication::translate("MainWindow", "La commade \303\240-t-elle \303\251t\303\251 bien livr\303\251e :", 0));
        pushButtonAccordProducteur->setText(QApplication::translate("MainWindow", "Accord Producteur", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
