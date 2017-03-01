/********************************************************************************
** Form generated from reading UI file 'dialog_getkey.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_GETKEY_H
#define UI_DIALOG_GETKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_getKey
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_passoword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_getKey)
    {
        if (Dialog_getKey->objectName().isEmpty())
            Dialog_getKey->setObjectName(QStringLiteral("Dialog_getKey"));
        Dialog_getKey->resize(443, 115);
        verticalLayout = new QVBoxLayout(Dialog_getKey);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Dialog_getKey);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        spinBox_passoword = new QSpinBox(Dialog_getKey);
        spinBox_passoword->setObjectName(QStringLiteral("spinBox_passoword"));
        spinBox_passoword->setMaximum(9999);

        horizontalLayout_2->addWidget(spinBox_passoword);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(Dialog_getKey);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(Dialog_getKey);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog_getKey);

        QMetaObject::connectSlotsByName(Dialog_getKey);
    } // setupUi

    void retranslateUi(QDialog *Dialog_getKey)
    {
        Dialog_getKey->setWindowTitle(QApplication::translate("Dialog_getKey", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_getKey", "<html><head/><body><p align=\"right\"><span style=\" font-size:22pt; font-weight:600;\">Password:</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("Dialog_getKey", "Cancel", 0));
        pushButton->setText(QApplication::translate("Dialog_getKey", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_getKey: public Ui_Dialog_getKey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_GETKEY_H
