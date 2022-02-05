#define SERVER

#ifdef SERVER
#include "Server.h"
#endif

#ifdef CLIENT
#include "Client.h"
#endif

int main() {
#ifdef SERVER

    Server* server = new Server();
    server->CreateSocket();
    server->BindSocket();
    server->ListenSocket();
    server->AcceptSocket();

#endif

#ifdef CLIENT

        Client* client = new Client();
        client->CreateSocket();
        client->ConnectSocket();
        client->GetMessage();
        client->SendMessage( client->clientMessage, client->newSocket);
#endif

}
