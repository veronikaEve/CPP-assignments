#include "Comms.h"

void Comms::CreateSocket() throw(CreateSocketException) {
    newSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (newSocket == -1) {
        throw CreateSocketException();
    } else {
        cout << "Socket created!" << endl;
    }
}

Comms::Comms() {
    socketAddress.sin_family = AF_INET;
    socketAddress.sin_port = htons(5400);
    inet_pton(AF_INET, address.c_str(), &socketAddress.sin_addr);
}

void Comms::SendMessage(char *message, int socket) throw(SendMessageException) {
    int byteCount = send(socket, message, bufferSize, 0);
    if (byteCount == -1) {
        throw SendMessageException();
    } else {
        cout << "Sent! ✅" << endl;
    }
}

void Comms::ReceiveMessage(char*receiveBuffer, int socket) throw(ReceiveMessageException) {
    int byteCount = recv(socket, receiveBuffer, bufferSize, 0);
    if (byteCount < 0) {
        throw ReceiveMessageException();
    }
    else {
        cout << "Received data: " << receiveBuffer << endl;
    }
}

bool Comms::Quit(char *message) {
   return strcmp(message, quitCode.c_str()) == 0;
}
