#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include <QDateTimeEdit>
#include <QTcpSocket>
#include <QAbstractSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainDialog; }
QT_END_NAMESPACE

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

    void GetTimeFunc();
    void ReadTimeFunc();
    void ShowErrorFunc(QAbstractSocket::SocketError socketError);

private slots:
    void on_pushButton_GetTime_clicked();

    void on_pushButton_ExitTime_clicked();

private:
    Ui::MainDialog *ui;
};
#endif // MAINDIALOG_H
