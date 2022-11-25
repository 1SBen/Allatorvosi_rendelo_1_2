#include "kivalasztas.h"
#include <stdio.h>
#include <stdbool.h>

//Ez az alprogram felel�s az�rt, hogy a consolon l�v� opci�k k�z�l kiv�lasszuk a megfelel�t
//Az infoC.EET-r�l van a k�dr�szlet: https://infoc.eet.bme.hu/scanf_hibakezeles/
int kivalasztas_MENU(int max)
{
    max -= 1; //mert ott a v�laszt�si opci�k sz�m�t adom meg.
    while (true) {
        printf("\nA k�vetkez� men�pont:");
        int min = 0;
        int olvasott;
        int sikerult = scanf("%d", &olvasott);
        printf("***************************************\n");
        if (sikerult != 1) {
            printf("K�rem sz�mot �rjon be!\n");
            scanf("%*[^\n]");
        } else if (olvasott > max || olvasott < min) {
            printf("K�rem a megadott opci�k k�z�l v�lasszon! (min: %d, max: %d)\n", min, max);
        } else {
            return olvasott;
        }
    }
}

