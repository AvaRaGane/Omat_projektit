#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Sovellus käynnistetty";

    //Nappien click-handlerit:
    //värit:
    connect(ui->eka,SIGNAL(clicked(bool)),this,SLOT(colourButtonHandler()));
    connect(ui->toka,SIGNAL(clicked(bool)),this,SLOT(colourButtonHandler()));
    connect(ui->kolmas,SIGNAL(clicked(bool)),this,SLOT(colourButtonHandler()));
    connect(ui->neljas,SIGNAL(clicked(bool)),this,SLOT(colourButtonHandler()));

    connect(ui->check,SIGNAL(clicked(bool)),this,SLOT(checkButtonHandler()));
    connect(ui->startti,SIGNAL(clicked(bool)),this,SLOT(startButtonHandler()));

    pQTimer = new QTimer(this);    //tuhoutuu automaattisesti, kun mainwindow tuhoutuu
    pQTimer->setSingleShot(false);// antaa varmasti jatkuvasti timeoutteja
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(taimeri()));
    pQTimer->start(1000);   //käynnistetään Timeri juoksemaan 1000ms välein

    ui->eka->setText("Paina\nvaihtaaksesi\nväriä");
    ui->toka->setText("Paina\nvaihtaaksesi\nväriä");
    ui->kolmas->setText("Paina\nvaihtaaksesi\nväriä");
    ui->neljas->setText("Paina\nvaihtaaksesi\nväriä");
    ui->check->setText("Paina\ntarkistaaksesi\ntulos");
    ui->startti->setText("STARTTI");
    ui->info->setText("Syötä luku, joka auttaa arpomaan arvottavaa vastausta");

    ui->Lokki->setText("Sovellus käynnistetty");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::varit(const QString &name, int amma)
{
    QStringList varit = {"white", "black", "green", "red", "yellow", "blue"};
    // Aseta taustaväri mEka-arvon perusteella
    QString colorName = varit[amma];
    if (colorName == "white") {
        if (name=="eka"){
            ui->eka->setStyleSheet("background-color: #FFFFFF; color: black;");
            ui->eka->setText("Valkea");
        } else if (name=="toka"){
            ui->toka->setStyleSheet("background-color: #FFFFFF; color: black;");
            ui->toka->setText("Valkea");
        } else if (name=="kolmas"){
            ui->kolmas->setStyleSheet("background-color: #FFFFFF; color: black;");
            ui->kolmas->setText("Valkea");
        } else if (name=="neljas"){
            ui->neljas->setStyleSheet("background-color: #FFFFFF; color: black;");
            ui->neljas->setText("Valkea");
        }
    } else if (colorName == "black") {
        if (name=="eka"){
            ui->eka->setStyleSheet("background-color: black; color: white;");
            ui->eka->setText("Musta");
        } else if (name=="toka"){
            ui->toka->setStyleSheet("background-color: black; color: white;");
            ui->toka->setText("Musta");
        } else if (name=="kolmas"){
            ui->kolmas->setStyleSheet("background-color: black; color: white;");
            ui->kolmas->setText("Musta");
        } else if (name=="neljas"){
            ui->neljas->setStyleSheet("background-color: black; color: white;");
            ui->neljas->setText("Musta");
        }

    } else if (colorName == "green") {
        if (name=="eka"){
            ui->eka->setStyleSheet("background-color: green; color: white;");
            ui->eka->setText("Vihreä");
        } else if (name=="toka"){
            ui->toka->setStyleSheet("background-color: green; color: white;");
            ui->toka->setText("Vihreä");
        } else if (name=="kolmas"){
            ui->kolmas->setStyleSheet("background-color: green; color: white;");
            ui->kolmas->setText("Vihreä");
        } else if (name=="neljas"){
            ui->neljas->setStyleSheet("background-color: green; color: white;");
            ui->neljas->setText("Vihreä");
        }
    } else if (colorName == "red") {
        if (name=="eka"){
            ui->eka->setStyleSheet("background-color: red; color: white;");
            ui->eka->setText("Punainen");
        } else if (name=="toka"){
            ui->toka->setStyleSheet("background-color: red; color: white;");
            ui->toka->setText("Punainen");
        } else if (name=="kolmas"){
            ui->kolmas->setStyleSheet("background-color: red; color: white;");
            ui->kolmas->setText("Punainen");
        } else if (name=="neljas"){
            ui->neljas->setStyleSheet("background-color: red; color: white;");
            ui->neljas->setText("Punainen");
        }
    } else if (colorName == "yellow") {
        if (name=="eka"){
            ui->eka->setStyleSheet("background-color: yellow; color: black;");
            ui->eka->setText("Keltainen");
        } else if (name=="toka"){
            ui->toka->setStyleSheet("background-color: yellow; color: black;");
            ui->toka->setText("Keltainen");
        } else if (name=="kolmas"){
            ui->kolmas->setStyleSheet("background-color: yellow; color: black;");
            ui->kolmas->setText("Keltainen");
        } else if (name=="neljas"){
            ui->neljas->setStyleSheet("background-color: yellow; color: black;");
            ui->neljas->setText("Keltainen");
        }
    } else if (colorName == "blue") {
        if (name=="eka"){
            ui->eka->setStyleSheet("background-color: blue; color: white;");
            ui->eka->setText("Sininen");
        } else if (name=="toka"){
            ui->toka->setStyleSheet("background-color: blue; color: white;");
            ui->toka->setText("Sininen");
        } else if (name=="kolmas"){
            ui->kolmas->setStyleSheet("background-color: blue; color: white;");
            ui->kolmas->setText("Sininen");
        } else if (name=="neljas"){
            ui->neljas->setStyleSheet("background-color: blue; color: white;");
            ui->neljas->setText("Sininen");
        }
    }
}

void MainWindow::colourButtonHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;
    if (name=="eka"){
        if (mEka==5){
            mEka=0;
            qDebug() << "mEka 5 to 0";
        }else {
            mEka++;
            qDebug() << "mEka++";
        }
        varit(name, mEka);
    };
    if (name=="toka"){
        if (mToka==5){
            mToka=0;
            qDebug() << "mToka 5 to 0";
        } else {
            mToka++;
            qDebug() << "mToka++";
        };
        varit(name, mToka);
    };
    if (name=="kolmas"){
        if (mKolmas==5){
            mKolmas=0;
            qDebug() << "mKolmas 5 to 0";
        } else {
            mKolmas++;
            qDebug() << "mKolmas++";
        };
        varit(name, mKolmas);
    };
    if (name=="neljas"){
        if (mNeljas==5){
            mNeljas=0;
            qDebug() << "mNeljas 5 to 0";
        } else {
            mNeljas++;
            qDebug() << "mNeljas++";
        };
        varit(name, mNeljas);
    };
    qDebug() << "mEka= "<<mEka;
    qDebug() << "mToka= "<< mToka;
    qDebug() << "mKolmas= "<< mKolmas;
    qDebug() << "mNeljas= "<< mNeljas;
}

void MainWindow::startButtonHandler()
{
    qDebug() << "startButton pressed";
    QString luku = ui->arpoja->text();
    qDebug()<<"Luettiin laatikosta teksti ="<<luku;
    int kerroin = luku.toInt();
    srand(sLuku*kerroin);
    aEka= rand() % 6;
    aToka= rand() % 6;
    aKolmas= rand() % 6;
    aNeljas= rand() % 6;
    siirtoja=0;
    qDebug() << "aEka= "<<aEka;
    qDebug() << "aToka= "<< aToka;
    qDebug() << "aKolmas= "<< aKolmas;
    qDebug() << "aNeljas= "<< aNeljas;
    QString sisalto = ui->Lokki->toPlainText();
    QString teksti = "\nLet the Game Begin!\nAlustettiin uusi oikea vastaus.\n" + sisalto;
    ui->Lokki->setText(teksti);

}

void MainWindow::checkButtonHandler()
{
    int kokonaanOikein=0;
//  int variOikein=0;
    qDebug() << "checkButton pressed";
    if (aEka==mEka&&aToka==mToka&&aKolmas==mKolmas&&aNeljas==mNeljas){
        QString sisalto = ui->Lokki->toPlainText();
        QString teksti = +"\nVoitit!!!\nSiirtoja käytit: " +QString::number(siirtoja)+ sisalto;
        ui->Lokki->setText(teksti);
    }else{
        //montako kokonaan oikein ja montako väriä oikein
        if(aEka==mEka){
            kokonaanOikein++;
        }
        if(aToka==mToka){
            kokonaanOikein++;
        }
        if(aKolmas==mKolmas){
            kokonaanOikein++;
        }
        if(aNeljas==mNeljas){
            kokonaanOikein++;
        }
//        if(aEka==mToka){
//            variOikein++;
//        }else if(aEka==mKolmas){
//            variOikein++;
//        }else if(aEka==mNeljas){
//            variOikein++;
//        }else if(aToka==mKolmas){
//            variOikein++;
//        }else if(aToka==mNeljas){
//            variOikein++;
//        }else if(aKolmas==mNeljas){
//            variOikein++;
//        }
        qDebug() << "Oikein ja oikeassa paikassa= "<<kokonaanOikein;
//        qDebug() << "Oikein mutta väärässä paikassa= "<<variOikein;
        siirtoja++;
        QString sisalto = ui->Lokki->toPlainText();
        //QString teksti = "\n"+QString::number(siirtoja)+"Kokonaan oikeita " + QString::number(kokonaanOikein) + "\nOikea väri väärässä paikassa " + QString::number(variOikein)+sisalto;
        QString teksti = "\n"+QString::number(siirtoja)+". Kokonaan oikeita " + QString::number(kokonaanOikein) +sisalto;

        ui->Lokki->setText(teksti);
    };

}

void MainWindow::taimeri()
{
    sLuku++;
    //qDebug() << "sLuku= "<<sLuku;
}

