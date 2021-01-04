/********************************************************************************
** Form generated from reading UI file 'mail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIL_H
#define UI_MAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_mail
{
public:
    QLineEdit *subject;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QLabel *label_3;
    QLineEdit *rcpt;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QColumnView *columnView;

    void setupUi(QDialog *mail)
    {
        if (mail->objectName().isEmpty())
            mail->setObjectName(QStringLiteral("mail"));
        mail->resize(785, 540);
        subject = new QLineEdit(mail);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(200, 110, 205, 30));
        msg = new QTextEdit(mail);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(200, 170, 541, 221));
        sendBtn = new QPushButton(mail);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(400, 420, 181, 51));
        label_3 = new QLabel(mail);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 180, 55, 16));
        rcpt = new QLineEdit(mail);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(200, 60, 205, 30));
        label = new QLabel(mail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 70, 81, 16));
        label_2 = new QLabel(mail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 120, 55, 16));
        label_4 = new QLabel(mail);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 10, 1920, 1080));
        label_4->setCursor(QCursor(Qt::IBeamCursor));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/fond.png")));
        columnView = new QColumnView(mail);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(250, 170, 256, 192));

        retranslateUi(mail);

        QMetaObject::connectSlotsByName(mail);
    } // setupUi

    void retranslateUi(QDialog *mail)
    {
        mail->setWindowTitle(QApplication::translate("mail", "Dialog", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("mail", "Envoyer", Q_NULLPTR));
        label_3->setText(QApplication::translate("mail", "Message", Q_NULLPTR));
        label->setText(QApplication::translate("mail", "Destinataire", Q_NULLPTR));
        label_2->setText(QApplication::translate("mail", "Objet", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mail: public Ui_mail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIL_H
