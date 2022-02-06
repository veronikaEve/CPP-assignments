#ifndef CLIENT_SENDMESSAGEEXCEPTION_H
#define CLIENT_SENDMESSAGEEXCEPTION_H
#include <exception>
using namespace std;

class SendMessageException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't send message";
    }
};

#endif //CLIENT_SENDMESSAGEEXCEPTION_H
