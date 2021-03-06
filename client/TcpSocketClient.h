/*************************************************************************
	> File Name: TcpSocketClient.h
	> Author: 
	> Mail: 
	> Created Time: Thursday, April 13, 2017 PM04:34:08 HKT
 ************************************************************************/

#ifndef _TCPSOCKETCLIENT_H
#define _TCPSOCKETCLIENT_H

#define SOCKET_SERVER_PORT 8899
#define SOCKET_SERVER_BUFFER_LEN 1024
#define SOCKET_SERVER_SEND_BUFFER_LEN 1024
#define SOCKET_SERVER_RECV_BUFFER_LEN 1024

#include <netinet/in.h>
#include <string>

class TcpSocketClient
{
public:
    TcpSocketClient(std::string serip);
    ~TcpSocketClient();
    bool start();

protected:
    bool sendEchoMsg();
    //std::string&& getUUID();
    std::string getUUID();

private:
    int mFd;
    sockaddr_in mSerAddr;
};

#endif
