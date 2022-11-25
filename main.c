#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "adatok.h"
#include "features.h"
#ifdef _WIN64
#include <windows.h>
#endif

//A hossz� �, illetve � �r�sa semmilyen be�ll�t�s melett nem m�k�dik, sz�val mindenhol r�vid �, illetve � vel fogom helyettes�teni.

Menu_state melyikben_vagyunk;
bool kilepes;

int main(){
#ifdef _WIN64
    SetConsoleCP(1250);
    SetConsoleOutputCP(1250);
#endif

    while(!kilepes){
        int HIBA;

        //A men�pontokat kezel� rendszer
        switch(melyikben_vagyunk){
            case fomenu_state:
                HIBA = fomenu(&melyikben_vagyunk, &kilepes);
                break;
            case allatok_state:
                HIBA = allatok(&melyikben_vagyunk);
                break;
            case emberek_state:
                HIBA = emberek(&melyikben_vagyunk);
                break;
            case allatadat_state:
                HIBA = allatadat(&melyikben_vagyunk);
                break;
            case ember_state:
                HIBA = ember(&melyikben_vagyunk);
                break;
            case emberadat_state:
                HIBA = emberadat(&melyikben_vagyunk);
                break;
            case allatai_state:
                HIBA = allatai(&melyikben_vagyunk);
                break;
            default:
                printf("HIBA -1: A MAIN.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
                HIBA = -1;
                break;
        }
        //meger�s�ted a d�nt�sed?

        switch(HIBA){
            case -1:
                printf("HIBA -1: A MAIN.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
                break;
            case -2:
                printf("HIBA -2: A MENU.C NEM TUDOTT �LLAPOTOT V�LTOZTATNI");
            default:
                break;
        }

        if(kilepes)
            kilepes = megerosites();

    }
    return 0;
}
