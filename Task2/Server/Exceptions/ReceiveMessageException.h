#ifndef CLIENT_RECEIVEMESSAGEEXCEPTION_H
#define CLIENT_RECEIVEMESSAGEEXCEPTION_H
#include <exception>
using namespace std;

class ReceiveMessageException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't receive message";
    }
};


#endif //CLIENT_RECEIVEMESSAGEEXCEPTION_H
