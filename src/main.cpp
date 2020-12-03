#include<QApplication>
#include<QWidget>
#include"inc/mainwindow.h"
#include"inc/serialPort.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow w;
    w.setWindowIcon(QIcon(":/icons/logo"));
    w.setWindowTitle("Serial Chain");
    w.show();
    QList<QSerialPortInfo> list = QSerialPortInfo::availablePorts();
    qDebug() << "Total number of availiable ports:" << list.count();
    foreach(const QSerialPortInfo &serialportinfo, list)
    {
        qDebug() << "Port: " << serialportinfo.portName();
        qDebug() << "Location: " << serialportinfo.systemLocation();
        qDebug() << "Description: " << serialportinfo.description();
        qDebug() << "Manufactutor: " << serialportinfo.manufacturer();
        qDebug() << "Vendor Indentifier: " << serialportinfo.vendorIdentifier();
        qDebug() << "Busy: " << serialportinfo.isBusy();
    }
    return app.exec();
}
