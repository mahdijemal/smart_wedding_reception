/********************************************************************************
** Form generated from reading UI file 'dialogper.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPER_H
#define UI_DIALOGPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialogper
{
public:
    QPushButton *roles;
    QPushButton *peronnel;

    void setupUi(QDialog *dialogper)
    {
        if (dialogper->objectName().isEmpty())
            dialogper->setObjectName(QStringLiteral("dialogper"));
        dialogper->resize(499, 366);
        dialogper->setStyleSheet(QLatin1String("border-image: url(:/image/image/passage.jpg);\n"
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
        roles = new QPushButton(dialogper);
        roles->setObjectName(QStringLiteral("roles"));
        roles->setGeometry(QRect(310, 140, 191, 141));
        roles->setCursor(QCursor(Qt::PointingHandCursor));
        roles->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        peronnel = new QPushButton(dialogper);
        peronnel->setObjectName(QStringLiteral("peronnel"));
        peronnel->setGeometry(QRect(0, 140, 191, 141));
        peronnel->setCursor(QCursor(Qt::PointingHandCursor));
        peronnel->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialogper);

        QMetaObject::connectSlotsByName(dialogper);
    } // setupUi

    void retranslateUi(QDialog *dialogper)
    {
        dialogper->setWindowTitle(QApplication::translate("dialogper", "Dialog", Q_NULLPTR));
        roles->setText(QApplication::translate("dialogper", "2.ROLES", Q_NULLPTR));
        peronnel->setText(QApplication::translate("dialogper", "1.PERSONNEL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogper: public Ui_dialogper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPER_H
