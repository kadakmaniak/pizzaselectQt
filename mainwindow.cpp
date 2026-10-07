#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->radioButtonDiavolo, &QRadioButton::toggled, this, &MainWindow::souhrn);
    connect(ui->radioButtonHawaii, &QRadioButton::toggled, this, &MainWindow::souhrn);
    connect(ui->radioButtonMargarita, &QRadioButton::toggled, this, &MainWindow::souhrn);
    connect(ui->radioButtonQuattro, &QRadioButton::toggled, this, &MainWindow::souhrn);
    connect(ui->radioButtonTvaroh, &QRadioButton::toggled, this, &MainWindow::souhrn);

    connect(ui->checkBoxHouby, &QCheckBox::toggled, this, &MainWindow::souhrn);
    connect(ui->checkBoxParmasan, &QCheckBox::toggled, this, &MainWindow::souhrn);
    connect(ui->checkBoxSalam, &QCheckBox::toggled, this, &MainWindow::souhrn);
    connect(ui->checkBoxZampion, &QCheckBox::toggled, this, &MainWindow::souhrn);
    connect(ui->checkBoxZarafek, &QCheckBox::toggled, this, &MainWindow::souhrn);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::souhrn()
{
    QString pizza;
    double cena = 0;

    if(ui->radioButtonDiavolo->isChecked())
    {
        pizza = "Diavolo";
        cena += 200;
    }
    else if(ui->radioButtonHawaii->isChecked())
    {
        pizza = "Hawaii";
        cena += 200;
    }
    else if(ui->radioButtonMargarita->isChecked())
    {
        pizza = "Margharita";
        cena += 200;
    }
    else if(ui->radioButtonQuattro->isChecked())
    {
        pizza = "Quattroforgádži";
        cena += 200;
    }
    else if(ui->radioButtonTvaroh->isChecked())
    {
        pizza = "Tvarůžková";
        cena += 200;
    }

    QString prilohy;

    if(ui->checkBoxHouby->isChecked())
    {
        prilohy += "houby, ";
        cena += 15;
    }

    if(ui->checkBoxParmasan->isChecked())
    {
        prilohy += "parmasán, ";
        cena += 15;
    }

    if(ui->checkBoxSalam->isChecked())
    {
        prilohy += "salám, ";
        cena += 15;
    }

    if(ui->checkBoxZampion->isChecked())
    {
        prilohy += "žampiony, ";
        cena += 15;
    }

    if(ui->checkBoxZarafek->isChecked())
    {
        prilohy += "zaráfkáč, ";
        cena += 15;
    }

    if(!prilohy.isEmpty())
        prilohy.removeLast();

    ui->labelCena->setText(
        "Vybral jsi si " + pizza +
        " s přílohami: " + prilohy +
        "\nCena: " + QString::number(cena) + " Kč"
        );
}