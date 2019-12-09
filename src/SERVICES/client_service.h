#ifndef CLIENT_SERVICE_H
#define CLIENT_SERVICE_H

// Ici toutes les communications entre les services et les clients :
// - les deux tubes nommés pour la communication bidirectionnelle
int getPwdFromClient(int fifoFd);
void sendErrorPwd(int fifoFd);
void sendOkPwd(int fifoFd);

#endif
