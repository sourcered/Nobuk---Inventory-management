#ifndef DIALOG_REMOVEITEM_H
#define DIALOG_REMOVEITEM_H

#include <QDialog>
#include <QMessageBox>
#include "../../include/core.h"

namespace Ui {
class Dialog_removeitem;
}

class Dialog_removeitem : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_removeitem(QWidget *parent = 0);
    ~Dialog_removeitem();
    int row;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_removeitem *ui;
    nobuk::Core * core;
};

#endif // DIALOG_REMOVEITEM_H
