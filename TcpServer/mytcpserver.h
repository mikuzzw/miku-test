#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>

class MyTcpServer : public QTcpServer
{
    //集成QObject类 + 添加Q_OBJECT宏 --->支持信号槽
    Q_OBJECT

private:
    MyTcpServer();
public:

    //单例模式
    static MyTcpServer& getInstance();
};

#endif // MYTCPSERVER_H
