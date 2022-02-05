#include "Client.h"

Client::Client() {

}

void Client::ConnectSocket() {
    if (connect(newSocket, (sockaddr *) &socketAddress, sizeof(socketAddress)) == -1) {
        cout << "error with connection" << endl;
    } else {
        cout << "connection okay - now connected to Server" << endl;
    }
}

void Client::GetMessage() {
    char buffer[bufferSize];
    cout << "Enter your message: ";
    cin.getline(buffer, bufferSize);
    cout << "You typed: " << buffer << endl;
    clientMessage = buffer;
}

void Client::Chat() {
    while (true){
        GetMessage();
        SendMessage( clientMessage, newSocket);
        if(Quit(clientMessage)){
            break;
        }
    }
}
