/********************************************************************************
** Form generated from reading UI file 'dialoginv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINV_H
#define UI_DIALOGINV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialoginv
{
public:
    QPushButton *invite;
    QPushButton *salle;

    void setupUi(QDialog *dialoginv)
    {
        if (dialoginv->objectName().isEmpty())
            dialoginv->setObjectName(QStringLiteral("dialoginv"));
        dialoginv->resize(491, 392);
        dialoginv->setStyleSheet(QStringLiteral("border-image: url(:/image/image/passage.jpg);"));
        invite = new QPushButton(dialoginv);
        invite->setObjectName(QStringLiteral("invite"));
        invite->setGeometry(QRect(94, 180, 121, 141));
        invite->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        salle = new QPushButton(dialoginv);
        salle->setObjectName(QStringLiteral("salle"));
        salle->setGeometry(QRect(280, 180, 131, 141));
        salle->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialoginv);

        QMetaObject::connectSlotsByName(dialoginv);
    } // setupUi

    void retranslateUi(QDialog *dialoginv)
    {
        dialoginv->setWindowTitle(QApplication::translate("dialoginv", "Dialog", Q_NULLPTR));
        invite->setText(QApplication::translate("dialoginv", "INVITE", Q_NULLPTR));
        salle->setText(QApplication::translate("dialoginv", "SALLE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialoginv: public Ui_dialoginv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINV_H
