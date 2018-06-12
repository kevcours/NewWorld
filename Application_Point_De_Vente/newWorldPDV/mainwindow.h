#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loginpdv.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(LoginPDV* pDlg,QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonFermer_clicked();

private:
    Ui::MainWindow *ui;
    LoginPDV* dlg;
    QNetworkAccessManager myNWM;
    QNetworkCookieJar cookieJar;
    void auLancement();

};

#endif // MAINWINDOW_H
