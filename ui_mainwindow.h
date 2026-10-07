/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *labelPizza;
    QLabel *labelDoplnky;
    QRadioButton *radioButtonDiavolo;
    QCheckBox *checkBoxHouby;
    QRadioButton *radioButtonMargarita;
    QCheckBox *checkBoxZampion;
    QRadioButton *radioButtonHawaii;
    QCheckBox *checkBoxParmasan;
    QRadioButton *radioButtonTvaroh;
    QCheckBox *checkBoxZarafek;
    QRadioButton *radioButtonQuattro;
    QCheckBox *checkBoxSalam;
    QLabel *labelCena;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(533, 277);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        labelPizza = new QLabel(centralwidget);
        labelPizza->setObjectName("labelPizza");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelPizza);

        labelDoplnky = new QLabel(centralwidget);
        labelDoplnky->setObjectName("labelDoplnky");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, labelDoplnky);

        radioButtonDiavolo = new QRadioButton(centralwidget);
        radioButtonDiavolo->setObjectName("radioButtonDiavolo");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, radioButtonDiavolo);

        checkBoxHouby = new QCheckBox(centralwidget);
        checkBoxHouby->setObjectName("checkBoxHouby");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, checkBoxHouby);

        radioButtonMargarita = new QRadioButton(centralwidget);
        radioButtonMargarita->setObjectName("radioButtonMargarita");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, radioButtonMargarita);

        checkBoxZampion = new QCheckBox(centralwidget);
        checkBoxZampion->setObjectName("checkBoxZampion");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, checkBoxZampion);

        radioButtonHawaii = new QRadioButton(centralwidget);
        radioButtonHawaii->setObjectName("radioButtonHawaii");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, radioButtonHawaii);

        checkBoxParmasan = new QCheckBox(centralwidget);
        checkBoxParmasan->setObjectName("checkBoxParmasan");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, checkBoxParmasan);

        radioButtonTvaroh = new QRadioButton(centralwidget);
        radioButtonTvaroh->setObjectName("radioButtonTvaroh");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, radioButtonTvaroh);

        checkBoxZarafek = new QCheckBox(centralwidget);
        checkBoxZarafek->setObjectName("checkBoxZarafek");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, checkBoxZarafek);

        radioButtonQuattro = new QRadioButton(centralwidget);
        radioButtonQuattro->setObjectName("radioButtonQuattro");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, radioButtonQuattro);

        checkBoxSalam = new QCheckBox(centralwidget);
        checkBoxSalam->setObjectName("checkBoxSalam");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, checkBoxSalam);

        labelCena = new QLabel(centralwidget);
        labelCena->setObjectName("labelCena");

        formLayout->setWidget(6, QFormLayout::ItemRole::SpanningRole, labelCena);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 533, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelPizza->setText(QCoreApplication::translate("MainWindow", "Pizza", nullptr));
        labelDoplnky->setText(QCoreApplication::translate("MainWindow", "Dopl\305\210ky +15k\304\215", nullptr));
        radioButtonDiavolo->setText(QCoreApplication::translate("MainWindow", "Diavolo", nullptr));
        checkBoxHouby->setText(QCoreApplication::translate("MainWindow", "Houby ", nullptr));
        radioButtonMargarita->setText(QCoreApplication::translate("MainWindow", "Margharita", nullptr));
        checkBoxZampion->setText(QCoreApplication::translate("MainWindow", "\305\240ampi\303\263ni", nullptr));
        radioButtonHawaii->setText(QCoreApplication::translate("MainWindow", "Hawaii", nullptr));
        checkBoxParmasan->setText(QCoreApplication::translate("MainWindow", "Parmas\303\241n", nullptr));
        radioButtonTvaroh->setText(QCoreApplication::translate("MainWindow", "Tvar\305\257\305\276kov\303\241", nullptr));
        checkBoxZarafek->setText(QCoreApplication::translate("MainWindow", "S\303\255r Zar\303\241fk\303\241\304\215", nullptr));
        radioButtonQuattro->setText(QCoreApplication::translate("MainWindow", "Quattroforg\303\241d\305\276i", nullptr));
        checkBoxSalam->setText(QCoreApplication::translate("MainWindow", "Love\304\215\303\241k", nullptr));
        labelCena->setText(QCoreApplication::translate("MainWindow", "aaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
