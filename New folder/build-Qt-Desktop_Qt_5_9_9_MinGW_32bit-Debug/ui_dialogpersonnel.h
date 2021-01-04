/********************************************************************************
** Form generated from reading UI file 'dialogpersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPERSONNEL_H
#define UI_DIALOGPERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogpersonnel
{
public:
    QLabel *label_13;
    QPushButton *nextcrud;
    QPushButton *logout;
    QPushButton *nextmodule;
    QPushButton *logout_2;
    QPushButton *previousmodule;
    QTabWidget *tabWidget;
    QWidget *create;
    QPushButton *ajouter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_nbrj;
    QLineEdit *lineEdit_idr;
    QWidget *read;
    QTableView *tabcli;
    QLineEdit *search;
    QPushButton *id_asc;
    QPushButton *id_desc;
    QPushButton *num_asc;
    QPushButton *num_desc;
    QPushButton *des_asc;
    QPushButton *des_desc;
    QPushButton *montant_asc;
    QPushButton *montant_desc;
    QPushButton *type_asc;
    QPushButton *type_desc;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_id;
    QLineEdit *txt_num;
    QLineEdit *txt_des;
    QLineEdit *txt_mont;
    QLineEdit *txt_type;
    QWidget *update;
    QLineEdit *idEdit;
    QPushButton *edit;
    QLabel *label_3;
    QLineEdit *edit_idc;
    QLineEdit *editDate;
    QLineEdit *edit_nom;
    QLineEdit *edit_prenom;
    QPushButton *editOk;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *deletee;
    QPushButton *delete_btn;
    QLabel *label_2;
    QLineEdit *deleteLine;
    QPushButton *back;
    QPushButton *prevcrud;

    void setupUi(QDialog *dialogpersonnel)
    {
        if (dialogpersonnel->objectName().isEmpty())
            dialogpersonnel->setObjectName(QStringLiteral("dialogpersonnel"));
        dialogpersonnel->resize(654, 496);
        dialogpersonnel->setStyleSheet(QLatin1String("QLabel {\n"
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
"\n"
"}\n"
"QPushButton:hover { background-color: white;\n"
"color:black;\n"
"text-decoration: underline; }\n"
""));
        label_13 = new QLabel(dialogpersonnel);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 0, 151, 31));
        label_13->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        nextcrud = new QPushButton(dialogpersonnel);
        nextcrud->setObjectName(QStringLiteral("nextcrud"));
        nextcrud->setGeometry(QRect(360, 0, 21, 31));
        nextcrud->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        logout = new QPushButton(dialogpersonnel);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(550, 0, 71, 21));
        logout->setCursor(QCursor(Qt::PointingHandCursor));
        logout->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        nextmodule = new QPushButton(dialogpersonnel);
        nextmodule->setObjectName(QStringLiteral("nextmodule"));
        nextmodule->setGeometry(QRect(620, 450, 20, 41));
        nextmodule->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        logout_2 = new QPushButton(dialogpersonnel);
        logout_2->setObjectName(QStringLiteral("logout_2"));
        logout_2->setGeometry(QRect(620, 0, 21, 21));
        logout_2->setCursor(QCursor(Qt::PointingHandCursor));
        logout_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        previousmodule = new QPushButton(dialogpersonnel);
        previousmodule->setObjectName(QStringLiteral("previousmodule"));
        previousmodule->setGeometry(QRect(0, 450, 21, 41));
        previousmodule->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        tabWidget = new QTabWidget(dialogpersonnel);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 631, 411));
        create = new QWidget();
        create->setObjectName(QStringLiteral("create"));
        ajouter = new QPushButton(create);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(200, 340, 241, 41));
        ajouter->setCursor(QCursor(Qt::PointingHandCursor));
        ajouter->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        verticalLayoutWidget = new QWidget(create);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 30, 91, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        verticalLayoutWidget_2 = new QWidget(create);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(200, 30, 341, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_id = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        verticalLayout_2->addWidget(lineEdit_id);

        lineEdit_nom = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        verticalLayout_2->addWidget(lineEdit_nom);

        lineEdit_prenom = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        verticalLayout_2->addWidget(lineEdit_prenom);

        lineEdit_nbrj = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_nbrj->setObjectName(QStringLiteral("lineEdit_nbrj"));
        lineEdit_nbrj->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        verticalLayout_2->addWidget(lineEdit_nbrj);

        lineEdit_idr = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_idr->setObjectName(QStringLiteral("lineEdit_idr"));
        lineEdit_idr->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        verticalLayout_2->addWidget(lineEdit_idr);

        tabWidget->addTab(create, QString());
        read = new QWidget();
        read->setObjectName(QStringLiteral("read"));
        tabcli = new QTableView(read);
        tabcli->setObjectName(QStringLiteral("tabcli"));
        tabcli->setGeometry(QRect(10, 40, 611, 251));
        tabcli->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture54.png);"));
        search = new QLineEdit(read);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(490, 10, 113, 20));
        search->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        id_asc = new QPushButton(read);
        id_asc->setObjectName(QStringLiteral("id_asc"));
        id_asc->setGeometry(QRect(-60, 40, 201, 31));
        id_asc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        id_desc = new QPushButton(read);
        id_desc->setObjectName(QStringLiteral("id_desc"));
        id_desc->setGeometry(QRect(20, 40, 121, 31));
        id_desc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: none;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        num_asc = new QPushButton(read);
        num_asc->setObjectName(QStringLiteral("num_asc"));
        num_asc->setGeometry(QRect(130, 40, 101, 31));
        num_asc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        num_desc = new QPushButton(read);
        num_desc->setObjectName(QStringLiteral("num_desc"));
        num_desc->setGeometry(QRect(130, 40, 101, 31));
        num_desc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        des_asc = new QPushButton(read);
        des_asc->setObjectName(QStringLiteral("des_asc"));
        des_asc->setGeometry(QRect(220, 40, 101, 31));
        des_asc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        des_desc = new QPushButton(read);
        des_desc->setObjectName(QStringLiteral("des_desc"));
        des_desc->setGeometry(QRect(220, 40, 101, 31));
        des_desc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        montant_asc = new QPushButton(read);
        montant_asc->setObjectName(QStringLiteral("montant_asc"));
        montant_asc->setGeometry(QRect(325, 40, 101, 31));
        montant_asc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        montant_desc = new QPushButton(read);
        montant_desc->setObjectName(QStringLiteral("montant_desc"));
        montant_desc->setGeometry(QRect(325, 40, 101, 31));
        montant_desc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        type_asc = new QPushButton(read);
        type_asc->setObjectName(QStringLiteral("type_asc"));
        type_asc->setGeometry(QRect(420, 40, 101, 31));
        type_asc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        type_desc = new QPushButton(read);
        type_desc->setObjectName(QStringLiteral("type_desc"));
        type_desc->setGeometry(QRect(420, 40, 101, 31));
        type_desc->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"color: grey;\n"
"font-weight: bold;\n"
"background-color: none;\n"
"border-width: none;\n"
"border-color: none;\n"
"border-style: none;\n"
"border-radius: none;\n"
"padding: none;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QPushButton:hover { background-color: none;\n"
"color:black;\n"
"text-decoration: none; }"));
        pushButton = new QPushButton(read);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 61, 21));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        pushButton_2 = new QPushButton(read);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 340, 161, 23));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        pushButton_3 = new QPushButton(read);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(324, 340, 161, 23));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        horizontalLayoutWidget = new QWidget(read);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 300, 591, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        txt_id = new QLineEdit(horizontalLayoutWidget);
        txt_id->setObjectName(QStringLiteral("txt_id"));
        txt_id->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        horizontalLayout->addWidget(txt_id);

        txt_num = new QLineEdit(horizontalLayoutWidget);
        txt_num->setObjectName(QStringLiteral("txt_num"));
        txt_num->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        horizontalLayout->addWidget(txt_num);

        txt_des = new QLineEdit(horizontalLayoutWidget);
        txt_des->setObjectName(QStringLiteral("txt_des"));
        txt_des->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        horizontalLayout->addWidget(txt_des);

        txt_mont = new QLineEdit(horizontalLayoutWidget);
        txt_mont->setObjectName(QStringLiteral("txt_mont"));
        txt_mont->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        horizontalLayout->addWidget(txt_mont);

        txt_type = new QLineEdit(horizontalLayoutWidget);
        txt_type->setObjectName(QStringLiteral("txt_type"));
        txt_type->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));

        horizontalLayout->addWidget(txt_type);

        tabWidget->addTab(read, QString());
        update = new QWidget();
        update->setObjectName(QStringLiteral("update"));
        idEdit = new QLineEdit(update);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(170, 50, 231, 20));
        idEdit->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        edit = new QPushButton(update);
        edit->setObjectName(QStringLiteral("edit"));
        edit->setGeometry(QRect(430, 50, 62, 21));
        edit->setCursor(QCursor(Qt::PointingHandCursor));
        edit->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        label_3 = new QLabel(update);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 50, 61, 21));
        edit_idc = new QLineEdit(update);
        edit_idc->setObjectName(QStringLiteral("edit_idc"));
        edit_idc->setGeometry(QRect(130, 140, 113, 20));
        edit_idc->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        editDate = new QLineEdit(update);
        editDate->setObjectName(QStringLiteral("editDate"));
        editDate->setGeometry(QRect(390, 140, 113, 20));
        editDate->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        edit_nom = new QLineEdit(update);
        edit_nom->setObjectName(QStringLiteral("edit_nom"));
        edit_nom->setGeometry(QRect(130, 240, 113, 20));
        edit_nom->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        edit_prenom = new QLineEdit(update);
        edit_prenom->setObjectName(QStringLiteral("edit_prenom"));
        edit_prenom->setGeometry(QRect(390, 240, 113, 20));
        edit_prenom->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        editOk = new QPushButton(update);
        editOk->setObjectName(QStringLiteral("editOk"));
        editOk->setGeometry(QRect(240, 320, 161, 21));
        editOk->setCursor(QCursor(Qt::PointingHandCursor));
        editOk->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        label_4 = new QLabel(update);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 81, 51));
        label_5 = new QLabel(update);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 130, 81, 31));
        label_6 = new QLabel(update);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 240, 61, 16));
        label_7 = new QLabel(update);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 240, 81, 21));
        tabWidget->addTab(update, QString());
        deletee = new QWidget();
        deletee->setObjectName(QStringLiteral("deletee"));
        delete_btn = new QPushButton(deletee);
        delete_btn->setObjectName(QStringLiteral("delete_btn"));
        delete_btn->setGeometry(QRect(260, 210, 62, 21));
        delete_btn->setCursor(QCursor(Qt::PointingHandCursor));
        delete_btn->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        label_2 = new QLabel(deletee);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 130, 47, 21));
        deleteLine = new QLineEdit(deletee);
        deleteLine->setObjectName(QStringLiteral("deleteLine"));
        deleteLine->setGeometry(QRect(150, 130, 291, 20));
        deleteLine->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        tabWidget->addTab(deletee, QString());
        back = new QPushButton(dialogpersonnel);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 450, 601, 41));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        prevcrud = new QPushButton(dialogpersonnel);
        prevcrud->setObjectName(QStringLiteral("prevcrud"));
        prevcrud->setGeometry(QRect(210, 0, 21, 31));
        prevcrud->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialogpersonnel);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(dialogpersonnel);
    } // setupUi

    void retranslateUi(QDialog *dialogpersonnel)
    {
        dialogpersonnel->setWindowTitle(QApplication::translate("dialogpersonnel", "Dialog", Q_NULLPTR));
        label_13->setText(QApplication::translate("dialogpersonnel", "  PERSONNEL", Q_NULLPTR));
        nextcrud->setText(QApplication::translate("dialogpersonnel", "\342\206\222", Q_NULLPTR));
        logout->setText(QApplication::translate("dialogpersonnel", "LOGOUT", Q_NULLPTR));
        nextmodule->setText(QApplication::translate("dialogpersonnel", "\342\206\222", Q_NULLPTR));
        logout_2->setText(QApplication::translate("dialogpersonnel", "X", Q_NULLPTR));
        previousmodule->setText(QApplication::translate("dialogpersonnel", "\342\206\220", Q_NULLPTR));
        ajouter->setText(QApplication::translate("dialogpersonnel", "Add", Q_NULLPTR));
        label_8->setText(QApplication::translate("dialogpersonnel", "PERSONNEL ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("dialogpersonnel", "NOM :", Q_NULLPTR));
        label_10->setText(QApplication::translate("dialogpersonnel", "PRENOM :", Q_NULLPTR));
        label_11->setText(QApplication::translate("dialogpersonnel", "NBRJ :", Q_NULLPTR));
        label_12->setText(QApplication::translate("dialogpersonnel", "ID ROLE :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(create), QApplication::translate("dialogpersonnel", "CREATE", Q_NULLPTR));
        id_asc->setText(QApplication::translate("dialogpersonnel", "                                      ^", Q_NULLPTR));
        id_desc->setText(QApplication::translate("dialogpersonnel", "           v", Q_NULLPTR));
        num_asc->setText(QApplication::translate("dialogpersonnel", "                            ^", Q_NULLPTR));
        num_desc->setText(QApplication::translate("dialogpersonnel", "                            v", Q_NULLPTR));
        des_asc->setText(QApplication::translate("dialogpersonnel", "                            ^", Q_NULLPTR));
        des_desc->setText(QApplication::translate("dialogpersonnel", "                            v", Q_NULLPTR));
        montant_asc->setText(QApplication::translate("dialogpersonnel", "                            ^", Q_NULLPTR));
        montant_desc->setText(QApplication::translate("dialogpersonnel", "                            v", Q_NULLPTR));
        type_asc->setText(QApplication::translate("dialogpersonnel", "                            ^", Q_NULLPTR));
        type_desc->setText(QApplication::translate("dialogpersonnel", "                            v", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dialogpersonnel", "PRINT", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("dialogpersonnel", "Delete", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("dialogpersonnel", "Modify", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(read), QApplication::translate("dialogpersonnel", "READ", Q_NULLPTR));
        edit->setText(QApplication::translate("dialogpersonnel", "Select", Q_NULLPTR));
        label_3->setText(QApplication::translate("dialogpersonnel", "ID :", Q_NULLPTR));
        editOk->setText(QApplication::translate("dialogpersonnel", "Save", Q_NULLPTR));
        label_4->setText(QApplication::translate("dialogpersonnel", "NEW NOM : ", Q_NULLPTR));
        label_5->setText(QApplication::translate("dialogpersonnel", "NEW PRENOM :", Q_NULLPTR));
        label_6->setText(QApplication::translate("dialogpersonnel", "NEW NBJR :", Q_NULLPTR));
        label_7->setText(QApplication::translate("dialogpersonnel", "NEW ID ROLE :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(update), QApplication::translate("dialogpersonnel", "UPDATE", Q_NULLPTR));
        delete_btn->setText(QApplication::translate("dialogpersonnel", "Delete", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialogpersonnel", "ID :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(deletee), QApplication::translate("dialogpersonnel", "DELETE", Q_NULLPTR));
        back->setText(QApplication::translate("dialogpersonnel", "MAINMENU", Q_NULLPTR));
        prevcrud->setText(QApplication::translate("dialogpersonnel", "\342\206\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogpersonnel: public Ui_dialogpersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPERSONNEL_H
