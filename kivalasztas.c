#include "kivalasztas.h"
#include <stdio.h>
#include <stdbool.h>

//Ez az alprogram felelös azért, hogy a consolon lévö opciók közül kiválasszuk a megfelelöt
//Az infoC.EET-röl van a kódrészlet: https://infoc.eet.bme.hu/scanf_hibakezeles/
int kivalasztas_MENU(int max)
{
    max -= 1; //mert ott a választási opciók számát adom meg.
    while (true) {
        printf("\nA következö menüpont:");
        int min = 0;
        int olvasott;
        int sikerult = scanf("%d", &olvasott);
        printf("***************************************\n");
        if (sikerult != 1) {
            printf("Kérem számot írjon be!\n");
            scanf("%*[^\n]");
        } else if (olvasott > max || olvasott < min) {
            printf("Kérem a megadott opciók közül válasszon! (min: %d, max: %d)\n", min, max);
        } else {
            return olvasott;
        }
    }
}

