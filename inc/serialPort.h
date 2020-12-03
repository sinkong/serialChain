#ifndef MYSERIALPORT_H
#define MYSERIALPORT_H
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>
#include<QDebug>


class serial : public QSerialPort
{
public:
    explicit serial();
protected:
    void scanPorts();
private:

};


#endif
//EOF
