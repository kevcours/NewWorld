#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginPDV monDialogue;

    if(monDialogue.exec()==QDialog::Accepted)
    {
        MainWindow W(&monDialogue);
        W.showFullScreen();
        return a.exec();
    }
    else
        return -250;
}
