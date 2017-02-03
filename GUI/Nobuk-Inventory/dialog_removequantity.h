#ifndef DIALOG_REMOVEQUANTITY_H
#define DIALOG_REMOVEQUANTITY_H

#include <QDialog>
#include <QMessageBox>
#include "../../include/core.h"

namespace Ui {
class Dialog_removeQuantity;
}

class Dialog_removeQuantity : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_removeQuantity(QWidget *parent = 0);
    ~Dialog_removeQuantity();
    int row;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_removeQuantity *ui;
    nobuk::Core * core;
};

#endif // DIALOG_REMOVEQUANTITY_H
