#ifndef CLIENT_SERVER_H
#define CLIENT_SERVER_H

#include "Comms.h"

class Server: public Comms{
public:
    Server();
    void BindSocket();
    void ListenSocket();
    int ClientSocket();
};


#endif //CLIENT_SERVER_H
