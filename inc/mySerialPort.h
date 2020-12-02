#ifnde MYSERIALPORT_H
#define MYSERIALPORT_H
#include<QString>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>

class mySerial : public QSerialPort
{
public:
    mySerial();
protected:

private:
    QString m_PortName;

};


#endif
//EOF
