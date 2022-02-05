#ifndef CLIENT_COMMS_H
#define CLIENT_COMMS_H
#include <iostream>
#include <netdb.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

class Comms {
public:
    sockaddr_in socketAddress;
    int newSocket;
    const string address = "127.0.0.1";
    const int bufferSize = 200;

    Comms();

    void CreateSocket();
    void SendMessage(char *message, int socket);
    void ReceiveMessage(int socket);
    bool Quit(char*message);

};


#endif //CLIENT_COMMS_H
