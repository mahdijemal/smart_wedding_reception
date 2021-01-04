/********************************************************************************
** Form generated from reading UI file 'statistiques.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUES_H
#define UI_STATISTIQUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_statistiques
{
public:
    QCustomPlot *customPlot;

    void setupUi(QDialog *statistiques)
    {
        if (statistiques->objectName().isEmpty())
            statistiques->setObjectName(QStringLiteral("statistiques"));
        statistiques->resize(663, 481);
        customPlot = new QCustomPlot(statistiques);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 651, 341));

        retranslateUi(statistiques);

        QMetaObject::connectSlotsByName(statistiques);
    } // setupUi

    void retranslateUi(QDialog *statistiques)
    {
        statistiques->setWindowTitle(QApplication::translate("statistiques", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class statistiques: public Ui_statistiques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUES_H
