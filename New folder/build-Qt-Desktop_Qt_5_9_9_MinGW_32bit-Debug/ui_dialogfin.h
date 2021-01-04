/********************************************************************************
** Form generated from reading UI file 'dialogfin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFIN_H
#define UI_DIALOGFIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialogfin
{
public:
    QPushButton *depenses;
    QPushButton *revenus;

    void setupUi(QDialog *dialogfin)
    {
        if (dialogfin->objectName().isEmpty())
            dialogfin->setObjectName(QStringLiteral("dialogfin"));
        dialogfin->resize(522, 366);
        dialogfin->setStyleSheet(QLatin1String("border-image: url(:/image/image/passage.jpg);\n"
"QPushButton\n"
"{\n"
"text-align:center;\n"
"font-size:20px;\n"
"font-family: Impact;\n"
"  color: white;\n"
"  background-color: black;\n"
"  border-width: 0px;\n"
"  border-radius:10px;\n"
"}\n"
"QPushButton:hover { background-color: white;\n"
"color:black;\n"
"text-decoration: underline; }"));
        depenses = new QPushButton(dialogfin);
        depenses->setObjectName(QStringLiteral("depenses"));
        depenses->setGeometry(QRect(0, 160, 201, 111));
        depenses->setCursor(QCursor(Qt::PointingHandCursor));
        depenses->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        revenus = new QPushButton(dialogfin);
        revenus->setObjectName(QStringLiteral("revenus"));
        revenus->setGeometry(QRect(320, 160, 201, 111));
        revenus->setCursor(QCursor(Qt::PointingHandCursor));
        revenus->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialogfin);

        QMetaObject::connectSlotsByName(dialogfin);
    } // setupUi

    void retranslateUi(QDialog *dialogfin)
    {
        dialogfin->setWindowTitle(QApplication::translate("dialogfin", "Dialog", Q_NULLPTR));
        depenses->setText(QApplication::translate("dialogfin", "Depenses", Q_NULLPTR));
        revenus->setText(QApplication::translate("dialogfin", "Revenus", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogfin: public Ui_dialogfin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFIN_H
