#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adatok.h"

//ezt a kódrészletet az internet rõl vettem: https://ecomputernotes.com/what-is-c/puppetting-on-strings/reads-a-string-using-dynamic-memory-allocation-for-strings
char *dim_tomb_beolv(char *msg){
    char *str;
    char buff[100]; /*buffer*/
    printf("%s", msg);
    gets(buff); /*str olvasása a bufferbe*/
    str = (char*) malloc(strlen(buff) + 1);
    if (str == NULL) {
        printf("HIBA -3: Nincs lefoglalható memória\n");
        exit(-3);
    }
    strcpy(str, buff);
    return str;
}


int Tulajadat(){
    TulajAdat uj_tulaj;

    uj_tulaj.nev = dim_tomb_beolv("Név: ");
    uj_tulaj.szuletes = dim_tomb_beolv("Lakcím: ");
    uj_tulaj.nem = dim_tomb_beolv("Neme: ");
    uj_tulaj.beiratkozas = dim_tomb_beolv("Beiratkozás dátuma: ");
    uj_tulaj.telefonszam = dim_tomb_beolv("Telefonszáma: ");
    uj_tulaj.email = dim_tomb_beolv("Email címe: ");
    uj_tulaj.lakcim = dim_tomb_beolv("Lakcíme: ");

    return(0);
}

int Allatadat(){

}
