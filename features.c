#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "features.h"

//ide jönnek azok a nem létfontosságú, de hasznos funkciók, amik hiánya nem nélkülözhetetlen a program futásához.

//A kilépés megerösítését kezelö alprogram

bool megerosites() {
    printf("Megerösíti a döntését? \n\nI igen, N nem\n");

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
            printf("\n\nKérem az alábbi opciók közül válasszon\n\n");
            scanf("%*[^\n]");
        }
    }
}


