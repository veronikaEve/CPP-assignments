#include "Client.h"

void Client::ConnectSocket() {
    if (connect(newSocket, (sockaddr *) &socketAddress, sizeof(socketAddress)) == -1) {
        cout << "error with connection" << endl;
    } else {
        cout << "connection okay - now connected to Server" << endl;
    }
}

void Client::GetMessage() {
    while (true) {
        char buffer[bufferSize];
        cout << "Enter your message: ";
        cin.getline(buffer, bufferSize);
        cout << "You typed: " << buffer << endl;
        clientMessage = buffer;

        if(Comms::Quit(clientMessage)) {
            cout<<"quit"<<endl;
            break;
        }
    }
}

Client::Client() {

}
