#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // 🔹 Opérateurs arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);   // Division entière
    printf("a %% b = %d\n", a % b);  // Modulo (reste de la division)

    // 🔹 Opérateurs de comparaison (résultat logique : 0 = faux, 1 = vrai)
    printf("\nComparaisons logiques :\n");
    printf("a == b → %d\n", a == b);  // égalité
    printf("a != b → %d\n", a != b);  // différence
    printf("a > b  → %d\n", a > b);   // supérieur
    printf("a < b  → %d\n", a < b);   // inférieur
    printf("a >= b → %d\n", a >= b);  // supérieur ou égal
    printf("a <= b → %d\n", a <= b);  // inférieur ou égal

    // 🔹 Opérateurs logiques
    printf("\nOpérateurs logiques :\n");
    printf("(a > 10 && b < 5) → %d\n", (a > 10 && b < 5)); // ET logique
    printf("(a > 10 || b > 5) → %d\n", (a > 10 || b > 5)); // OU logique
    printf("!(a == b) → %d\n", !(a == b));                 // NON logique

    return 0;
}
