/********************************************************************************
** Form generated from reading UI file 'dialogmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMENU_H
#define UI_DIALOGMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialogmenu
{
public:
    QPushButton *fin;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *dialogmenu)
    {
        if (dialogmenu->objectName().isEmpty())
            dialogmenu->setObjectName(QStringLiteral("dialogmenu"));
        dialogmenu->resize(553, 364);
        dialogmenu->setStyleSheet(QLatin1String("border-image: url(:/image/image/menu.jpg);\n"
"QPushButton\n"
"{\n"
"text-align:center;\n"
"font-size:20px;\n"
"font-family: Impact;\n"
"  color: white;\n"
"  background-color: black;\n"
"  border-width:5px;\n"
"  border-radius:10px;\n"
"}\n"
"QPushButton:hover { background-color: white;\n"
"color:black;\n"
"text-decoration: underline; }"));
        fin = new QPushButton(dialogmenu);
        fin->setObjectName(QStringLiteral("fin"));
        fin->setGeometry(QRect(400, 0, 151, 51));
        fin->setCursor(QCursor(Qt::PointingHandCursor));
        fin->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        pushButton_2 = new QPushButton(dialogmenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 131, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        pushButton_3 = new QPushButton(dialogmenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 0, 131, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        pushButton_4 = new QPushButton(dialogmenu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 0, 141, 51));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialogmenu);

        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(dialogmenu);
    } // setupUi

    void retranslateUi(QDialog *dialogmenu)
    {
        dialogmenu->setWindowTitle(QApplication::translate("dialogmenu", "Dialog", Q_NULLPTR));
        fin->setText(QApplication::translate("dialogmenu", "1.Gestion financi\303\251re", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("dialogmenu", "Gestion de R\303\251servation", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("dialogmenu", "3.Gestion des Invit\303\251s", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("dialogmenu", "4.Gestion des Personnels", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogmenu: public Ui_dialogmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMENU_H
