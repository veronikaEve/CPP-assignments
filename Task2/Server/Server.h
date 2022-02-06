#ifndef CLIENT_SERVER_H
#define CLIENT_SERVER_H

#include "Comms.h"
#include "Exceptions/BindSocketException.h"
#include "Exceptions/ListenSocketException.h"
#include "Exceptions/ClientSocketException.h"

class Server: public Comms{
public:
    Server();

    void BindSocket() throw (BindSocketException);
    void ListenSocket() throw (ListenSocketException);
    void Chat(int socket);
    int ClientSocket() throw (ClientSocketException);
};

#endif //CLIENT_SERVER_H
