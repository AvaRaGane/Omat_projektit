#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int sLuku=0;
    int mEka=0, mToka=0, mKolmas=0, mNeljas=0;
    int aEka=0, aToka=0, aKolmas=0, aNeljas=0;
    QTimer * pQTimer;
    void varit(const QString &name, int amma);
    int siirtoja=0;
private slots:
    void colourButtonHandler();
    void startButtonHandler();
    void checkButtonHandler();
    void taimeri();
};
#endif // MAINWINDOW_H
