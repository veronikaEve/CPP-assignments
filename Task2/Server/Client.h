#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H

#include "Comms.h"

class Client: public Comms{
public:
    Client();

    void ConnectSocket();
    void Chat();
};

#endif //CLIENT_CLIENT_H
