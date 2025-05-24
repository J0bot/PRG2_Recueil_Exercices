#include <stdio.h>

/**
 * Exercice: Champs de bits
 * 
 * Instructions:
 * 1. Écrivez une structure appelée 'Packet' qui représente un paquet de données réseau
 *    avec les champs suivants :
 *    - Un champ pour le numéro de séquence, sur 16 bits.
 *    - Un champ pour le type de paquet, sur 4 bits.
 *    - Un champ pour le statut du paquet, sur 2 bits.
 *    - Un champ pour la longueur des données, sur 10 bits.
 * 
 * 2. Écrivez des fonctions pour :
 *    - Initialiser une variable de type Packet avec les valeurs données pour chaque champ.
 *    - Afficher les informations d'un paquet (numéro de séquence, type, statut, longueur des données).
 *    - Modifier le type d'un paquet donné.
 *    - Modifier le statut d'un paquet donné.
 *    - Calculer la taille en octets d'un paquet, en tenant compte de la taille des champs spécifiés.
 */

// Structure Packet avec champs de bits
struct Packet {
    // Votre code ici: déclaration des champs de bits
};

// Fonction pour initialiser un paquet
void init_packet(struct Packet *packet, unsigned int seq_num, unsigned int type, 
                 unsigned int status, unsigned int length) {
    // Votre code ici
}

// Fonction pour afficher les informations d'un paquet
void print_packet(struct Packet packet) {
    // Votre code ici
}

// Fonction pour modifier le type d'un paquet
void set_packet_type(struct Packet *packet, unsigned int type) {
    // Votre code ici
}

// Fonction pour modifier le statut d'un paquet
void set_packet_status(struct Packet *packet, unsigned int status) {
    // Votre code ici
}

int main() {
    struct Packet my_packet;
    
    // Initialisation du paquet
    init_packet(&my_packet, 1234, 3, 1, 512);
    
    // Affichage des informations initiales
    printf("Informations du paquet initial :\n");
    print_packet(my_packet);
    
    // Modification du type
    set_packet_type(&my_packet, 2);
    printf("\nType modifié :\n");
    print_packet(my_packet);
    
    // Modification du statut
    set_packet_status(&my_packet, 0);
    printf("\nStatut modifié :\n");
    print_packet(my_packet);
    
    // Affichage de la taille du paquet
    printf("\nTaille du paquet : %zu octets\n", sizeof(my_packet));
    
    return 0;
}
