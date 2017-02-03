#ifndef DIALOG_ADDITEM_H
#define DIALOG_ADDITEM_H

#include <QDialog>
#include <QMessageBox>
#include "../../include/core.h"

namespace Ui {
class Dialog_additem;
}

class Dialog_additem : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_additem(QWidget *parent = 0);
    ~Dialog_additem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_additem *ui;
    nobuk::Core * core;
};

#endif // DIALOG_ADDITEM_H
