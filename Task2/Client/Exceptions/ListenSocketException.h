#ifndef CLIENT_LISTENSOCKETEXCEPTION_H
#define CLIENT_LISTENSOCKETEXCEPTION_H

#include <exception>
using namespace std;

class ListenSocketException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't listen to socket";
    }
};

#endif //CLIENT_LISTENSOCKETEXCEPTION_H
