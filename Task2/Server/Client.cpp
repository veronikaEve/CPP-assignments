#include "Client.h"

Client::Client() {

}

void Client::ConnectSocket() throw(ConnectSocketException) {
    if (connect(newSocket, (sockaddr *) &socketAddress, sizeof(socketAddress)) == -1) {
        throw ConnectSocketException();
    } else {
        cout << "Connected" << endl;
    }
}

void Client::Chat() {
    while (true){
        char buffer[bufferSize];
        cout << "Enter your message: ";
        cin.getline(buffer, bufferSize);
        cout << "You typed: " << buffer << endl;
        SendMessage(buffer, newSocket);
        if(Quit(buffer)) break;
    }
}
