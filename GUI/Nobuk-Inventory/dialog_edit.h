#ifndef DIALOG_EDIT_H
#define DIALOG_EDIT_H

#include <QDialog>

namespace Ui {
class Dialog_edit;
}

class Dialog_edit : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_edit(QWidget *parent = 0);
    ~Dialog_edit();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_edit *ui;
};

#endif // DIALOG_EDIT_H
