#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "features.h"

//ide j�nnek azok a nem l�tfontoss�g�, de hasznos funkci�k, amik hi�nya nem n�lk�l�zhetetlen a program fut�s�hoz.

//A kil�p�s meger�s�t�s�t kezel� alprogram

bool megerosites() {
    printf("Meger�s�ti a d�nt�s�t? \n\nI igen, N nem\n");

    char *i = "i";
    char *I = "I";
    char *igen = "igen";
    char *IGEN = "IGEN";
    char *yes = "yes";

    char *n = "n";
    char *N = "N";
    char *nem = "nem";
    char *NEM = "NEM";
    char *no = "no";



    while (true) {
        char valasz;
        scanf("%s",&valasz);
        if (strcmp(&valasz, i) == 0 || strcmp(&valasz, I) == 0 || strcmp(&valasz, igen) == 0 || strcmp(&valasz, IGEN) == 0 || strcmp(&valasz, yes) == 0)
            return true;
        else if (strcmp(&valasz, n) == 0 || strcmp(&valasz, N) == 0 || strcmp(&valasz, nem) == 0 || strcmp(&valasz, NEM) == 0 || strcmp(&valasz, no) == 0)
            return false;
        else {
            printf("\n\nK�rem az al�bbi opci�k k�z�l v�lasszon\n\n");
            scanf("%*[^\n]");
        }
    }
}


