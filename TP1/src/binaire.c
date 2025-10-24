#include <stdio.h>

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nbNombres = sizeof(nombres) / sizeof(nombres[0]);

    for (int j = 0; j < nbNombres; j++) {
        unsigned int n = nombres[j];

        printf("Décimal : %u → Binaire : ", n);

        // On parcourt les 32 bits (pour un int sur 4 octets)
        int started = 0; // sert à ignorer les zéros inutiles au début
        for (int i = 31; i >= 0; i--) {
            int bit = (n >> i) & 1; // décale le bit vers la droite et garde le dernier
            if (bit == 1) started = 1;
            if (started) printf("%d", bit);
        }

        // Si le nombre est 0, aucun bit ne sera affiché → on l'affiche manuellement
        if (n == 0)
            printf("0");

        printf("\n");
    }

    return 0;
}
