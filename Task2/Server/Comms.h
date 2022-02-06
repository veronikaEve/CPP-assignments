#ifndef CLIENT_COMMS_H
#define CLIENT_COMMS_H
#include <iostream>
#include <netdb.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "Exceptions/CreateSocketException.h"
#include "Exceptions/SendMessageException.h"
#include "Exceptions/ReceiveMessageException.h"

using namespace std;

class Comms {
public:
    sockaddr_in socketAddress;
    int newSocket;
    const string address = "127.0.0.1";
    const string quitCode = "QUIT";
    const int bufferSize = 200;

    Comms();

    void CreateSocket() throw (CreateSocketException);
    void SendMessage(char *message, int socket)  throw (SendMessageException);
    void ReceiveMessage(int socket)  throw (ReceiveMessageException);
    bool Quit(char*message);

};


#endif //CLIENT_COMMS_H
