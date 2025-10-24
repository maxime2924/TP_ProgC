#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 54321;

    int i = -100000;
    unsigned int ui = 3000000000U;

    long int li = -5000000000L;
    unsigned long int uli = 5000000000UL;

    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.14159265358979323846L;

    // Affichage des valeurs
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("\nshort : %d\n", s);
    printf("unsigned short : %u\n", us);

    printf("\nint : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("\nlong int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("\nlong long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("\nfloat : %.2f\n", f);
    printf("double : %.10f\n", d);
    printf("long double : %.15Lf\n", ld);

    return 0;
}
