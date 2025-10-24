#include <stdio.h>

int main() {
    int compteur = 5; // tu peux changer cette valeur (< 10)

    for (int i = 1; i <= compteur; i++) {      // ligne
        for (int j = 1; j <= i; j++) {         // colonne
            // On affiche en fonction de la ligne
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");  // Bords et diagonales
            } else if (j % 2 == 0) {
                printf("# ");  // Alternance de #
            } else {
                printf("* ");  // Alternance de *
            }
        }
        printf("\n");
    }

    return 0;
}
