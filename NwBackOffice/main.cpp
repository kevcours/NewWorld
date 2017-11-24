#include "mainwindow.h"
#include <QApplication>
#include "login.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    login MesLog;
    if(MesLog.exec()==QDialog::Accepted)
    {
        MainWindow w;
        w.show();

        return a.exec();
     }
}
