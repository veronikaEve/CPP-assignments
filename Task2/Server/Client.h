#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H

#include "Comms.h"

class Client: public Comms{
public:
    char *clientMessage;
    Client();
    void GetMessage();
    void ConnectSocket();
    void Chat();
};

#endif //CLIENT_CLIENT_H
