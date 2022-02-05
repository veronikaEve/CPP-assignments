#include "Comms.h"

void Comms::CreateSocket() {
    newSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (newSocket == -1) {
        cout << "error with creating socket" << endl;
    }
}

Comms::Comms() {
    socketAddress.sin_family = AF_INET;
    socketAddress.sin_port = htons(5400);
    inet_pton(AF_INET, address.c_str(), &socketAddress.sin_addr);
}

void Comms::SendMessage(char *message, int socket) {
    int byteCount = send(socket, message, bufferSize, 0);
    if (byteCount == -1) {
        cout << "Server send error" << endl;
    }
    else {
        cout << "Server: sent " << byteCount << endl;
    }
}

void Comms::ReceiveMessage(char *message, int socket) {
    int byteCount2 = recv(socket, message, bufferSize, 0);
    if (byteCount2 < 0)
        cout << "error" << endl;
    else {
        cout << "Received data: " << message << endl;
    }
}

bool Comms::Quit(char *message) {
   return strcmp(message, quitCode.c_str()) == 0;
}
