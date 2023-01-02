#include "header.h"



void creerStruct(int nbrJoueurs, t_j joueur[4], t_p personnages[4])
{


    joueur[0].ordreJoueur = 1;
    joueur[1].ordreJoueur = 2;
    if(nbrJoueurs == 3)
    {
        joueur[2].ordreJoueur = 3;
    }
    else if(nbrJoueurs == 4)
    {
        joueur[2].ordreJoueur = 3;
        joueur[3].ordreJoueur = 4;
    }
    else
    {
        joueur[2].ordreJoueur = -10;
        joueur[3].ordreJoueur = -10;
    }

    joueur[0].numPerso = -10;
    joueur[1].numPerso = -10;
    joueur[2].numPerso = -10;
    joueur[3].numPerso = -10;

    joueur[0].position = 105; //gauche
    joueur[1].position = 119; //droite
    joueur[2].position = 7; //haut
    joueur[3].position = 217; //bas

    joueur[0].PA = 10;
    joueur[1].PA = 10;
    joueur[2].PA = 10;
    joueur[3].PA = 10;

    joueur[0].PV = -10;
    joueur[1].PV = -10;
    joueur[2].PV = -10;
    joueur[3].PV = -10;


    //printf("\nStructures remplis\n");

    ///Rajouter position x et y de chacun dans les structures joueurs



    strcpy(personnages[0].nom, "Shelly");
    strcpy(personnages[1].nom, "Bo");
    strcpy(personnages[2].nom, "Dynamike");
    strcpy(personnages[3].nom, "Rico");

    personnages[0].numPerso = 1;
    personnages[1].numPerso = 2;
    personnages[2].numPerso = 3;
    personnages[3].numPerso = 4;

    personnages[0].ordreJoueur = -10;
    personnages[1].ordreJoueur = -10;
    personnages[2].ordreJoueur = -10;
    personnages[3].ordreJoueur = -10;

    personnages[0].attaqueMele = 300;          ///A DEFINIR LES DEGATS
    personnages[1].attaqueMele = 250;
    personnages[2].attaqueMele = 150;
    personnages[3].attaqueMele = 100;

    personnages[0].attaque1 = 100;          ///A DEFINIR LES DEGATS
    personnages[1].attaque1 = 50;
    personnages[2].attaque1 = 50;
    personnages[3].attaque1 = 300;

    personnages[0].attaque2 = 100;          ///A DEFINIR LES DEGATS
    personnages[1].attaque2 = 350;
    personnages[2].attaque2 = 200;
    personnages[3].attaque2 = 350;

    personnages[0].attaque3 = 200;          ///A DEFINIR LES DEGATS
    personnages[1].attaque3 = 200;
    personnages[2].attaque3 = 150;
    personnages[3].attaque3 = 200;

    personnages[0].attaque4 = 50;          ///A DEFINIR LES DEGATS
    personnages[1].attaque4 = 50;
    personnages[2].attaque4 = 350;
    personnages[3].attaque4 = 50;

    personnages[0].vie = 1500;          ///A DEFINIR LES DEGATS
    personnages[1].vie = 1300;
    personnages[2].vie = 1200;
    personnages[3].vie = 5;//1300;


    ///Rajouter les noms et stats de chaque perso dans les structures personnages
}





void afficherStats2(BITMAP *Buffer, BITMAP* tabBitmap[24], BITMAP* ChoixPerso, int numPerso)
{/*
    while(!key[KEY_ESC])
        {
            rectfill(Buffer,350,0,600,20,makecol(0,0,0));
            textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }*/
    if(mouse_x >= 1006 && mouse_x <= 1026 && mouse_y >= 98 && mouse_y <= 186 && mouse_b & 1)
    {
        if(numPerso == 1)
        {
            draw_sprite(Buffer, tabBitmap[0], 0, 0);
        }
        else if(numPerso == 2)
        {
            draw_sprite(Buffer, tabBitmap[6], 0, 0);
        }
        else if(numPerso == 3)
        {
            draw_sprite(Buffer, tabBitmap[12], 0, 0);
        }
        else if(numPerso == 4)
        {
            draw_sprite(Buffer, tabBitmap[18], 0, 0);
        }
    }
    else if(mouse_x >= 1006 && mouse_x <= 1026 && mouse_y >= 190 && mouse_y <= 309 && mouse_b & 1)
    {
        if(numPerso == 1)
        {
            draw_sprite(Buffer, tabBitmap[1], 0, 0);
        }
        else if(numPerso == 2)
        {
            draw_sprite(Buffer, tabBitmap[7], 0, 0);
        }
        else if(numPerso == 3)
        {
            draw_sprite(Buffer, tabBitmap[13], 0, 0);
        }
        else if(numPerso == 4)
        {
            draw_sprite(Buffer, tabBitmap[19], 0, 0);
        }
    }
    else if(mouse_x >= 1006 && mouse_x <= 1026 && mouse_y >= 312 && mouse_y <= 441 && mouse_b & 1)
    {
        if(numPerso == 1)
        {
            draw_sprite(Buffer, tabBitmap[2], 0, 0);
        }
        else if(numPerso == 2)
        {
            draw_sprite(Buffer, tabBitmap[8], 0, 0);
        }
        else if(numPerso == 3)
        {
            draw_sprite(Buffer, tabBitmap[14], 0, 0);
        }
        else if(numPerso == 4)
        {
            draw_sprite(Buffer, tabBitmap[20], 0, 0);
        }
    }
    else if(mouse_x >= 1006 && mouse_x <= 1026 && mouse_y >= 448 && mouse_y <= 570 && mouse_b & 1)
    {
        if(numPerso == 1)
        {
            draw_sprite(Buffer, tabBitmap[3], 0, 0);
        }
        else if(numPerso == 2)
        {
            draw_sprite(Buffer, tabBitmap[9], 0, 0);
        }
        else if(numPerso == 3)
        {
            draw_sprite(Buffer, tabBitmap[15], 0, 0);
        }
        else if(numPerso == 4)
        {
            draw_sprite(Buffer, tabBitmap[21], 0, 0);
        }
    }
    else if(mouse_x >= 1006 && mouse_x <= 1026 && mouse_y >= 575 && mouse_y <= 688 && mouse_b & 1)
    {
        if(numPerso == 1)
        {
            draw_sprite(Buffer, tabBitmap[4], 0, 0);
        }
        else if(numPerso == 2)
        {
            draw_sprite(Buffer, tabBitmap[10], 0, 0);
        }
        else if(numPerso == 3)
        {
            draw_sprite(Buffer, tabBitmap[16], 0, 0);
        }
        else if(numPerso == 4)
        {
            draw_sprite(Buffer, tabBitmap[22], 0, 0);
        }
    }
    else if(mouse_x >= 1006 && mouse_x <= 1026 && mouse_y >= 695 && mouse_y <= 1026 && mouse_b & 1)
    {
        if(numPerso == 1)
        {
            draw_sprite(Buffer, tabBitmap[5], 0, 0);
        }
        else if(numPerso == 2)
        {
            draw_sprite(Buffer, tabBitmap[11], 0, 0);
        }
        else if(numPerso == 3)
        {
            draw_sprite(Buffer, tabBitmap[17], 0, 0);
        }
        else if(numPerso == 4)
        {
            draw_sprite(Buffer, tabBitmap[23], 0, 0);
        }
    }
}





int afficherStats(t_p personnages[4], BITMAP *Buffer, BITMAP* tabBitmap[24], BITMAP* ChoixPerso)
{
    strcpy(personnages[3].nom, "Primo");
    int choixChampion = 0;
    int numPerso = 0;
    int quitterMenu = 0;

    if(mouse_x >= 275 && mouse_x <= 330 && mouse_y >= 678 && mouse_y <= 700 && mouse_b & 1)
    {
        numPerso = 1;
        draw_sprite(Buffer, tabBitmap[0], 0, 0);
        while(quitterMenu == 0)
        {
            if(mouse_x >= 1005 && mouse_x <= 1038 && mouse_y >= 70 && mouse_y <= 100 && mouse_b & 1)
            {
                quitterMenu = 1;
            }
            afficherStats2(Buffer, tabBitmap, ChoixPerso, numPerso);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
        blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }
    else if(mouse_x >= 577 && mouse_x <= 630 && mouse_y >= 678 && mouse_y <= 700 && mouse_b & 1)
    {
        numPerso = 2;
        draw_sprite(Buffer, tabBitmap[6], 0, 0);
        while(quitterMenu == 0)
        {
            if(mouse_x >= 1005 && mouse_x <= 1038 && mouse_y >= 70 && mouse_y <= 100 && mouse_b & 1)
            {
                quitterMenu = 1;
            }
            afficherStats2(Buffer, tabBitmap, ChoixPerso, numPerso);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
        blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }
    else if(mouse_x >= 887 && mouse_x <= 942 && mouse_y >= 678 && mouse_y <= 700 && mouse_b & 1)
    {
        numPerso = 3;
        draw_sprite(Buffer, tabBitmap[12], 0, 0);
        while(quitterMenu == 0)
        {
            if(mouse_x >= 1005 && mouse_x <= 1038 && mouse_y >= 70 && mouse_y <= 100 && mouse_b & 1)
            {
                quitterMenu = 1;
            }
            afficherStats2(Buffer, tabBitmap, ChoixPerso, numPerso);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
        blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }
    else if(mouse_x >= 1160 && mouse_x <= 1215 && mouse_y >= 678 && mouse_y <= 700 && mouse_b & 1)
    {
        numPerso = 4;
        draw_sprite(Buffer, tabBitmap[18], 0, 0);
        while(quitterMenu == 0)
        {
            if(mouse_x >= 1005 && mouse_x <= 1038 && mouse_y >= 70 && mouse_y <= 100 && mouse_b & 1)
            {
                quitterMenu = 1;
            }
            afficherStats2(Buffer, tabBitmap, ChoixPerso, numPerso);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
        blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }












    if(mouse_x >= 220 && mouse_x <= 413 && mouse_y >= 380 && mouse_y <= 655)
    {
        if(mouse_b & 1 && personnages[0].ordreJoueur == -10)
        {
            return 1;
        }
        else if(mouse_b & 1 && personnages[0].ordreJoueur != -10)
        {
            textprintf_ex(Buffer, font, 575, 320, makecol(0, 0, 0), -1, "Ce Champion est deja pris par un autre joueur");
        }
    }
    if(mouse_x >= 500 && mouse_x <= 680 && mouse_y >= 380 && mouse_y <= 655)
    {
        if(mouse_b & 1 && personnages[1].ordreJoueur == -10)
        {
            return 2;
        }
        else if(mouse_b & 1 && personnages[1].ordreJoueur != -10)
        {
            textprintf_ex(Buffer, font, 575, 320, makecol(0, 0, 0), -1, "Ce Champion est deja pris par un autre joueur");
        }
    }
    if(mouse_x >= 820 && mouse_x <= 1005 && mouse_y >= 380 && mouse_y <= 655)
    {
        if(mouse_b & 1 && personnages[2].ordreJoueur == -10)
        {
            return 3;
        }
        else if(mouse_b & 1 && personnages[2].ordreJoueur != -10)
        {
            textprintf_ex(Buffer, font, 575, 320, makecol(0, 0, 0), -1, "Ce Champion est deja pris par un autre joueur");
        }
    }
    if(mouse_x >= 1075 && mouse_x <= 1275 && mouse_y >= 380 && mouse_y <= 655)
    {
        if(mouse_b & 1 && personnages[3].ordreJoueur == -10)
        {
            return 4;
        }
        else if(mouse_b & 1 && personnages[3].ordreJoueur != -10)
        {
            textprintf_ex(Buffer, font, 575, 320, makecol(0, 0, 0), -1, "Ce Champion est deja pris par un autre joueur");
        }
    }
    return -10;
}















void choixPerso(int nbrJoueurs, t_j joueur[4], t_p personnages[4])
{
    BITMAP *Buffer;
    Buffer = create_bitmap(SCREEN_W, SCREEN_H);

    BITMAP *ChoixPerso;
    ChoixPerso = load_bitmap("BSChoixPerso.bmp", NULL);
    if(ChoixPerso==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP *ChoixJoueur1;
    ChoixJoueur1 = load_bitmap("BSChoixJoueur1.bmp", NULL);
    if(ChoixJoueur1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP *ChoixJoueur2;
    ChoixJoueur2 = load_bitmap("BSChoixJoueur2.bmp", NULL);
    if(ChoixJoueur2==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    BITMAP *ChoixJoueur3;
    ChoixJoueur3 = load_bitmap("BSChoixJoueur3.bmp", NULL);
    if(ChoixJoueur3==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    BITMAP *ChoixJoueur4;
    ChoixJoueur4 = load_bitmap("BSChoixJoueur4.bmp", NULL);
    if(ChoixJoueur4==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    BITMAP *MenuShelly1;
    MenuShelly1 = load_bitmap("BSMenuShelly1.bmp", NULL);
    if(MenuShelly1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuShelly2;
    MenuShelly2 = load_bitmap("BSMenuShelly2.bmp", NULL);
    if(MenuShelly2==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuShelly3;
    MenuShelly3 = load_bitmap("BSMenuShelly3.bmp", NULL);
    if(MenuShelly3==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuShelly4;
    MenuShelly4 = load_bitmap("BSMenuShelly4.bmp", NULL);
    if(MenuShelly4==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuShelly5;
    MenuShelly5 = load_bitmap("BSMenuShelly5.bmp", NULL);
    if(MenuShelly5==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuShelly6;
    MenuShelly6 = load_bitmap("BSMenuShelly6.bmp", NULL);
    if(MenuShelly6==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    BITMAP *MenuBo1;
    MenuBo1 = load_bitmap("BSMenuBo1.bmp", NULL);
    if(MenuBo1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuBo2;
    MenuBo2 = load_bitmap("BSMenuBo2.bmp", NULL);
    if(MenuBo2==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuBo3;
    MenuBo3 = load_bitmap("BSMenuBo3.bmp", NULL);
    if(MenuBo3==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuBo4;
    MenuBo4 = load_bitmap("BSMenuBo4.bmp", NULL);
    if(MenuBo4==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuBo5;
    MenuBo5 = load_bitmap("BSMenuBo5.bmp", NULL);
    if(MenuBo5==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuBo6;
    MenuBo6 = load_bitmap("BSMenuBo6.bmp", NULL);
    if(MenuBo6==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }



    BITMAP *MenuDynamike1;
    MenuDynamike1 = load_bitmap("BSMenuDynamike1.bmp", NULL);
    if(MenuDynamike1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuDynamike2;
    MenuDynamike2 = load_bitmap("BSMenuDynamike2.bmp", NULL);
    if(MenuDynamike2==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuDynamike3;
    MenuDynamike3 = load_bitmap("BSMenuDynamike3.bmp", NULL);
    if(MenuDynamike3==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuDynamike4;
    MenuDynamike4 = load_bitmap("BSMenuDynamike4.bmp", NULL);
    if(MenuDynamike4==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuDynamike5;
    MenuDynamike5 = load_bitmap("BSMenuDynamike5.bmp", NULL);
    if(MenuDynamike5==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuDynamike6;
    MenuDynamike6 = load_bitmap("BSMenuDynamike6.bmp", NULL);
    if(MenuDynamike6==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }



    BITMAP *MenuRico1;
    MenuRico1 = load_bitmap("BSMenuRico1.bmp", NULL);
    if(MenuRico1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuRico2;
    MenuRico2 = load_bitmap("BSMenuRico2.bmp", NULL);
    if(MenuRico2==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuRico3;
    MenuRico3 = load_bitmap("BSMenuRico3.bmp", NULL);
    if(MenuRico3==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuRico4;
    MenuRico4 = load_bitmap("BSMenuRico4.bmp", NULL);
    if(MenuRico4==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuRico5;
    MenuRico5 = load_bitmap("BSMenuRico5.bmp", NULL);
    if(MenuRico5==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *MenuRico6;
    MenuRico6 = load_bitmap("BSMenuRico6.bmp", NULL);
    if(MenuRico6==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP* tabBitmap[24];
    tabBitmap[0] = MenuShelly1;
    tabBitmap[1] = MenuShelly2;
    tabBitmap[2] = MenuShelly3;
    tabBitmap[3] = MenuShelly4;
    tabBitmap[4] = MenuShelly5;
    tabBitmap[5] = MenuShelly6;

    tabBitmap[6] = MenuBo1;
    tabBitmap[7] = MenuBo2;
    tabBitmap[8] = MenuBo3;
    tabBitmap[9] = MenuBo4;
    tabBitmap[10] = MenuBo5;
    tabBitmap[11] = MenuBo6;

    tabBitmap[12] = MenuDynamike1;
    tabBitmap[13] = MenuDynamike2;
    tabBitmap[14] = MenuDynamike3;
    tabBitmap[15] = MenuDynamike4;
    tabBitmap[16] = MenuDynamike5;
    tabBitmap[17] = MenuDynamike6;

    tabBitmap[18] = MenuRico1;
    tabBitmap[19] = MenuRico2;
    tabBitmap[20] = MenuRico3;
    tabBitmap[21] = MenuRico4;
    tabBitmap[22] = MenuRico5;
    tabBitmap[23] = MenuRico6;




    while(joueur[0].numPerso == -10)
    {
        blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        draw_sprite(Buffer, ChoixJoueur1, 630, 130);
        //textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        rest(100);
        joueur[0].numPerso = afficherStats(personnages, Buffer, tabBitmap, ChoixPerso);
        joueur[0].perso = personnages[joueur[0].numPerso - 1];
        personnages[joueur[0].numPerso-1].ordreJoueur = joueur[0].ordreJoueur;
        joueur[0].PV = personnages[joueur[0].numPerso-1].vie;
    }
    rest(100);


    while(joueur[1].numPerso == -10)
    {
        blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        draw_sprite(Buffer, ChoixJoueur2, 630, 130);
        //textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        rest(100);
        joueur[1].numPerso = afficherStats(personnages, Buffer, tabBitmap, ChoixPerso);
        joueur[1].perso = personnages[joueur[1].numPerso - 1];
        personnages[joueur[1].numPerso-1].ordreJoueur = joueur[1].ordreJoueur;
        joueur[1].PV = personnages[joueur[1].numPerso-1].vie;
    }
    rest(100);


    if(nbrJoueurs >= 3)
    {
        while(joueur[2].numPerso == -10)
        {
            blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            draw_sprite(Buffer, ChoixJoueur3, 630, 130);
            //textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            rest(100);
            joueur[2].numPerso = afficherStats(personnages, Buffer, tabBitmap, ChoixPerso);
            joueur[2].perso = personnages[joueur[2].numPerso - 1];
            personnages[joueur[2].numPerso-1].ordreJoueur = joueur[2].ordreJoueur;
            joueur[2].PV = personnages[joueur[2].numPerso-1].vie;
        }
    }
    rest(100);


    if(nbrJoueurs == 4)
    {
        while(joueur[3].numPerso == -10)
        {
            blit(ChoixPerso, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            draw_sprite(Buffer, ChoixJoueur4, 630, 130);
            //textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            rest(100);
            joueur[3].numPerso = afficherStats(personnages, Buffer, tabBitmap, ChoixPerso);
            joueur[3].perso = personnages[joueur[3].numPerso - 1];
            personnages[joueur[3].numPerso-1].ordreJoueur = joueur[3].ordreJoueur;
            joueur[3].PV = personnages[joueur[3].numPerso-1].vie;
        }
    }


    destroy_bitmap(ChoixPerso);
    destroy_bitmap(ChoixJoueur1);
    destroy_bitmap(ChoixJoueur2);
    destroy_bitmap(ChoixJoueur3);
    destroy_bitmap(ChoixJoueur4);
    destroy_bitmap(MenuShelly1);
    destroy_bitmap(MenuShelly2);
    destroy_bitmap(MenuShelly3);
    destroy_bitmap(MenuShelly4);
    destroy_bitmap(MenuShelly5);
    destroy_bitmap(MenuShelly6);
    destroy_bitmap(MenuBo1);
    destroy_bitmap(MenuBo2);
    destroy_bitmap(MenuBo3);
    destroy_bitmap(MenuBo4);
    destroy_bitmap(MenuBo5);
    destroy_bitmap(MenuBo6);
    destroy_bitmap(MenuDynamike1);
    destroy_bitmap(MenuDynamike2);
    destroy_bitmap(MenuDynamike3);
    destroy_bitmap(MenuDynamike4);
    destroy_bitmap(MenuDynamike5);
    destroy_bitmap(MenuDynamike6);
    destroy_bitmap(MenuRico1);
    destroy_bitmap(MenuRico2);
    destroy_bitmap(MenuRico3);
    destroy_bitmap(MenuRico4);
    destroy_bitmap(MenuRico5);
    destroy_bitmap(MenuRico6);

}








void MenuPrincipal()
{
    BITMAP *Buffer;
    Buffer = create_bitmap(SCREEN_W, SCREEN_H);
    clear_bitmap(Buffer);
    BITMAP *StartBS;
    StartBS = load_bitmap("BrawlStars start.bmp", NULL);
    if(StartBS==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *NombreJoueurs;
    NombreJoueurs = load_bitmap("BSNombresJoueurs.bmp", NULL);
    if(NombreJoueurs==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }







    while(!key[KEY_SPACE])
    {
        blit(StartBS, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }


    int choix = 0;
    int nbrJoueurs = 0;
    t_j joueur[4];
    t_p personnages[4];


    ///Faire le Menu pour faire le choix (jouer une partie ou quitter
    /*
    while(choix == 0)
    {

    }
    */


    while(nbrJoueurs == 0)
    {
        blit(NombreJoueurs, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        //textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        if(mouse_x >= 555 && mouse_x <= 611 && mouse_y >= 555 && mouse_y <= 611 && mouse_b & 1)
        {
            nbrJoueurs = 2;
            //printf("\n2 joueurs\n");
            creerStruct(nbrJoueurs, joueur, personnages); // Appel sous programme créations structures
        }
        else if(mouse_x >=713 && mouse_x <= 772 && mouse_y >= 555 && mouse_y <= 611 && mouse_b & 1)
        {
            nbrJoueurs = 3;
            //printf("\n3 joueurs\n");
            creerStruct(nbrJoueurs, joueur, personnages); // Appel sous programme créations structures
        }
        else if(mouse_x >=870 && mouse_x <= 928 && mouse_y >= 555 && mouse_y <= 611 && mouse_b & 1)
        {
            nbrJoueurs = 4;
            //printf("\n4 joueurs\n");
            creerStruct(nbrJoueurs, joueur, personnages); // Appel sous programme créations structures
        }
    }




    choixPerso(nbrJoueurs, joueur, personnages);     // faire le choix des personnages


    destroy_bitmap(StartBS);
    destroy_bitmap(NombreJoueurs);



    /// Appel du sous programme de jeu
    jeu(nbrJoueurs, joueur, personnages, Buffer);
}









void menuFin(int nbrJoueurs, t_j joueur[4], t_p personnages[4], BITMAP *Buffer)
{
    BITMAP *MenuFin;
    MenuFin = load_bitmap("MenuFin.bmp", NULL);
    if(MenuFin==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    int choix = 0;
    while(choix == 0)
    {
        blit(MenuFin, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


        /*
        while(!key[KEY_ESC])
        {
            rectfill(Buffer,350,0,600,20,makecol(0,0,0));
            textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }*/



        if(mouse_x >= 273 && mouse_x <= 471 && mouse_y >= 439 && mouse_y <= 547 && mouse_b & 1)
        {
            choix = 1;
        }
        else if(mouse_x >= 648 && mouse_x <= 844 && mouse_y >= 439 && mouse_y <= 547 && mouse_b & 1)
        {
            choix = 2;
        }
        else if(mouse_x >= 1006 && mouse_x <= 1203 && mouse_y >= 439 && mouse_y <= 547 && mouse_b & 1)
        {
            choix = 3;
        }
    }



    destroy_bitmap(MenuFin);



    if(choix == 1)
    {
        for(int i=0;i<nbrJoueurs;i++)
        {
            joueur[i].PA = 10;
            joueur[i].PV = joueur[i].perso.vie;
        }
        joueur[0].position = 105; //gauche
        joueur[1].position = 119; //droite
        joueur[2].position = 7; //haut
        joueur[3].position = 217; //bas
        jeu(nbrJoueurs, joueur, personnages, Buffer);
    }
    else if(choix == 2)
    {
        MenuPrincipal();
    }
    else if(choix == 3)
    {
        return 0;
    }
}
