/********************************************************************************
** Form generated from reading UI file 'dialog_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EDIT_H
#define UI_DIALOG_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_edit
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_edit)
    {
        if (Dialog_edit->objectName().isEmpty())
            Dialog_edit->setObjectName(QStringLiteral("Dialog_edit"));
        Dialog_edit->resize(400, 300);
        widget = new QWidget(Dialog_edit);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 220, 168, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Dialog_edit);

        QMetaObject::connectSlotsByName(Dialog_edit);
    } // setupUi

    void retranslateUi(QDialog *Dialog_edit)
    {
        Dialog_edit->setWindowTitle(QApplication::translate("Dialog_edit", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("Dialog_edit", "Cancel", 0));
        pushButton->setText(QApplication::translate("Dialog_edit", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_edit: public Ui_Dialog_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EDIT_H
