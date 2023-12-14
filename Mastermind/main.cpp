#include "mainwindow.h"

#include <QApplication>
//# Mastermind
//############################################################################################
//# Mastermindin kokeilua C++ syysloman ratoksi.
//# Ohjelman toiminnot:
//# Ohjelman käynnistyessä käynnistetään timeri, satunnaisluvun siemenlukua varten.
//# Pyydetään käyttäjältä vielä luku 1-20 väliltä, jolla kerrotaan siemenluku.
//# Arvotaan satunnaislukuina 4 eri lukua, jotka vastaa värejä:
//# 1 valkoinen
//# 2 musta
//# 3 vihreä
//# 4 punainen
//# 5 keltainen
//# 6 sininen
//# Pyydetään käyttäjältä ensimäinen arvaus, joka tehdään painamalla 4 eri nappia kunnes
//# niissä on ilmoitettu halutut värit ja tämän jälkeen kuittamalla OK nappia.
//# Lokiin tulostuu ilmoitus oliko monta väriä oikein ja kuinka monta oikealla paikalla.
//# Tämän perusteella käyttäjä pääsee tekemään uutta arvausta.
//# Kun arvaus osuu oikeaan, peli päättyy.
//# Lisäksi uuden pelin voi aloittaa milloin tahansa syöttämällä uudestaan numeron.
//    ############################################################################################
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
