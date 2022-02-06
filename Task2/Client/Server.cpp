#include "Server.h"

Server::Server() {

}

void Server::BindSocket() throw(BindSocketException) {
    if (::bind(newSocket, (sockaddr*)&socketAddress, sizeof(socketAddress)) == -1) {
        throw BindSocketException();
    } else {
        cout << "Binding socket" << endl;
    }
}

void Server::ListenSocket() throw(ListenSocketException) {
    if (listen(newSocket, SOMAXCONN) == -1) {
        throw ListenSocketException();
    } else {
        cout << "Listening... 👂" << endl;
    }
}

int Server::ClientSocket() throw(ClientSocketException) {
    sockaddr_storage client;
    socklen_t clientSize = sizeof(client);
    int clientSocket = accept(newSocket, (sockaddr*)&client, &clientSize);
    if (clientSocket == -1) {
        throw ClientSocketException();
    }
    else {
        return clientSocket;
    }
}

void Server::Chat(int socket) {
    while (true){
        char buffer[bufferSize];

        ReceiveMessage(buffer, socket);
        if(Quit(buffer)) break;

        cout << "Enter your message: ";
        cin.getline(buffer, bufferSize);
        cout << "You typed: " << buffer << endl;
        SendMessage(buffer, socket);
    }
}