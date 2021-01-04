/********************************************************************************
** Form generated from reading UI file 'stqt_type.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STQT_TYPE_H
#define UI_STQT_TYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_stqt_type
{
public:
    QLabel *label;

    void setupUi(QDialog *stqt_type)
    {
        if (stqt_type->objectName().isEmpty())
            stqt_type->setObjectName(QStringLiteral("stqt_type"));
        stqt_type->resize(573, 479);
        label = new QLabel(stqt_type);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 450, 450));

        retranslateUi(stqt_type);

        QMetaObject::connectSlotsByName(stqt_type);
    } // setupUi

    void retranslateUi(QDialog *stqt_type)
    {
        stqt_type->setWindowTitle(QApplication::translate("stqt_type", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("stqt_type", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stqt_type: public Ui_stqt_type {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STQT_TYPE_H
