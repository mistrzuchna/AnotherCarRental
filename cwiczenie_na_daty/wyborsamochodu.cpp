#include "wyborsamochodu.h"
#include "ui_wyborsamochodu.h"
#include <QMessageBox>


WyborSamochodu::WyborSamochodu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WyborSamochodu)
{
    ui->setupUi(this);
}

WyborSamochodu::~WyborSamochodu()
{
    delete ui;
}

void WyborSamochodu::on_pushButton_2_clicked()
{
    WyborSamochodu::close();
}

void WyborSamochodu::on_pushButton_clicked()
{
    DaneKlienta dane;
    dane.setModal(true);
    dane.exec();
}

void WyborSamochodu::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pushButton->setEnabled(true);
}
