/********************************************************************************
** Form generated from reading UI file 'dialog_removeitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_REMOVEITEM_H
#define UI_DIALOG_REMOVEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_removeitem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_removeitem)
    {
        if (Dialog_removeitem->objectName().isEmpty())
            Dialog_removeitem->setObjectName(QStringLiteral("Dialog_removeitem"));
        Dialog_removeitem->resize(300, 100);
        verticalLayout = new QVBoxLayout(Dialog_removeitem);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Dialog_removeitem);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Dialog_removeitem);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog_removeitem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(Dialog_removeitem);

        QMetaObject::connectSlotsByName(Dialog_removeitem);
    } // setupUi

    void retranslateUi(QDialog *Dialog_removeitem)
    {
        Dialog_removeitem->setWindowTitle(QApplication::translate("Dialog_removeitem", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_removeitem", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Delete this item?</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Dialog_removeitem", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Dialog_removeitem", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_removeitem: public Ui_Dialog_removeitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_REMOVEITEM_H
