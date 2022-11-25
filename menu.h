#ifndef ALLATORVOSI_RENDELO_1_MENU_H
#define ALLATORVOSI_RENDELO_1_MENU_H
#include <stdbool.h>

typedef enum Menu_state{
    fomenu_state,
    emberek_state,
    allatok_state,
    allatadat_state,
    ember_state,
    emberadat_state,
    allatai_state,
} Menu_state;

int fomenu(Menu_state *melyikben_vagyunk, bool *kilepes);
int emberek(Menu_state *melyikben_vagyunk);
int allatok(Menu_state *melyikben_vagyunk);
int allatadat(Menu_state *melyikben_vagyunk);
int ember(Menu_state *melyikben_vagyunk);
int emberadat(Menu_state *melyikben_vagyunk);
int allatai(Menu_state *melyikben_vagyunk);

#endif //ALLATORVOSI_RENDELO_1_MENU_H
