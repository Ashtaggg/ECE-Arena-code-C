#include "header.h"

void initialisationAllegro()
{
    allegro_init();
    install_keyboard();
    install_mouse();
    set_color_depth(desktop_color_depth());
    if((set_gfx_mode(GFX_AUTODETECT_WINDOWED,1524,855,0,0))!=0)
    //if((set_gfx_mode(GFX_AUTODETECT_FULLSCREEN,1920,1080,0,0))!=0)
    { 	allegro_message("Pb de mode graphique") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    install_keyboard();
    install_mouse();
    show_mouse(screen);
}


int main()
{
    initialisationAllegro();
    srand(time(NULL));
    MenuPrincipal();
    allegro_exit();
    return 0;
}END_OF_MAIN();
