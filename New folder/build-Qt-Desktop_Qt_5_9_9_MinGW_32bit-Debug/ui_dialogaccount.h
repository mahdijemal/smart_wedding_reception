/********************************************************************************
** Form generated from reading UI file 'dialogaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGACCOUNT_H
#define UI_DIALOGACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialogaccount
{
public:
    QPushButton *save;
    QPushButton *cancel;
    QLineEdit *name;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lastname;
    QLineEdit *email;
    QLineEdit *password;
    QLabel *label_4;
    QLineEdit *username;
    QLabel *label_5;
    QLabel *label_3;

    void setupUi(QDialog *dialogaccount)
    {
        if (dialogaccount->objectName().isEmpty())
            dialogaccount->setObjectName(QStringLiteral("dialogaccount"));
        dialogaccount->resize(418, 366);
        dialogaccount->setStyleSheet(QLatin1String("border-image: url(:/image/image/Sign up.jpg);\n"
"QLabel {\n"
"font-weight: bold;\n"
"font-size: 10px;\n"
"}\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"font-weight: bold;\n"
"background-color: black;\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}\n"
"QPushButton:hover { background-color: white;\n"
"color:black;\n"
"text-decoration: underline; }"));
        save = new QPushButton(dialogaccount);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(70, 310, 121, 21));
        save->setCursor(QCursor(Qt::PointingHandCursor));
        save->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        cancel = new QPushButton(dialogaccount);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(219, 310, 131, 21));
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        name = new QLineEdit(dialogaccount);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(240, 130, 141, 20));
        name->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        label = new QLabel(dialogaccount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 130, 49, 14));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));
        label_2 = new QLabel(dialogaccount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 160, 41, 20));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));
        lastname = new QLineEdit(dialogaccount);
        lastname->setObjectName(QStringLiteral("lastname"));
        lastname->setGeometry(QRect(240, 160, 141, 20));
        lastname->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        email = new QLineEdit(dialogaccount);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(240, 250, 141, 20));
        email->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        password = new QLineEdit(dialogaccount);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(240, 220, 141, 20));
        password->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        label_4 = new QLabel(dialogaccount);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 220, 49, 16));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));
        username = new QLineEdit(dialogaccount);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(240, 190, 141, 20));
        username->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        label_5 = new QLabel(dialogaccount);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 252, 49, 16));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));
        label_3 = new QLabel(dialogaccount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 190, 49, 16));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));

        retranslateUi(dialogaccount);

        QMetaObject::connectSlotsByName(dialogaccount);
    } // setupUi

    void retranslateUi(QDialog *dialogaccount)
    {
        dialogaccount->setWindowTitle(QApplication::translate("dialogaccount", "Dialog", Q_NULLPTR));
        save->setText(QApplication::translate("dialogaccount", "Save", Q_NULLPTR));
        cancel->setText(QApplication::translate("dialogaccount", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("dialogaccount", "Nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialogaccount", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("dialogaccount", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("dialogaccount", "Email", Q_NULLPTR));
        label_3->setText(QApplication::translate("dialogaccount", "Username", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogaccount: public Ui_dialogaccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGACCOUNT_H
