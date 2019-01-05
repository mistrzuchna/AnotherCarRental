#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(pushButton_2, SIGNAL(click()), this, SLOT(openNewWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    ui->dataWypozyczenia->setText(ui->calendarWidget->selectedDate().toString("dd/MM/yy"));
}

void MainWindow::on_calendarWidget_2_clicked(const QDate &date)
{
    ui->DataZwrotu->setText(ui->calendarWidget_2->selectedDate().toString("dd/MM/yy"));
}

void MainWindow::on_pushButton_2_clicked()
{
    QString dataZPolaWypozyczenie = ui->dataWypozyczenia->text();
    QString dataZPolaZwrot = ui->DataZwrotu->text();
    if(dataZPolaWypozyczenie == ""){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this, "Bledna data", "Prosze wybrac date wypozyczenia!");
    }
    else if(dataZPolaZwrot == ""){
        QMessageBox::StandardButton reply1;
        reply1 = QMessageBox::warning(this, "Bledna data", "Prosze wybrac date zwrotu!");
    }

    //zabezpieczenie przed datą zwrotu wcześniejszą niż wypożyczenia!

    else {
        WyborSamochodu wybor;
        wybor.setModal(true);
        wybor.exec();
    }

}
