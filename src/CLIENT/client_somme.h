#ifndef CLIENT_SOMME
#define CLIENT_SOMME

// on ne déclare ici que les deux fonctions appelables par le client
void client_somme_sendData(/* tubes,*/ int argc, char * argv[]);
void client_somme_receiveResult(/* tubes,*/ int argc, char * argv[]);

#endif
