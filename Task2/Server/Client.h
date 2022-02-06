#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H
#include "Exceptions/ConnectSocketException.h"

#include "Comms.h"

class Client: public Comms{
public:
    Client();

    void ConnectSocket() throw(ConnectSocketException);
    void Chat();
};

#endif //CLIENT_CLIENT_H
