#ifndef WYBORSAMOCHODU_H
#define WYBORSAMOCHODU_H

#include <QDialog>
#include <QtSql>
#include "daneklienta.h"

namespace Ui {
class WyborSamochodu;
}

class WyborSamochodu : public QDialog
{
    Q_OBJECT

public:
    explicit WyborSamochodu(QWidget *parent = nullptr);
    ~WyborSamochodu();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::WyborSamochodu *ui;
};

#endif // WYBORSAMOCHODU_H
