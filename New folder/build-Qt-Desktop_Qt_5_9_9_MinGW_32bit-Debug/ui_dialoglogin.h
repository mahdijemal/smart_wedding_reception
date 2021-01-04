/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

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

class Ui_dialoglogin
{
public:
    QPushButton *exit;
    QLineEdit *password;
    QLabel *label_2;
    QLineEdit *username;
    QLabel *label;
    QPushButton *login;
    QPushButton *signup;

    void setupUi(QDialog *dialoglogin)
    {
        if (dialoglogin->objectName().isEmpty())
            dialoglogin->setObjectName(QStringLiteral("dialoglogin"));
        dialoglogin->resize(624, 424);
        dialoglogin->setStyleSheet(QLatin1String("border-image: url(:/image/image/Sign In.jpg);\n"
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
        exit = new QPushButton(dialoglogin);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(390, 310, 91, 21));
        exit->setCursor(QCursor(Qt::PointingHandCursor));
        exit->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        password = new QLineEdit(dialoglogin);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(370, 200, 183, 16));
        password->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(dialoglogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 180, 60, 47));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));
        username = new QLineEdit(dialoglogin);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(370, 160, 183, 16));
        username->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        label = new QLabel(dialoglogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 150, 61, 31));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture52.png);"));
        login = new QPushButton(dialoglogin);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(310, 250, 101, 31));
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        signup = new QPushButton(dialoglogin);
        signup->setObjectName(QStringLiteral("signup"));
        signup->setGeometry(QRect(460, 250, 101, 31));
        signup->setCursor(QCursor(Qt::PointingHandCursor));
        signup->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        retranslateUi(dialoglogin);

        QMetaObject::connectSlotsByName(dialoglogin);
    } // setupUi

    void retranslateUi(QDialog *dialoglogin)
    {
        dialoglogin->setWindowTitle(QApplication::translate("dialoglogin", "dialoglogin", Q_NULLPTR));
        exit->setText(QApplication::translate("dialoglogin", "Exit", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialoglogin", " Password :", Q_NULLPTR));
        label->setText(QApplication::translate("dialoglogin", " Username :", Q_NULLPTR));
        login->setText(QApplication::translate("dialoglogin", "Login", Q_NULLPTR));
        signup->setText(QApplication::translate("dialoglogin", "Sign-Up", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialoglogin: public Ui_dialoglogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
