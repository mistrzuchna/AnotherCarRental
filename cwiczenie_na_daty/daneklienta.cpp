#include "daneklienta.h"
#include "ui_daneklienta.h"

DaneKlienta::DaneKlienta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DaneKlienta)
{
    ui->setupUi(this);
}

DaneKlienta::~DaneKlienta()
{
    delete ui;
}

void DaneKlienta::on_pushButton_2_clicked()
{
    DaneKlienta::close();
}

void DaneKlienta::on_checkBox_clicked(bool checked)
{
    if(checked)
        ui->pushButton->setEnabled(true);
}

void DaneKlienta::on_pushButton_clicked()
{
    //jakaś informacja o terminie odebrania samochodu
    QApplication::quit();
}

void DaneKlienta::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        ui->pushButton->setEnabled(true);
    }
    else {
        ui->pushButton->setEnabled(false);
    }
}
