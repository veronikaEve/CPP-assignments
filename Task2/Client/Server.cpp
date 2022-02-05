#include "Server.h"

void Server::BindSocket() {
    if (::bind(newSocket, (sockaddr*)&socketAddress, sizeof(socketAddress)) == -1)
        cout << "bind() failed: " << endl;
    else
        cout << "bind() successful" << endl;
}

void Server::ListenSocket() {
    if (listen(newSocket, SOMAXCONN) == -1)
        cout << "listen failed" << endl;
    else
        cout << "listening..." << endl;
}

void Server::AcceptSocket() {
    sockaddr_storage client;
    socklen_t clientSize = sizeof(client);
    int clientSocket = accept(newSocket, (sockaddr*)&client, &clientSize);
    if (clientSocket == -1)
        cout << "accept error" << endl;
    else
        cout << "accept successful! Now connected to the client " << endl;
}

Server::Server() {

}
