#ifndef DIALOG_ADDQUANTITY_H
#define DIALOG_ADDQUANTITY_H

#include <QDialog>
#include <QMessageBox>
#include "../../include/core.h"

namespace Ui {
class Dialog_addquantity;
}

class Dialog_addquantity : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_addquantity(QWidget *parent = 0);
    ~Dialog_addquantity();
    int row;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_addquantity *ui;
    nobuk::Core * core;
};

#endif // DIALOG_ADDQUANTITY_H
