#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase maBase;
    maBase=QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setDatabaseName("dbKCnw");
    maBase.setUserName("Kevin");
    maBase.setPassword("ddxx2rcep");


    if (maBase.open())
    {

        login MesLog;
        if(MesLog.exec()==QDialog::Accepted)
        {
            MainWindow w;
            w.show();

            return a.exec();
         }
    }
    maBase.close();
}
