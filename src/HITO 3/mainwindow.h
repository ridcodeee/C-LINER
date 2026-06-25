#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void calcularYMostrarEncuentro();

private:
    QRadioButton *rbKm, *rbM, *rbMi;
    QLineEdit *inputPos1, *inputVel1;
    QLineEdit *inputPos2, *inputVel2;
    QPushButton *btnCalcular;
    QLabel *lblResultado;

    QGraphicsView *vistaPlano;
    QGraphicsScene *escena;
    QGraphicsPixmapItem *imgAuto1;
    QGraphicsPixmapItem *imgAuto2;

    void configurarInterfaz();
};

#endif // MAINWINDOW_H
