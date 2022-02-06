#ifndef CLIENT_CONNECTSOCKETEXCEPTION_H
#define CLIENT_CONNECTSOCKETEXCEPTION_H
#include <exception>
using namespace std;

class ConnectSocketException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't connect to socket";
    }
};

#endif //CLIENT_CONNECTSOCKETEXCEPTION_H
