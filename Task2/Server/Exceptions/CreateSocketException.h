#ifndef CLIENT_CREATESOCKETEXCEPTION_H
#define CLIENT_CREATESOCKETEXCEPTION_H
#include <exception>
using namespace std;

class CreateSocketException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't create socket";
    }
};

#endif //CLIENT_CREATESOCKETEXCEPTION_H
