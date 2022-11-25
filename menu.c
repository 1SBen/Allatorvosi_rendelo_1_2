#include <stdio.h>
#include "menu.h"
#include "kivalasztas.h"


//A f�men� megjelen�s��rt felel�s programr�sz
int fomenu(Menu_state *melyikben_vagyunk, bool *kilepes)
{
    printf("F�MEN�\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - KIL�P�S\n");
    printf("1 - Tulajdonosok list�ja\n");
    printf("2 - �llatok list�ja\n");
    printf("3 - veszetts�g\n");
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
            printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;

    }
    return 0;
}

//Az �llattulajdonosokat n�vszerint kilist�z� programr�sz
int emberek(Menu_state *melyikben_vagyunk)
{
    printf("TULAJDONOSOK LIST�JA\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - VISSZA A F�MEN�BE\n");
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
            printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;
    }
    return 0;
}

//Az �llatokat n�v szerint kilist�z� programr�sz
int allatok(Menu_state *melyikben_vagyunk)
{
    printf("�LLATOK LIST�JA\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - VISSZA A F�MEN�BE\n");
    printf("1 - proba�llat\n");
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
            printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;
    }
    return 0;
}

//Egy adott �llathoz tartoz� adatok kilist�z�s��rt felel�s programr�sz
int allatadat(Menu_state *melyikben_vagyunk)
{
    printf("�LLAT ADATAI\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - VISZZA a gazd�hoz\n");
    printf("1 - VISZZA az �llatok list�j�hoz\n");
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
            printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;
    }
    return 0;
}

//Ez a modul lehet�s�get ad, hogy egy adott tulaj adatait, vagy a hozz� tartoz� �llatokat list�zzuk ki.
int ember(Menu_state *melyikben_vagyunk)
{
    printf("TULAJDONOS\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - VISSZA a tulajdonosok list�j�hoz\n");
    printf("1 - tulajdonos adatai\n");
    printf("2 - �llatainak neve\n");
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
            printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;
    }
    return 0;
}

//Egy adott emberhez tartoz� adatok kilist�z�s��rt felel�s programr�sz
int emberadat(Menu_state *melyikben_vagyunk)
{
    printf("TULAJDONOS ADATAI\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - VISSZA a tualjhoz\n");
    printf("folyamatban...\n");
    printf("\n");

    switch(kivalasztas_MENU(1)){
        case 0:
            *melyikben_vagyunk = ember_state;
            break;
        default:
            printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;
    }
    return 0;
}

//Egy adott tulajhoz tartoz� �llatok neveit list�zza ki.
int allatai(Menu_state *melyikben_vagyunk)
{
    printf("TUALJDONOS �LLATAI\n\n");
    printf("A sz�m, vagy az opci� be�r�s�val v�lasszon men�pontot!\n");
    printf("0 - VISSZA a tulajhoz\n");
    printf("1 - proba�llat\n");
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
            printf("HIBA -2: A MENu.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            return - 2;
    }
    return 0;
}
