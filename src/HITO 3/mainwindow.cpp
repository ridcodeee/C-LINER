#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QFormLayout>
#include <QGraphicsLineItem>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    configurarInterfaz();
}

MainWindow::~MainWindow()
{
}

void MainWindow::configurarInterfaz()
{
    // Configuración general de la ventana
    this->setWindowTitle("C-LINER: Simulador de Encuentro de Vehículos");
    this->resize(1000, 600);
    this->setStyleSheet("QMainWindow { background-color: #F0F0F0; } "
                        "QLabel, QRadioButton { font-family: 'Segoe UI', Arial; font-size: 14px; color: #333333; } "
                        "QPushButton { font-weight: bold; background-color: #0078D7; color: white; padding: 8px; border-radius: 4px; } "
                        "QPushButton:hover { background-color: #005A9E; }");

    QWidget *widgetCentral = new QWidget(this);
    this->setCentralWidget(widgetCentral);

    // Layout principal vertical
    QVBoxLayout *layoutPrincipal = new QVBoxLayout(widgetCentral);

    QHBoxLayout *layoutControles = new QHBoxLayout();

    // 1. Selector de Unidades
    QGroupBox *grupoUnidades = new QGroupBox("Unidades de Medida");
    QVBoxLayout *layoutUnidades = new QVBoxLayout();
    rbKm = new QRadioButton("Km/s");
    rbM = new QRadioButton("m/s");
    rbMi = new QRadioButton("millas/s");
    rbKm->setChecked(true); // Seleccionado por defecto
    layoutUnidades->addWidget(rbKm);
    layoutUnidades->addWidget(rbM);
    layoutUnidades->addWidget(rbMi);
    grupoUnidades->setLayout(layoutUnidades);

    QGroupBox *grupoVehiculo1 = new QGroupBox("Vehículo 1");
    QFormLayout *layoutV1 = new QFormLayout();
    inputPos1 = new QLineEdit("0");
    inputVel1 = new QLineEdit("0");
    layoutV1->addRow("Posición Inicial:", inputPos1);
    layoutV1->addRow("Velocidad:", inputVel1);
    grupoVehiculo1->setLayout(layoutV1);

    QGroupBox *grupoVehiculo2 = new QGroupBox("Vehículo 2");
    QFormLayout *layoutV2 = new QFormLayout();
    inputPos2 = new QLineEdit("0");
    inputVel2 = new QLineEdit("0");
    layoutV2->addRow("Posición Inicial:", inputPos2);
    layoutV2->addRow("Velocidad:", inputVel2);
    grupoVehiculo2->setLayout(layoutV2);

    btnCalcular = new QPushButton("CALCULAR ENCUENTRO");
    connect(btnCalcular, &QPushButton::clicked, this, &MainWindow::calcularYMostrarEncuentro);

    layoutControles->addWidget(grupoUnidades);
    layoutControles->addWidget(grupoVehiculo1);
    layoutControles->addWidget(grupoVehiculo2);
    layoutControles->addWidget(btnCalcular);

    lblResultado = new QLabel("Ingrese los datos y presione calcular.");
    lblResultado->setAlignment(Qt::AlignCenter);
    lblResultado->setStyleSheet("font-size: 16px; font-weight: bold; color: #D83B01; padding: 10px;");

    vistaPlano = new QGraphicsView();
    escena = new QGraphicsScene(this);
    vistaPlano->setScene(escena);
    vistaPlano->setRenderHint(QPainter::Antialiasing);
    vistaPlano->setBackgroundBrush(QBrush(QColor("#FFFFFF")));

    QPen penEje(Qt::black, 2);
    escena->addLine(-2000, 0, 2000, 0, penEje);
    escena->addLine(0, -10, 0, 10, penEje); // Marca del cero
    QGraphicsTextItem *textoCero = escena->addText("0");
    textoCero->setPos(-5, 10);

    imgAuto1 = new QGraphicsPixmapItem(QPixmap("auto1.png").scaled(50, 30, Qt::KeepAspectRatio));
    imgAuto2 = new QGraphicsPixmapItem(QPixmap("auto2.png").scaled(50, 30, Qt::KeepAspectRatio));
    escena->addItem(imgAuto1);
    escena->addItem(imgAuto2);

    imgAuto1->setPos(0, -30);
    imgAuto2->setPos(0, -30);

    layoutPrincipal->addLayout(layoutControles, 1);
    layoutPrincipal->addWidget(lblResultado, 0);
    layoutPrincipal->addWidget(vistaPlano, 3);
}

void MainWindow::calcularYMostrarEncuentro()
{
    // 1. Obtener los valores ingresados por el usuario
    float p1 = inputPos1->text().toFloat();
    float v1 = inputVel1->text().toFloat();
    float p2 = inputPos2->text().toFloat();
    float v2 = inputVel2->text().toFloat();

    // 2. Determinar la unidad
    QString unidad = "Km";
    if (rbM->isChecked()) unidad = "metros";
    else if (rbMi->isChecked()) unidad = "millas";

    // 3. Lógica trasladada desde funciones.cpp
    bool noSeEncuentran = false;

    if (v1 == v2 && p1 != p2) {
        noSeEncuentran = true;
    }

    float tiempoColision = 0.0f;
    float distanciaTotal = 0.0f;

    if (!noSeEncuentran) {
        tiempoColision = (p2 - p1) / (v1 - v2);

        if (tiempoColision < 0) {
            noSeEncuentran = true;
        }
    }

    // 4. Mostrar Resultados
    if (noSeEncuentran) {
        lblResultado->setText("-> Ambos vehículos NUNCA se encontrarán.");
    } else {
        distanciaTotal = p1 + (v1 * tiempoColision);
        QString mensaje = QString("-> Se encontrarán en la posición: %1 %2 | Tiempo: %3 segundos")
                              .arg(distanciaTotal)
                              .arg(unidad)
                              .arg(tiempoColision);
        lblResultado->setText(mensaje);
    }

    int escalaGrafica = 10;
    imgAuto1->setPos(p1 * escalaGrafica, -35);
    imgAuto2->setPos(p2 * escalaGrafica, -35);

    vistaPlano->centerOn(((p1 + p2) / 2) * escalaGrafica, 0);
}