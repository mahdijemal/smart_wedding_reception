/********************************************************************************
** Form generated from reading UI file 'dialogrevenus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREVENUS_H
#define UI_DIALOGREVENUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogrevenus
{
public:
    QTabWidget *tabWidget;
    QWidget *create;
    QPushButton *ajouter;
    QLineEdit *id_client;
    QLineEdit *nom_client;
    QLineEdit *numero_transation;
    QLineEdit *type_2;
    QLineEdit *montant_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *read;
    QTableView *tabrev;
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
    QPushButton *previousmodule;
    QPushButton *pushButton;
    QLineEdit *txt_type;
    QLineEdit *txt_des;
    QPushButton *pushButton_2;
    QLineEdit *txt_id;
    QLineEdit *txt_num;
    QPushButton *pushButton_3;
    QLineEdit *txt_mont;
    QWidget *update;
    QLineEdit *idEdit;
    QPushButton *edit;
    QLabel *label_3;
    QLineEdit *num;
    QLineEdit *designiation;
    QLineEdit *montant;
    QLineEdit *type;
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
    QPushButton *logout;
    QLabel *label_13;
    QPushButton *close;
    QPushButton *nextmodule;
    QPushButton *previousmodule_2;
    QPushButton *prevcrud;
    QPushButton *nextcrud;

    void setupUi(QDialog *dialogrevenus)
    {
        if (dialogrevenus->objectName().isEmpty())
            dialogrevenus->setObjectName(QStringLiteral("dialogrevenus"));
        dialogrevenus->resize(635, 493);
        dialogrevenus->setStyleSheet(QLatin1String("QLabel {\n"
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
"text-decoration: underline; }"));
        tabWidget = new QTabWidget(dialogrevenus);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 631, 411));
        create = new QWidget();
        create->setObjectName(QStringLiteral("create"));
        ajouter = new QPushButton(create);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(260, 270, 141, 16));
        ajouter->setCursor(QCursor(Qt::PointingHandCursor));
        ajouter->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        id_client = new QLineEdit(create);
        id_client->setObjectName(QStringLiteral("id_client"));
        id_client->setGeometry(QRect(190, 40, 321, 20));
        id_client->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        nom_client = new QLineEdit(create);
        nom_client->setObjectName(QStringLiteral("nom_client"));
        nom_client->setGeometry(QRect(190, 80, 321, 20));
        nom_client->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        numero_transation = new QLineEdit(create);
        numero_transation->setObjectName(QStringLiteral("numero_transation"));
        numero_transation->setGeometry(QRect(190, 120, 321, 20));
        numero_transation->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        type_2 = new QLineEdit(create);
        type_2->setObjectName(QStringLiteral("type_2"));
        type_2->setGeometry(QRect(190, 160, 321, 20));
        type_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        montant_2 = new QLineEdit(create);
        montant_2->setObjectName(QStringLiteral("montant_2"));
        montant_2->setGeometry(QRect(190, 200, 321, 20));
        montant_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        label_8 = new QLabel(create);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 40, 47, 13));
        label_9 = new QLabel(create);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 80, 61, 16));
        label_10 = new QLabel(create);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 120, 121, 20));
        label_11 = new QLabel(create);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 160, 47, 13));
        label_12 = new QLabel(create);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 200, 47, 13));
        tabWidget->addTab(create, QString());
        read = new QWidget();
        read->setObjectName(QStringLiteral("read"));
        tabrev = new QTableView(read);
        tabrev->setObjectName(QStringLiteral("tabrev"));
        tabrev->setGeometry(QRect(10, 40, 611, 251));
        tabrev->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture54.png);"));
        search = new QLineEdit(read);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(490, 10, 113, 20));
        search->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        id_asc = new QPushButton(read);
        id_asc->setObjectName(QStringLiteral("id_asc"));
        id_asc->setGeometry(QRect(20, 40, 141, 21));
        id_asc->setStyleSheet(QLatin1String("\n"
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
        id_desc = new QPushButton(read);
        id_desc->setObjectName(QStringLiteral("id_desc"));
        id_desc->setGeometry(QRect(30, 40, 121, 21));
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
        num_asc->setGeometry(QRect(130, 40, 121, 21));
        num_asc->setStyleSheet(QLatin1String("\n"
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
        num_desc = new QPushButton(read);
        num_desc->setObjectName(QStringLiteral("num_desc"));
        num_desc->setGeometry(QRect(130, 40, 121, 21));
        num_desc->setStyleSheet(QLatin1String("\n"
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
        des_asc = new QPushButton(read);
        des_asc->setObjectName(QStringLiteral("des_asc"));
        des_asc->setGeometry(QRect(240, 40, 121, 21));
        des_asc->setStyleSheet(QLatin1String("\n"
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
        des_desc = new QPushButton(read);
        des_desc->setObjectName(QStringLiteral("des_desc"));
        des_desc->setGeometry(QRect(240, 40, 121, 21));
        des_desc->setStyleSheet(QLatin1String("\n"
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
        montant_asc = new QPushButton(read);
        montant_asc->setObjectName(QStringLiteral("montant_asc"));
        montant_asc->setGeometry(QRect(340, 40, 131, 21));
        montant_asc->setStyleSheet(QLatin1String("\n"
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
        montant_desc = new QPushButton(read);
        montant_desc->setObjectName(QStringLiteral("montant_desc"));
        montant_desc->setGeometry(QRect(340, 40, 131, 21));
        montant_desc->setStyleSheet(QLatin1String("\n"
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
        type_asc = new QPushButton(read);
        type_asc->setObjectName(QStringLiteral("type_asc"));
        type_asc->setGeometry(QRect(470, 40, 91, 21));
        type_asc->setStyleSheet(QLatin1String("\n"
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
        type_desc = new QPushButton(read);
        type_desc->setObjectName(QStringLiteral("type_desc"));
        type_desc->setGeometry(QRect(470, 40, 91, 21));
        type_desc->setStyleSheet(QLatin1String("\n"
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
        previousmodule = new QPushButton(read);
        previousmodule->setObjectName(QStringLiteral("previousmodule"));
        previousmodule->setGeometry(QRect(320, 400, 21, 41));
        previousmodule->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(read);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 61, 23));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        txt_type = new QLineEdit(read);
        txt_type->setObjectName(QStringLiteral("txt_type"));
        txt_type->setGeometry(QRect(502, 310, 111, 20));
        txt_type->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        txt_des = new QLineEdit(read);
        txt_des->setObjectName(QStringLiteral("txt_des"));
        txt_des->setGeometry(QRect(250, 310, 113, 20));
        txt_des->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        pushButton_2 = new QPushButton(read);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 350, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        txt_id = new QLineEdit(read);
        txt_id->setObjectName(QStringLiteral("txt_id"));
        txt_id->setGeometry(QRect(10, 310, 113, 20));
        txt_id->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        txt_num = new QLineEdit(read);
        txt_num->setObjectName(QStringLiteral("txt_num"));
        txt_num->setGeometry(QRect(130, 310, 113, 20));
        txt_num->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        pushButton_3 = new QPushButton(read);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 350, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        txt_mont = new QLineEdit(read);
        txt_mont->setObjectName(QStringLiteral("txt_mont"));
        txt_mont->setGeometry(QRect(380, 310, 113, 20));
        txt_mont->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        tabWidget->addTab(read, QString());
        update = new QWidget();
        update->setObjectName(QStringLiteral("update"));
        idEdit = new QLineEdit(update);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(210, 50, 113, 20));
        idEdit->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        edit = new QPushButton(update);
        edit->setObjectName(QStringLiteral("edit"));
        edit->setGeometry(QRect(430, 50, 62, 21));
        edit->setCursor(QCursor(Qt::PointingHandCursor));
        edit->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        label_3 = new QLabel(update);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 50, 61, 21));
        num = new QLineEdit(update);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(130, 140, 113, 20));
        num->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        designiation = new QLineEdit(update);
        designiation->setObjectName(QStringLiteral("designiation"));
        designiation->setGeometry(QRect(390, 140, 113, 20));
        designiation->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        montant = new QLineEdit(update);
        montant->setObjectName(QStringLiteral("montant"));
        montant->setGeometry(QRect(130, 240, 113, 20));
        montant->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        type = new QLineEdit(update);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(390, 240, 113, 20));
        type->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture5.png);"));
        editOk = new QPushButton(update);
        editOk->setObjectName(QStringLiteral("editOk"));
        editOk->setGeometry(QRect(240, 320, 62, 21));
        editOk->setCursor(QCursor(Qt::PointingHandCursor));
        editOk->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        label_4 = new QLabel(update);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 130, 91, 51));
        label_5 = new QLabel(update);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 130, 71, 31));
        label_6 = new QLabel(update);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 240, 81, 20));
        label_7 = new QLabel(update);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 240, 81, 21));
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
        back = new QPushButton(dialogrevenus);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(30, 450, 581, 41));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        logout = new QPushButton(dialogrevenus);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(550, 0, 61, 21));
        logout->setCursor(QCursor(Qt::PointingHandCursor));
        logout->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        label_13 = new QLabel(dialogrevenus);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 0, 151, 31));
        label_13->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        close = new QPushButton(dialogrevenus);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(611, 0, 20, 20));
        close->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        nextmodule = new QPushButton(dialogrevenus);
        nextmodule->setObjectName(QStringLiteral("nextmodule"));
        nextmodule->setGeometry(QRect(610, 450, 20, 41));
        nextmodule->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        previousmodule_2 = new QPushButton(dialogrevenus);
        previousmodule_2->setObjectName(QStringLiteral("previousmodule_2"));
        previousmodule_2->setGeometry(QRect(10, 450, 21, 41));
        previousmodule_2->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        prevcrud = new QPushButton(dialogrevenus);
        prevcrud->setObjectName(QStringLiteral("prevcrud"));
        prevcrud->setGeometry(QRect(210, 0, 21, 31));
        prevcrud->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));
        nextcrud = new QPushButton(dialogrevenus);
        nextcrud->setObjectName(QStringLiteral("nextcrud"));
        nextcrud->setGeometry(QRect(360, 0, 21, 31));
        nextcrud->setStyleSheet(QStringLiteral("border-image: url(:/image/image/Capture53.png);"));

        retranslateUi(dialogrevenus);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(dialogrevenus);
    } // setupUi

    void retranslateUi(QDialog *dialogrevenus)
    {
        dialogrevenus->setWindowTitle(QApplication::translate("dialogrevenus", "Dialog", Q_NULLPTR));
        ajouter->setText(QApplication::translate("dialogrevenus", "Add", Q_NULLPTR));
        label_8->setText(QApplication::translate("dialogrevenus", "ID Client", Q_NULLPTR));
        label_9->setText(QApplication::translate("dialogrevenus", "Nom Client", Q_NULLPTR));
        label_10->setText(QApplication::translate("dialogrevenus", "Numero de transation", Q_NULLPTR));
        label_11->setText(QApplication::translate("dialogrevenus", "Type", Q_NULLPTR));
        label_12->setText(QApplication::translate("dialogrevenus", "Montant", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(create), QApplication::translate("dialogrevenus", "CREATE", Q_NULLPTR));
        id_asc->setText(QApplication::translate("dialogrevenus", "           ^", Q_NULLPTR));
        id_desc->setText(QApplication::translate("dialogrevenus", "           v", Q_NULLPTR));
        num_asc->setText(QApplication::translate("dialogrevenus", "           ^", Q_NULLPTR));
        num_desc->setText(QApplication::translate("dialogrevenus", "           v", Q_NULLPTR));
        des_asc->setText(QApplication::translate("dialogrevenus", "           ^", Q_NULLPTR));
        des_desc->setText(QApplication::translate("dialogrevenus", "           v", Q_NULLPTR));
        montant_asc->setText(QApplication::translate("dialogrevenus", "           v", Q_NULLPTR));
        montant_desc->setText(QApplication::translate("dialogrevenus", "           ^", Q_NULLPTR));
        type_asc->setText(QApplication::translate("dialogrevenus", "  ^", Q_NULLPTR));
        type_desc->setText(QApplication::translate("dialogrevenus", "  v", Q_NULLPTR));
        previousmodule->setText(QApplication::translate("dialogrevenus", "\342\206\220", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dialogrevenus", "PRINT", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("dialogrevenus", "Delete", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("dialogrevenus", "Modify", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(read), QApplication::translate("dialogrevenus", "READ", Q_NULLPTR));
        edit->setText(QApplication::translate("dialogrevenus", "Select", Q_NULLPTR));
        label_3->setText(QApplication::translate("dialogrevenus", "ID :", Q_NULLPTR));
        editOk->setText(QApplication::translate("dialogrevenus", "Save", Q_NULLPTR));
        label_4->setText(QApplication::translate("dialogrevenus", "Nouveau Montant", Q_NULLPTR));
        label_5->setText(QApplication::translate("dialogrevenus", "Nouveau Nom", Q_NULLPTR));
        label_6->setText(QApplication::translate("dialogrevenus", "Nouveau Num", Q_NULLPTR));
        label_7->setText(QApplication::translate("dialogrevenus", "Nouveau Type", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(update), QApplication::translate("dialogrevenus", "UPDATE", Q_NULLPTR));
        delete_btn->setText(QApplication::translate("dialogrevenus", "Delete", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialogrevenus", "ID :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(deletee), QApplication::translate("dialogrevenus", "DELETE", Q_NULLPTR));
        back->setText(QApplication::translate("dialogrevenus", "MAINMENU", Q_NULLPTR));
        logout->setText(QApplication::translate("dialogrevenus", "LOGOUT", Q_NULLPTR));
        label_13->setText(QApplication::translate("dialogrevenus", "    REVENUS", Q_NULLPTR));
        close->setText(QApplication::translate("dialogrevenus", "X", Q_NULLPTR));
        nextmodule->setText(QApplication::translate("dialogrevenus", "\342\206\222", Q_NULLPTR));
        previousmodule_2->setText(QApplication::translate("dialogrevenus", "\342\206\220", Q_NULLPTR));
        prevcrud->setText(QApplication::translate("dialogrevenus", "\342\206\220", Q_NULLPTR));
        nextcrud->setText(QApplication::translate("dialogrevenus", "\342\206\222", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogrevenus: public Ui_dialogrevenus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREVENUS_H
