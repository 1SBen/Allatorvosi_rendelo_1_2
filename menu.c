#include <stdio.h>
#include "menu.h"
#include "kivalasztas.h"


//A fömenü megjelenéséért felelös programrész
int fomenu(Menu_state *melyikben_vagyunk, bool *kilepes)
{
    printf("FÖMENÜ\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - KILÉPÉS\n");
    printf("1 - Tulajdonosok listája\n");
    printf("2 - Állatok listája\n");
    printf("3 - veszettség\n");
    printf("\n");

    switch(kivalasztas_MENU(4))//kivalasztas.c alprogram
    {
        case 0:
             *kilepes = true;
            break;
        case 1:
            *melyikben_vagyunk = emberek_state;
            break;
        case 2:
            *melyikben_vagyunk = allatok_state;
            break;
        case 3:
            //Menu_state melyikben_vagyunk =
            printf("folyamatban...\n");
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;

    }
    return 0;
}

//Az Állattulajdonosokat névszerint kilistázó programrész
int emberek(Menu_state *melyikben_vagyunk)
{
    printf("TULAJDONOSOK LISTÁJA\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - VISSZA A FÖMENÜBE\n");
    printf("1 - probaember\n");
    printf("folyamatban...\n");
    printf("\n");

    switch(kivalasztas_MENU(2)){
        case 0:
            *melyikben_vagyunk = fomenu_state;
            break;
        case 1:
            *melyikben_vagyunk = ember_state;
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;
    }
    return 0;
}

//Az állatokat név szerint kilistázó programrész
int allatok(Menu_state *melyikben_vagyunk)
{
    printf("ÁLLATOK LISTÁJA\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - VISSZA A FÖMENÜBE\n");
    printf("1 - probaállat\n");
    printf("folyamatban...\n");
    printf("\n");

    switch(kivalasztas_MENU(2)){
        case 0:
            *melyikben_vagyunk = fomenu_state;
            break;
        case 1:
            *melyikben_vagyunk = allatadat_state;
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;
    }
    return 0;
}

//Egy adott állathoz tartozó adatok kilistázásáért felelös programrész
int allatadat(Menu_state *melyikben_vagyunk)
{
    printf("ÁLLAT ADATAI\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - VISZZA a gazdához\n");
    printf("1 - VISZZA az állatok listájához\n");
    printf("folyamatban...\n");
    printf("\n");

    switch(kivalasztas_MENU(2)){
        case 0:
            *melyikben_vagyunk = ember_state;
            break;
        case 1:
            *melyikben_vagyunk = allatok_state;
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;
    }
    return 0;
}

//Ez a modul lehetöséget ad, hogy egy adott tulaj adatait, vagy a hozzá tartozó állatokat listázzuk ki.
int ember(Menu_state *melyikben_vagyunk)
{
    printf("TULAJDONOS\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - VISSZA a tulajdonosok listájához\n");
    printf("1 - tulajdonos adatai\n");
    printf("2 - állatainak neve\n");
    printf("\n");

    switch(kivalasztas_MENU(3)){
        case 0:
            *melyikben_vagyunk = emberek_state;
            break;
        case 1:
            *melyikben_vagyunk = emberadat_state;
            break;
        case 2:
            *melyikben_vagyunk = allatai_state;
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;
    }
    return 0;
}

//Egy adott emberhez tartozó adatok kilistázásáért felelös programrész
int emberadat(Menu_state *melyikben_vagyunk)
{
    printf("TULAJDONOS ADATAI\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - VISSZA a tualjhoz\n");
    printf("folyamatban...\n");
    printf("\n");

    switch(kivalasztas_MENU(1)){
        case 0:
            *melyikben_vagyunk = ember_state;
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;
    }
    return 0;
}

//Egy adott tulajhoz tartozó állatok neveit listázza ki.
int allatai(Menu_state *melyikben_vagyunk)
{
    printf("TUALJDONOS ÁLLATAI\n\n");
    printf("A szám, vagy az opció beírásával válasszon menüpontot!\n");
    printf("0 - VISSZA a tulajhoz\n");
    printf("1 - probaállat\n");
    printf("folyamatban...\n");
    printf("\n");

    switch(kivalasztas_MENU(2)){
        case 0:
            *melyikben_vagyunk = ember_state;
            break;
        case 1:
            *melyikben_vagyunk = allatadat_state;
            break;
        default:
            printf("HIBA -2: A MENu.C NEM TUDOTT ÁLLAPOTOT VÁLTOZTATNI");
            return - 2;
    }
    return 0;
}
