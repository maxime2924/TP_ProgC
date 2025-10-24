#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    char op = '+';  // essaie aussi '-', '*', '/', '%', '&', '|', '~'
    int resultat;

    printf("num1 = %d, num2 = %d, opérateur = %c\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat : %d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro interdite.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat : %d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zéro interdit.\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat : %d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat : %d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            // L'opérateur ~ (NOT binaire) ne prend qu’un seul opérande
            resultat = ~num1;
            printf("Résultat : ~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
    }

    return 0;
}

