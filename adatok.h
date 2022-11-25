
#ifndef ALLATORVOSI_RENDELO_1_ADATOK_H
#define ALLATORVOSI_RENDELO_1_ADATOK_H

int const max_adat = 5;


typedef struct Kezeles{
    char kezeles_datuma;
    int kezeles_koltsege;
    char kezeles_tipusa;
    char mikorra_kell_visszajonnie;
    char kezelo_orvos;
}Kezeles;

typedef struct AllatAdat{
    char szuletes;
    //Kezeles kezelesek[max_adat];
    char allat_neme;
    char allat_faja;
    char allat_szine;
    char tulajdonosanak_neve;
}AllatAdat;

typedef struct TulajAdat{
    char *nev;
    char *szuletes;
    char *nem;
    char *beiratkozas;
    char *telefonszam;
    char *email;
    char *lakcim;
    //AllatAdat allatai[max_adat]
}TulajAdat;





#endif //ALLATORVOSI_RENDELO_1_ADATOK_H
