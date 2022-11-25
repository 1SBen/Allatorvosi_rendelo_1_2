#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adatok.h"

//ezt a k�dr�szletet az internet r�l vettem: https://ecomputernotes.com/what-is-c/puppetting-on-strings/reads-a-string-using-dynamic-memory-allocation-for-strings
char *dim_tomb_beolv(char *msg){
    char *str;
    char buff[100]; /*buffer*/
    printf("%s", msg);
    gets(buff); /*str olvas�sa a bufferbe*/
    str = (char*) malloc(strlen(buff) + 1);
    if (str == NULL) {
        printf("HIBA -3: Nincs lefoglalhat� mem�ria\n");
        exit(-3);
    }
    strcpy(str, buff);
    return str;
}


int Tulajadat(){
    TulajAdat uj_tulaj;

    uj_tulaj.nev = dim_tomb_beolv("N�v: ");
    uj_tulaj.szuletes = dim_tomb_beolv("Lakc�m: ");
    uj_tulaj.nem = dim_tomb_beolv("Neme: ");
    uj_tulaj.beiratkozas = dim_tomb_beolv("Beiratkoz�s d�tuma: ");
    uj_tulaj.telefonszam = dim_tomb_beolv("Telefonsz�ma: ");
    uj_tulaj.email = dim_tomb_beolv("Email c�me: ");
    uj_tulaj.lakcim = dim_tomb_beolv("Lakc�me: ");

    return(0);
}

int Allatadat(){

}
