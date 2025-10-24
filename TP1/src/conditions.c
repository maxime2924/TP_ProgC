#include <stdio.h>

int main() {
    int somme = 0;

    // Parcours des nombres de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si le nombre est divisible par 11 → on saute cette itération
        if (i % 11 == 0) {
            continue;
        }

        // Si le nombre est divisible par 5 OU par 7 → on l'ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000 → on arrête tout
        if (somme > 5000) {
            printf("Somme dépassée à %d (valeur actuelle : %d)\n", i, somme);
            break;
        }
    }

    // Affichage du résultat final
    printf("Somme finale = %d\n", somme);

    return 0;
}
