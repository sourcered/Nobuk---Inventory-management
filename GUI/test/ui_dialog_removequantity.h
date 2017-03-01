/********************************************************************************
** Form generated from reading UI file 'dialog_removequantity.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_REMOVEQUANTITY_H
#define UI_DIALOG_REMOVEQUANTITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_removeQuantity
{
public:
    QVBoxLayout *verticalLayout;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_removeQuantity)
    {
        if (Dialog_removeQuantity->objectName().isEmpty())
            Dialog_removeQuantity->setObjectName(QStringLiteral("Dialog_removeQuantity"));
        Dialog_removeQuantity->resize(300, 100);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog_removeQuantity->sizePolicy().hasHeightForWidth());
        Dialog_removeQuantity->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Dialog_removeQuantity);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        doubleSpinBox = new QDoubleSpinBox(Dialog_removeQuantity);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximum(10000);

        verticalLayout->addWidget(doubleSpinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Dialog_removeQuantity);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog_removeQuantity);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(doubleSpinBox, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(Dialog_removeQuantity);

        QMetaObject::connectSlotsByName(Dialog_removeQuantity);
    } // setupUi

    void retranslateUi(QDialog *Dialog_removeQuantity)
    {
        Dialog_removeQuantity->setWindowTitle(QApplication::translate("Dialog_removeQuantity", "Dialog", 0));
        pushButton->setText(QApplication::translate("Dialog_removeQuantity", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Dialog_removeQuantity", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_removeQuantity: public Ui_Dialog_removeQuantity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_REMOVEQUANTITY_H
