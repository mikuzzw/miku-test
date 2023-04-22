#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>

class MyTcpServer : public QTcpServer
{
    //����QObject�� + ���Q_OBJECT�� --->֧���źŲ�
    Q_OBJECT

private:
    MyTcpServer();
public:

    //����ģʽ
    static MyTcpServer& getInstance();
};

#endif // MYTCPSERVER_H
