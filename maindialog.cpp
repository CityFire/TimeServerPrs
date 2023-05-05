#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}


void MainDialog::on_pushButton_GetTime_clicked()
{

}

void MainDialog::on_pushButton_ExitTime_clicked()
{

}

void MainDialog::GetTimeFunc()
{
//    QDateTimeEdit *dtedit = new QDateTimeEdit(this);
//    ui->dateTimeEdit_systemTime->setMinimumDate(QDate::currentDate().addDays(-365));
//    ui->dateTimeEdit_systemTime->setMaximumDate(QDate::currentDate().addDays(365));

    ui->dateTimeEdit_systemTime->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit_systemTime->setDisplayFormat("yyyy/MM/dd HH:mm:ss");

}
