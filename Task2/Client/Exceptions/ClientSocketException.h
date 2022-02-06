#ifndef CLIENT_CLIENTSOCKETEXCEPTION_H
#define CLIENT_CLIENTSOCKETEXCEPTION_H

#include <exception>
using namespace std;

class ClientSocketException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't get client socket";
    }
};

#endif //CLIENT_CLIENTSOCKETEXCEPTION_H
