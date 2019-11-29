#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "client_orchestre.h"
#include "client_service.h"

#include "client_somme.h"
#include "client_compression.h"
#include "client_max.h"


static void usage(const char *exeName, const char *message)
{
    fprintf(stderr, "usage : %s <num_service> ...\n", exeName);
    fprintf(stderr, "        ... : les paramètres propres au service\n");
    if (message != NULL)
        fprintf(stderr, "message : %s\n", message);
    exit(EXIT_FAILURE);
}

int main(int argc, char * argv[])
{
    if (argc < 2)
        usage(argv[0], "nombre paramètres incorrect");

    int numService = strtol(argv[1], NULL, 10);

    // initialisations diverses

    // entrée en section critique pour communiquer avec l'orchestre
    
    // envoi à l'orchestre du numéro du service

    // attente code de retour
    // si code d'erreur
    //     afficher l'erreur
    //     sortie de la section critique
    // sinon
    //     récupération du mot de passe et des noms des 2 tubes
    //     envoi d'une accusé de réception à l'orchestre
    //     sortie de la section critique
    //     envoi du mot de passe au service
    //     attente de l'accusé de réception du service
    //     appel de la fonction d'envoi des données (une fct par service)
    //     appel de la fonction de réception du résultat (une fct par service)
    //     envoi d'un accusé de réception au service

    // libération éventuelle de ressources
    
    return EXIT_SUCCESS;
}
