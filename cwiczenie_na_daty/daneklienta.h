#ifndef DANEKLIENTA_H
#define DANEKLIENTA_H

#include <QDialog>

namespace Ui {
class DaneKlienta;
}

class DaneKlienta : public QDialog
{
    Q_OBJECT

public:
    explicit DaneKlienta(QWidget *parent = nullptr);
    ~DaneKlienta();

private slots:
    void on_pushButton_2_clicked();

    void on_checkBox_clicked(bool checked);

    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::DaneKlienta *ui;
};

#endif // DANEKLIENTA_H
