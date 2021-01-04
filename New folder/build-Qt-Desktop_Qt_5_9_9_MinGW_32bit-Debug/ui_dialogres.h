/********************************************************************************
** Form generated from reading UI file 'dialogres.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRES_H
#define UI_DIALOGRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialogres
{
public:
    QPushButton *client;
    QPushButton *reservation;

    void setupUi(QDialog *dialogres)
    {
        if (dialogres->objectName().isEmpty())
            dialogres->setObjectName(QStringLiteral("dialogres"));
        dialogres->resize(641, 415);
        dialogres->setStyleSheet(QStringLiteral("border-image: url(:/image/image/passage.jpg);"));
        client = new QPushButton(dialogres);
        client->setObjectName(QStringLiteral("client"));
        client->setGeometry(QRect(130, 160, 151, 201));
        client->setCursor(QCursor(Qt::PointingHandCursor));
        client->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        reservation = new QPushButton(dialogres);
        reservation->setObjectName(QStringLiteral("reservation"));
        reservation->setGeometry(QRect(360, 160, 151, 201));
        reservation->setCursor(QCursor(Qt::PointingHandCursor));
        reservation->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialogres);

        QMetaObject::connectSlotsByName(dialogres);
    } // setupUi

    void retranslateUi(QDialog *dialogres)
    {
        dialogres->setWindowTitle(QApplication::translate("dialogres", "Dialog", Q_NULLPTR));
        client->setText(QApplication::translate("dialogres", "1.CLIENT", Q_NULLPTR));
        reservation->setText(QApplication::translate("dialogres", "2.RESERVATION", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogres: public Ui_dialogres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRES_H
