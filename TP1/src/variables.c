#include <stdio.h>

int main() {

    // --- char ---
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    // --- short ---
    short s = -123;
    signed short ss = -456;
    unsigned short us = 500;

    // --- int ---
    int i = -1000;
    signed int si = -2000;
    unsigned int ui = 4000;

    // --- long int ---
    long int li = -100000L;
    signed long int sli = -200000L;
    unsigned long int uli = 300000UL;

    // --- long long int ---
    long long int lli = -9000000000LL;
    signed long long int slli = -8000000000LL;
    unsigned long long int ulli = 9000000000ULL;

    // --- float ---
    float f = 3.14f;

    // --- double ---
    double d = 2.71828;

    // --- long double ---
    long double ld = 1.23456789L;

    // --- AFFICHAGE ---
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
