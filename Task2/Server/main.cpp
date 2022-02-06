#define SERVER
#include "Comms.h"

#ifdef SERVER
#include "Server.h"
#endif

#ifdef CLIENT
#include "Client.h"
#endif

int main() {
#ifdef SERVER
    try {
        Server* server = new Server();
        server->CreateSocket();
        server->BindSocket();
        server->ListenSocket();
        server->ReceiveMessage(server->ClientSocket());
    } catch (CreateSocketException& e) {
        cout << e.what() << endl;
    } catch (BindSocketException& e) {
        cout << e.what() << endl;
    } catch (ListenSocketException& e) {
        cout << e.what() << endl;
    } catch (ReceiveMessageException& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << " Error - Something went wrong on the server";
    }

#endif

#ifdef CLIENT
    try {
        Client* client = new Client();
        client->CreateSocket();
        client->ConnectSocket();
        client->Chat();
    } catch (CreateSocketException& e) {
        cout << e.what() << endl;
    } catch (ConnectSocketException& e) {
        cout << e.what() << endl;
    } catch (SendMessageException& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << " Error - Something went wrong on the client";
    }

#endif

}
