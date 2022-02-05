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

//char Client::GetMessage() {
//        char buffer[bufferSize];
//        cout << "Enter your message: ";
//        cin.getline(buffer, bufferSize);
//        cout << "You typed: " << buffer << endl;
//       clientMessage = buffer;
//        cout << "fruit:" << clientMessage << endl; // this outputs the actual thing
//}

char[bufferSize] Client::GetMessage() {
    char buffer[bufferSize];
    cout << "Enter your message: ";
    cin.getline(buffer, bufferSize);
    cout << "You typed: " << buffer << endl;
    clientMessage = buffer;
    return clientMessage;
}

void Client::Chat() {
    while (true){

        SendMessage( clientMessage, newSocket);

        if(Comms::Quit(clientMessage)) break;
    }
}