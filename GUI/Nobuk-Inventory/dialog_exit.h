#ifndef DIALOG_EXIT_H
#define DIALOG_EXIT_H

#include <QDialog>

namespace Ui {
class Dialog_exit;
}

class Dialog_exit : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_exit(QWidget *parent = 0);
    ~Dialog_exit();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Dialog_exit *ui;
};

#endif // DIALOG_EXIT_H
