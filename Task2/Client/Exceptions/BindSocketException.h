#ifndef CLIENT_BINDSOCKETEXCEPTION_H
#define CLIENT_BINDSOCKETEXCEPTION_H

#include <exception>
using namespace std;

class BindSocketException: public exception{
public:
    virtual const char* what() const throw() {
        return "Error - can't bind socket";
    }
};

#endif //CLIENT_BINDSOCKETEXCEPTION_H
