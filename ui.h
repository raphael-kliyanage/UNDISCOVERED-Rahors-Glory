#ifndef DEF_UI
#define DEF_UI

#include <string>

void delay(int ms);

void startup_screen();

void main_menu();

void option_menu();

void credit();

void loading_game_level();  // loading with tips & tricks printed on the screen

void spacing_top();

void spacing_bottom();

void create_player();

void gameplay_character();

void gameplay_magician();

void gameplay_warrior();

void gameplay_evil_magician();

void gameplay_white_magician();

void ui_character();

void ui_magician();

void ui_warrior();

void ui_evil_magician();

void ui_white_magician();

// printing text slowly -> source YouTube NodeHead
void anim(const std::string&, unsigned int);

#endif // DEF_UI
