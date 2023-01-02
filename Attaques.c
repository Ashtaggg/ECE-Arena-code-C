#include "header.h"



void AffichageAttaque(int nbCases, t_j joueurAttaquant, t_c grille[225], BITMAP *Buffer, int tab[100], BITMAP* PlateauObstacle2)
{
    for(int y = 0 ; y < nbCases ; y++)
    {

        if(tab[y] <= 4 && tab[y] >= -4 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= -11 && tab[y] >= -19 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 1 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= -26 && tab[y] >= -34 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 2 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= -41 && tab[y] >= -49 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 3 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= -56 && tab[y] >= -64 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 4 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= 19 && tab[y] >= 11 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 1 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= 34 && tab[y] >= 26 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 2 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= 49 && tab[y] >= 41 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 3 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
        else if(tab[y] <= 64 && tab[y] >= 56 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 4 && grille[joueurAttaquant.position + tab[y]].vide != 2)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(180,47,250));
        }
    }
    draw_sprite(Buffer, PlateauObstacle2, 0, 0);
}

void AffichageAttaquePRecision(int nbCases, int a, int b, int c, t_j joueurAttaquant, t_c grille[225], BITMAP *Buffer, int tab[100], BITMAP* PlateauObstacle2)
{
    for(int y = 0 ; y < nbCases ; y++)
    {

        if(tab[y] <= 4 && tab[y] >= -4 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= -11 && tab[y] >= -19 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 1 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= -26 && tab[y] >= -34 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 2 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= -41 && tab[y] >= -49 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 3 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= -56 && tab[y] >= -64 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne - 4 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19,makecol(a,b,c));
        }
        else if(tab[y] <= 19 && tab[y] >= 11 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 1 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= 34 && tab[y] >= 26 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 2 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= 49 && tab[y] >= 41 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 3 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19, makecol(a,b,c));
        }
        else if(tab[y] <= 64 && tab[y] >= 56 && grille[joueurAttaquant.position + tab[y]].ligne == grille[joueurAttaquant.position].ligne + 4 && grille[joueurAttaquant.position + tab[y]].vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant.position + tab[y]].caseX - 19, grille[joueurAttaquant.position + tab[y]].caseY - 19, grille[joueurAttaquant.position + tab[y]].caseX + 19, grille[joueurAttaquant.position + tab[y]].caseY + 19,makecol(a,b,c));
        }
    }
    draw_sprite(Buffer, PlateauObstacle2, 0, 0);
}




void AffichageAttaque2(int nbCases, t_j joueurAttaquant,  t_c grille[225], BITMAP *Buffer, int tab[100], BITMAP* PlateauObstacle2)
{
    for(int y = 0 ; y < nbCases ; y++)
    {

        if(tab[y] <= 4 && tab[y] >= -4 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= -11 && tab[y] >= -19 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne - 1 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= -26 && tab[y] >= -34 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne - 2 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= -41 && tab[y] >= -49 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne - 3 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= -56 && tab[y] >= -64 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne - 4 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= 19 && tab[y] >= 11 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne + 1 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= 34 && tab[y] >= 26 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne + 2 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= 49 && tab[y] >= 41 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne + 3 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
        else if(tab[y] <= 64 && tab[y] >= 56 && grille[joueurAttaquant. position + tab[y]]. ligne == grille[joueurAttaquant. position]. ligne + 4 && grille[joueurAttaquant. position + tab[y]]. vide == 0)
        {
            rectfill(Buffer, grille[joueurAttaquant. position + tab[y]]. caseX - 19, grille[joueurAttaquant. position + tab[y]]. caseY - 19, grille[joueurAttaquant. position + tab[y]]. caseX + 19, grille[joueurAttaquant. position + tab[y]]. caseY + 19, makecol(255,192,203));
        }
    }
    draw_sprite(Buffer, PlateauObstacle2, 0, 0);
}




void DAM(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    int tab[8];
    tab[0] = -16;
    tab[1] = -15;
    tab[2] = -14;
    tab[3] = -1;
    tab[4] = 1;
    tab[5] = 14;
    tab[6] = 15;
    tab[7] = 16;


    AffichageAttaque(8, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);

    int caseAttaque = -10;
    int aleatoire1 = -10;
    int aleatoire2 = -10;
    int i = 0;
    BITMAP *Bombe1;
    Bombe1 = load_bitmap("bombe1.bmp", NULL);
    if(Bombe1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *explosion;
    explosion = load_bitmap("explosion2.bmp", NULL);
    if(explosion==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);

    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {





        AffichageAttaquePRecision(8, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);


    }



    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case

        aleatoire1 = rand()%8;                  ///Aleatoire pour attaque

        printf("\nAttaque en cours\n");

        if(joueur[ordreJoueur].PA >= 2)
        {
            joueur[ordreJoueur].PA -= 2;
        }
        else
        {
            *attaqueChoisi = -10;
            return 0;
        }
        ///ANNIMATION DE L'ATTAQUE

        for(i = 0; i < 4; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                /*if(i == ordreJoueur && tab[j] <= 14 && tab[j] >= -14 && grille[joueur[ordreJoueur].position + tab[j]].ligne == grille[joueur[ordreJoueur].position].ligne - 1)
                {
                    if(i == ordreJoueur && tab[j] <= 1 && tab[j] >= -1 && grille[joueur[ordreJoueur].position+ tab[j]].ligne == grille[joueur[ordreJoueur].position].ligne)
                    {
                        draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }

                }*/


                if(j != aleatoire1)
                {
                    /*if(i == ordreJoueur && tab[j] <= 14 && tab[j] >= -14 && grille[joueur[ordreJoueur].position+ tab[j]].ligne == grille[joueur[ordreJoueur].position].ligne - 1)
                    {
                        if(i == ordreJoueur && tab[j] <= 1 && tab[j] >= -1 && grille[joueur[ordreJoueur].position+ tab[j]].ligne == grille[joueur[ordreJoueur].position].ligne)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }

                    }*/

                    if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                    {
                        joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaqueMele;
                    }
                }
            }
        }
        *attaqueChoisi = -10;
        rest(5000);

    }

}


void DA1(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[64];
    tab[0] = -19;
    tab[1] = -18;
    tab[2] = -17;
    tab[3] = -16;
    tab[4] = -34;
    tab[5] = -33;
    tab[6] = -32;
    tab[7] = -31;
    tab[8] = -49;
    tab[9] = -48;
    tab[10] = -47;
    tab[11] = -46;
    tab[12] = -64;
    tab[13] = -63;
    tab[14] = -62;
    tab[15] = -61;
    tab[16] = -14;
    tab[17] = -13;
    tab[18] = -12;
    tab[19] = -11;
    tab[20] = -29;
    tab[21] = -28;
    tab[22] = -27;
    tab[23] = -26;
    tab[24] = -44;
    tab[25] = -43;
    tab[26] = -42;
    tab[27] = -41;
    tab[28] = -59;
    tab[29] = -58;
    tab[30] = -57;
    tab[31] = -56;
    tab[32] = 19;
    tab[33] = 18;
    tab[34] = 17;
    tab[35] = 16;
    tab[36] = 34;
    tab[37] = 33;
    tab[38] = 32;
    tab[39] = 31;
    tab[40] = 49;
    tab[41] = 48;
    tab[42] = 47;
    tab[43] = 46;
    tab[44] = 64;
    tab[45] = 63;
    tab[46] = 62;
    tab[47] = 61;
    tab[48] = 14;
    tab[49] = 13;
    tab[50] = 12;
    tab[51] = 11;
    tab[52] = 29;
    tab[53] = 28;
    tab[54] = 27;
    tab[55] = 26;
    tab[56] = 44;
    tab[57] = 43;
    tab[58] = 42;
    tab[59] = 41;
    tab[60] = 59;
    tab[61] = 58;
    tab[62] = 57;
    tab[63] = 56;


    AffichageAttaque(64, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire1 = -10;
    int aleatoire2 = -10;
    int aleatoire3 = -10;
    int aleatoire4 = -10;
    int i = 0;


    BITMAP *Bombe1;
    Bombe1 = load_bitmap("bombe1.bmp", NULL);
    if(Bombe1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *explosion;
    explosion = load_bitmap("explosion2.bmp", NULL);
    if(explosion==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);

    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tab2[16];
        int tab22[16];
        int tab222[16];
        int tab2222[16];
        for(int x = 0; x < 16; x++)
        {
            tab2[x] = tab[x];
        }
        for(int j = 0; j < 16; j++)
        {
            tab22[j] = tab[j + 16];
        }
        for(int x = 0; x < 16; x++)
        {
            tab222[x] = tab[x + 32];
        }
        for(int j = 0; j < 16; j++)
        {
            tab2222[j] = tab[j + 48];
        }


        AffichageAttaquePRecision(16, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
        AffichageAttaquePRecision(16, 0, 255, 122, joueur[ordreJoueur], grille, Buffer, tab22, PlateauObstacle2);
        AffichageAttaquePRecision(16, 255, 122, 255, joueur[ordreJoueur], grille, Buffer, tab222, PlateauObstacle2);
        AffichageAttaquePRecision(16, 122, 255, 122, joueur[ordreJoueur], grille, Buffer, tab2222, PlateauObstacle2);


    }






    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case

        aleatoire1 = rand()%16;                  ///Aleatoire pour attaque
        aleatoire2 = 16 + rand()%(32-16);
        aleatoire3 = 32 + rand()%(48-32);
        aleatoire4 = 48 + rand()%(64-48);
        printf("1 : %d\n", aleatoire1);
        printf("2 : %d\n", aleatoire2);
        printf("3 : %d\n", aleatoire3);
        printf("4 : %d\n", aleatoire4);




        int a = 0;
        int inter;
        while(a < 64)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 16)
                {
                    inter = 1;
                }
                else if(16 <= a && a <= 31)
                {
                    inter = 2;
                }
                else if(32 <= a && a <= 47)
                {
                    inter = 3;
                }
                else
                {
                    inter = 4;
                }
            }
            a++;
        }


        if(inter == 1)
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 2)
            {
                joueur[ordreJoueur].PA -= 2;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i = 0; i < 4; i++)
            {
                for(int j = 0; j < 16; j++)
                {
                    if(i == ordreJoueur)
                    {
                       draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }

                    if(j != aleatoire1)
                    {
                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                        }
                    }
                }
            }
        }
        if(inter == 2)
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 2)
            {
                joueur[ordreJoueur].PA -= 2;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i = 0; i < 4; i++)
            {
                for(int j = 16; j < 32; j++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }

                    if(j != aleatoire2)
                    {
                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                        }
                    }
                }
            }
        }
        if(inter == 3)
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 2)
            {
                joueur[ordreJoueur].PA -= 2;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i = 0; i < 4; i++)
            {
                for(int j = 32; j < 48; j++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }
                    if(j != aleatoire3)
                    {
                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                        }
                    }
                }
            }
        }
        if(inter == 4)
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 2)
            {
                joueur[ordreJoueur].PA -= 2;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i = 0; i < 4; i++)
            {
                for(int j = 48; j < 64; j++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }
                    if(j != aleatoire4)
                    {
                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                        }
                    }
                }
            }
        }
        rest(2000);
        *attaqueChoisi = -10;
    }

}






void DA2(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[16];
    tab[0] = -60;
    tab[1] = 60;
    tab[2] = -46;
    tab[3] = 44;
    tab[4] = -32;
    tab[5] = 28;
    tab[6] = -18;
    tab[7] = 12;
    tab[8] = -4;
    tab[9] = 46;
    tab[10] = -44;
    tab[11] = 32;
    tab[12] = -28;
    tab[13] = 18;
    tab[14] = -12;
    tab[15] = 4;

    AffichageAttaque(16, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;
    BITMAP *Bombe1;
    Bombe1 = load_bitmap("bombe1.bmp", NULL);
    if(Bombe1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *explosion;
    explosion = load_bitmap("explosion2.bmp", NULL);
    if(explosion==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 3)
            {
                joueur[ordreJoueur].PA -= 3;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i=0;i<4;i++)
            {
                if(i == ordreJoueur)
                {
                    draw_sprite(Buffer, Bombe1, grille[caseAttaque].caseX - 19 , grille[caseAttaque].caseY - 19);
                    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    rest(500);
                    draw_sprite(Buffer, explosion, grille[caseAttaque].caseX - 19 , grille[caseAttaque].caseY - 19);
                    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    rest(2000);
                }



                if(joueur[i].position == caseAttaque)
                {

                    joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;



                }
            }
        }
        *attaqueChoisi = -10;
    }

}



void DA3(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[32];
    tab[0] = -4;
    tab[1] = -3;
    tab[2] = -2;
    tab[3] = -1;
    tab[4] = 1;
    tab[5] = 2;
    tab[6] = 3;
    tab[7] = 4;
    tab[8] = -60;
    tab[9] = -45;
    tab[10] = -30;
    tab[11] = -15;
    tab[12] = 15;
    tab[13] = 30;
    tab[14] = 45;
    tab[15] = 60;
    tab[16] = -16;
    tab[17] = -32;
    tab[18] = -48;
    tab[19] = -64;
    tab[20] = -14;
    tab[21] = -28;
    tab[22] = -42;
    tab[23] = -56;
    tab[24] = 14;
    tab[25] = 28;
    tab[26] = 42;
    tab[27] = 56;
    tab[28] = 16;
    tab[29] = 32;
    tab[30] = 48;
    tab[31] = 64;


    AffichageAttaque(32, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire1 = -10;
    int aleatoire2 = -10;
    int i = 0;

    BITMAP *Bombe1;
    Bombe1 = load_bitmap("bombe1.bmp", NULL);
    if(Bombe1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *explosion;
    explosion = load_bitmap("explosion2.bmp", NULL);
    if(explosion==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);

    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tab2[16];
        int tab22[16];
        for(int x = 0; x < 16; x++)
        {
            tab2[x] = tab[x];
        }
        for(int j = 0; j < 16; j++)
        {
            tab22[j] = tab[j + 16];
        }


        AffichageAttaquePRecision(16, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
        AffichageAttaquePRecision(16, 0, 255, 122, joueur[ordreJoueur], grille, Buffer, tab22, PlateauObstacle2);


    }

    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case

        aleatoire1 = rand()%16;                  ///Aleatoire pour attaque
        aleatoire2 = 16 + rand()%(32-16);



        int a = 0;
        int inter;
        while(a < 32)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 16)
                {
                    inter = 1;
                }
                else
                {
                    inter = 2;
                }
            }
            a++;
        }


        if(inter == 1)
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 4)
            {
                joueur[ordreJoueur].PA -= 4;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i = 0; i < 4; i++)
            {
                for(int j = 0; j < 16; j++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }


                    if(j != aleatoire1)
                    {
                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }

                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque3;
                        }
                    }
                }
            }
        }
        if(inter == 2)
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            if(joueur[ordreJoueur].PA >= 4)
            {
                joueur[ordreJoueur].PA -= 4;
            }
            else
            {
                *attaqueChoisi = -10;
                return 0;
            }
            for(i = 0; i < 4; i++)
            {

                for(int j = 16; j < 32; j++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(200);
                    }

                    if(j != aleatoire2)
                    {
                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, explosion, grille[joueur[ordreJoueur].position + tab[j]].caseX - 19 , grille[joueur[ordreJoueur].position + tab[j]].caseY - 19);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(200);
                        }

                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque3;
                        }
                    }
                }
            }
        }
        *attaqueChoisi = -10;
    }

}

void DA4(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[36];
    tab[0] = -2;
    tab[1] = -3;
    tab[2] = -4;
    tab[3] = -17;
    tab[4] = -18;
    tab[5] = -19;
    tab[6] = 11;
    tab[7] = 12;
    tab[8] = 13;
    tab[9] = 2;
    tab[10] = 3;
    tab[11] = 4;
    tab[12] = -13;
    tab[13] = -12;
    tab[14] = -11;
    tab[15] = 17;
    tab[16] = 18;
    tab[17] = 19;
    tab[18] = -31;
    tab[19] = -30;
    tab[20] = -29;
    tab[21] = -46;
    tab[22] = -45;
    tab[23] = -44;
    tab[24] = -61;
    tab[25] = -60;
    tab[26] = -59;
    tab[27] = 29;
    tab[28] = 30;
    tab[29] = 31;
    tab[30] = 44;
    tab[31] = 45;
    tab[32] = 46;
    tab[33] = 59;
    tab[34] = 60;
    tab[35] = 61;

    AffichageAttaque(36, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);

    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;


    BITMAP *Bombe1;
    Bombe1 = load_bitmap("bombe2.bmp", NULL);
    if(Bombe1==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *explosion;
    explosion = load_bitmap("explosion.bmp", NULL);
    if(explosion==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    int a = 0;
    int inter;
    while(a < 36)
    {
        if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
        {
            if(a < 9)
            {
                inter = 1;
            }
            else if(9 <= a && a < 18)
            {
                inter = 2;
            }
            else if(18 <= a && a < 36)
            {
                inter = 3;
            }
            else
            {
                inter = 4;
            }
        }
        a++;
    }

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);

    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tab2[9];
        int tab22[9];
        int tab222[9];
        int tab2222[9];
        for(int x = 0; x < 9; x++)
        {
            tab2[x] = tab[x];
        }
        for(int j = 0; j < 9; j++)
        {
            tab22[j] = tab[j + 9];
        }
        for(int x = 0; x < 9; x++)
        {
            tab222[x] = tab[x + 18];
        }
        for(int j = 0; j < 9; j++)
        {
            tab2222[j] = tab[j + 27];
        }


        AffichageAttaquePRecision(9, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
        AffichageAttaquePRecision(9, 0, 255, 122, joueur[ordreJoueur], grille, Buffer, tab22, PlateauObstacle2);
        AffichageAttaquePRecision(9, 255, 122, 255, joueur[ordreJoueur], grille, Buffer, tab222, PlateauObstacle2);
        AffichageAttaquePRecision(9, 122, 255, 122, joueur[ordreJoueur], grille, Buffer, tab2222, PlateauObstacle2);


    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case

        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        printf("ale : %d\n", aleatoire);
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            if(inter == 1)
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                if(joueur[ordreJoueur].PA >= 4)
                {
                    joueur[ordreJoueur].PA -= 4;
                }
                else
                {
                    printf("test");
                    *attaqueChoisi = -10;
                    return 0;
                }
                for(i = 0; i < 4; i++)
                {
                    for(int j = 0; j < 9; j++)
                    {
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;

                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(1000);
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(2000);
                        }

                        }
                    }
                }
            }
            if(inter == 2)
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                if(joueur[ordreJoueur].PA >= 4)
                {
                    joueur[ordreJoueur].PA -= 4;
                }
                else
                {
                    *attaqueChoisi = -10;
                    return 0;
                }
                for(i = 0; i < 4; i++)
                {
                    for(int j = 9; j < 18; j++)
                    {
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(1000);
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(2000);

                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
            }
            if(inter == 3)
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                if(joueur[ordreJoueur].PA >= 4)
                {
                    joueur[ordreJoueur].PA -= 4;
                }
                else
                {
                    *attaqueChoisi = -10;
                    return 0;
                }
                for(i = 0; i < 4; i++)
                {
                    for(int j = 18; j < 27; j++)
                    {
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(1000);
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(2000);
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
            }
            if(inter == 4)
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                if(joueur[ordreJoueur].PA >= 4)
                {
                    joueur[ordreJoueur].PA -= 4;
                }
                else
                {
                    *attaqueChoisi = -10;
                    return 0;
                }
                for(i = 0; i < 4; i++)
                {
                    for(int j = 27; j < 36; j++)
                    {
                        if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                        {
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(1000);
                            draw_sprite(Buffer, Bombe1, grille[joueur[ordreJoueur].position].caseX  - 89 , grille[joueur[ordreJoueur].position].caseY - 89 );
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            rest(2000);

                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
            }
        }

        *attaqueChoisi = -10;
}



void AnimationRAM(int x, int y, int a, int b, int c, BITMAP* Buffer, t_c grille[225], int caseAttaque)
{
    circlefill(Buffer, grille[caseAttaque].caseX + x, grille[caseAttaque].caseY + y,  5, makecol(a,b,c));
    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    rest(300);
}



void RAM(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{

  ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[8];
    tab[0] = -16;
    tab[1] = -15;
    tab[2] = -14;
    tab[3] = -1;
    tab[4] = 1;
    tab[5] = 14;
    tab[6] = 15;
    tab[7] = 16;



    AffichageAttaque(8, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);

    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;





    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        BITMAP *poison;
        poison = load_bitmap("poison.bmp", NULL);
        if(poison==NULL)
        {
            allegro_message("Pb de image") ;
            allegro_exit();
            exit(EXIT_FAILURE);
        }

        int aleatoireX;
        int aleatoireY;
        int ala;
        int alb;
        int alc;
        for(int i = 0; i < 15; i++)
        {
            aleatoireX = -16 + rand()%(16 - (-16));
            aleatoireY = -16 + rand()%(16 - (-16));
            ala = rand()%255;
            alb = rand()%255;
            alc = rand()%255;
            AnimationRAM(aleatoireX,aleatoireY,ala,alb,alc, Buffer, grille, caseAttaque);
        }



        rest(1000);
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i=0;i<4;i++)
            {
                if(joueur[i].position == caseAttaque)
                {
                    joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaqueMele;

                }
            }
            draw_sprite(Buffer, poison, grille[caseAttaque].caseX  - 18 , grille[caseAttaque].caseY-32);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            rest(2000);
        }

        *attaqueChoisi = -10;
    }

}



void RA1(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[81];
    tab[0] = -64;
    tab[1] = -63;
    tab[2] = -62;
    tab[3] = -61;
    tab[4] = -60;
    tab[5] = -59;
    tab[6] = -58;
    tab[7] = -57;
    tab[8] = -56;
    tab[9] = -49;
    tab[10] = -48;
    tab[11] = -47;
    tab[12] = -46;
    tab[13] = -45;
    tab[14] = -44;
    tab[15] = -43;
    tab[16] = -42;
    tab[17] = -41;
    tab[18] = -34;
    tab[19] = -33;
    tab[20] = -32;
    tab[21] = -31;
    tab[22] = -30;
    tab[23] = -29;
    tab[25] = -28;
    tab[26] = -27;
    tab[27] = -26;
    tab[28] = -19;
    tab[29] = -18;
    tab[30] = -17;
    tab[31] = -16;
    tab[32] = -15;
    tab[33] = -14;
    tab[34] = -13;
    tab[35] = -12;
    tab[36] = -11;
    tab[37] = -4;
    tab[38] = -3;
    tab[39] = -2;
    tab[40] = -1;
    tab[41] = 1;
    tab[42] = 2;
    tab[43] = 3;
    tab[44] = 4;
    tab[45] = 11;
    tab[46] = 12;
    tab[47] = 13;
    tab[48] = 14;
    tab[49] = 15;
    tab[50] = 16;
    tab[51] = 17;
    tab[52] = 18;
    tab[53] = 19;
    tab[54] = 26;
    tab[55] = 27;
    tab[56] = 28;
    tab[57] = 29;
    tab[58] = 30;
    tab[59] = 31;
    tab[60] = 32;
    tab[61] = 33;
    tab[62] = 34;
    tab[63] = 41;
    tab[64] = 42;
    tab[65] = 43;
    tab[66] = 44;
    tab[67] = 45;
    tab[68] = 46;
    tab[69] = 47;
    tab[70] = 48;
    tab[71] = 49;
    tab[72] = 56;
    tab[73] = 57;
    tab[74] = 58;
    tab[75] = 59;
    tab[76] = 60;
    tab[77] = 61;
    tab[78] = 62;
    tab[79] = 63;
    tab[80] = 64;


    AffichageAttaque(81, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);    ///FIN DE L'AFFICHAGE DE LA ZONE

    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250)) ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case



        printf("\nAttaque en cours\n");
        ///ANNIMATION DE L'ATTAQUE
        joueur[ordreJoueur].PA -= 2;
        for(i = 0; i < 4; i++)
        {

            if(i == ordreJoueur)
            {
                int av = 120;
                while( av < grille[caseAttaque].caseY)
                {
                    circlefill(screen, grille[caseAttaque].caseX , av ,  5, makecol(255,255,0));
                    rest(100);
                    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    av = av + 10;

                }
                circlefill(Buffer, grille[caseAttaque].caseX , grille[caseAttaque].caseY ,  5, makecol(255,255,0));
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                rest(2000);



            }
            if(joueur[i].position == caseAttaque)
            {
                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
            }


        }
        int inter[21];
        for(int j = 0; j < 20; j++)
        {
            aleatoire = rand()%81;
            for(int b = 0; b < 20; b++)
            {
                while(aleatoire == caseAttaque || aleatoire == inter[b])
                {
                    aleatoire = rand()%81;
                }
            }
            inter[j] = aleatoire;
            for(i = 0; i < 4; i++)
            {

               if(i == ordreJoueur)
               {
                    int av = 120;
                    while( av < grille[joueur[ordreJoueur].position + tab[inter[j]]].caseY)
                    {
                        circlefill(screen, grille[joueur[ordreJoueur].position + tab[inter[j]]].caseX , av ,  5, makecol(0,255,0));

                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        av = av + 10;

                    }
                    circlefill(Buffer, grille[joueur[ordreJoueur].position + tab[inter[j]]].caseX , grille[joueur[ordreJoueur].position + tab[inter[j]]].caseY ,  5, makecol(0,255,0));
                    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    rest(500);

               }

                if(joueur[i].position == tab[inter[j]])
                {
                    joueur[i].PV = joueur[i].PV - 2*joueur[ordreJoueur].perso.attaque4;
                }


            }


        }






        *attaqueChoisi = -10;
    }

}




void RA2(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[12];
    tab[0] = 3;
    tab[1] = -3;
    tab[2] = -2;
    tab[3] = -1;
    tab[4] = 1;
    tab[5] = 2;
    tab[6] = 15;
    tab[7] = -15;
    tab[8] = -30;
    tab[9] = -45;
    tab[10] = 30;
    tab[11] = 45;

    AffichageAttaque(12, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);


    int tab2[20];
    tab2[0] = -18;
    tab2[1] = -17;
    tab2[2] = -16;
    tab2[3] = -14;
    tab2[4] = -13;
    tab2[5] = -12;
    tab2[6] = -31;
    tab2[7] = -29;
    tab2[8] = -46;
    tab2[9] = -44;
    tab2[10] = 18;
    tab2[11] = 17;
    tab2[12] = 16;
    tab2[13] = 14;
    tab2[14] = 13;
    tab2[15] = 12;
    tab2[16] = 31;
    tab2[17] = 29;
    tab2[18] = 46;
    tab2[19] = 44;

    AffichageAttaque2(20, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire1 = -10;
    int i = 0;

    BITMAP *poison;
    poison = load_bitmap("poison.bmp", NULL);
    if(poison==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }



    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        printf("\nAttaque en cours\n");


        ///ANNIMATION DE L'ATTAQUE
        joueur[ordreJoueur].PA -= 3;
        for(i = 0; i < 4; i++)
        {


                    if(i == ordreJoueur)
                    {
                        int av = grille[joueur[ordreJoueur].position].caseX;
                        while( av < grille[caseAttaque].caseX)
                        {
                            circlefill(screen, av, grille[caseAttaque].caseY ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av + 10;

                        }
                        while( av > grille[caseAttaque].caseX)
                        {
                            circlefill(screen, av, grille[caseAttaque].caseY ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av - 10;

                        }
                        int va = grille[joueur[ordreJoueur].position].caseY;
                        while( va < grille[caseAttaque].caseY)
                        {
                            printf("haut");
                            circlefill(screen, grille[caseAttaque].caseX, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            va = va + 10;

                        }
                        while( va > grille[caseAttaque].caseY)
                        {
                            printf("bas");
                            circlefill(screen, grille[caseAttaque].caseX, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            va = va - 10;

                        }

                        draw_sprite(Buffer, poison, grille[caseAttaque].caseX  - 18 , grille[caseAttaque].caseY-32);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(2000);


                    }

                }

            if(joueur[i].position == caseAttaque)
            {
                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;
            }

        aleatoire1 = rand()%2;                  ///Aleatoire pour attaque
        int inter;
        int a = 0;
        while(a < 12)
        {
            if(joueur[ordreJoueur].position + tab[a] == caseAttaque)
            {
                if(a < 6)
                {
                    inter = 1;
                }
                else
                {
                    inter = 2;
                }
            }
            a++;
        }

        if(aleatoire1 == 0)
        {
            if(inter == 1)
            {
                for(i = 0; i < 4; i++)
                {

                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, poison, grille[caseAttaque].caseX  - 18 , grille[caseAttaque].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(2000);

                    }

                    if(joueur[i].position == caseAttaque + 15)
                    {
                        joueur[i].PV = joueur[i].PV - (joueur[ordreJoueur].perso.attaque2);
                    }
                }
            }
            if(inter == 2)
            {
                for(i = 0; i < 4; i++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, poison, grille[caseAttaque].caseX + 22  , grille[caseAttaque].caseY-32);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(2000);

                    }
                    if(joueur[i].position == caseAttaque + 1)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque2);
                    }
                }
            }
        }
        else
        {
            if(inter == 1)
            {
                for(i = 0; i < 4; i++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, poison, grille[caseAttaque].caseX  - 18 , grille[caseAttaque].caseY-64);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(2000);

                    }
                    if(joueur[i].position == caseAttaque - 15)
                    {
                        joueur[i].PV = joueur[i].PV - (joueur[ordreJoueur].perso.attaque2);
                    }
                }
            }
            if(inter == 2)
            {
                for(i = 0; i < 4; i++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, poison, grille[caseAttaque].caseX  - 58 , grille[caseAttaque].caseY-32);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(2000);

                    }
                    if(joueur[i].position == caseAttaque - 1)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque2);
                    }
                }
            }

        }

        *attaqueChoisi = -10;
    }
}













void RA3(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[12];
    tab[0] = -3;
    tab[1] = 3;
    tab[2] = -45;
    tab[3] = 45;
    tab[4] = -13;
    tab[5] = 13;
    tab[6] = 17;
    tab[7] = -17;
    tab[8] = 31;
    tab[9] = -29;
    tab[10] = -31;
    tab[11] = 29;


    AffichageAttaque(12, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);    ///FIN DE L'AFFICHAGE DE LA ZONE


    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;
    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);
    BITMAP *poison;
    poison = load_bitmap("poison.bmp", NULL);
    if(poison==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }





    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tab2[12];
        int tab22[12];
        int tab222[12];

        for(int x = 0; x < 4; x++)
        {
            tab2[x] = tab[x];
        }
        for(int j = 0; j < 4; j++)
        {
            tab22[j] = tab[j + 4];
        }
        for(int x = 0; x < 4; x++)
        {
            tab222[x] = tab[x + 8];
        }


        AffichageAttaquePRecision(4, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
        AffichageAttaquePRecision(4, 0, 255, 122, joueur[ordreJoueur], grille, Buffer, tab22, PlateauObstacle2);
        AffichageAttaquePRecision(4, 255, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);


    }






    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        printf("testtttt");
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        int a = 0;
        int inter;
        while(a < 12)
        {
            if(joueur[ordreJoueur].position + tab[a] == caseAttaque)
            {
                if(a < 4)
                {
                    inter = 1;
                }
                else if(4 <= a && a < 8)
                {
                    inter = 2;
                }

                else
                {
                    inter = 3;
                }
            }
            a++;
        }

        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            printf("mhhh");
            if(inter == 3)
            {
                printf("\nAttaque en cours\n");

                ///ANNIMATION DE L'ATTAQUE
                joueur[ordreJoueur].PA -= 4;
                for(i = 0; i < 4; i++)
                {

                    for(int j = 8; j < 12; j++)
                    {

                        if(i == ordreJoueur)
                        {

                        int av = grille[joueur[ordreJoueur].position].caseX;
                        int va = grille[joueur[ordreJoueur].position].caseY;

                        while( av > grille[joueur[ordreJoueur].position + tab[j]].caseX && va > grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av - 2;
                            va = va - 4;


                        }
                        while( av < grille[joueur[ordreJoueur].position + tab[j]].caseX && va > grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av + 2;
                            va = va - 4;


                        }
                        while( av < grille[joueur[ordreJoueur].position + tab[j]].caseX && va < grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av + 2;
                            va = va + 4;


                        }
                       while( av > grille[joueur[ordreJoueur].position + tab[j]].caseX && va < grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av - 2;
                            va = va + 4;


                        }
                        circlefill(Buffer, av, va ,  5, makecol(255,255,0));
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


                        rest(500);





                        if(joueur[i].position == tab[j])
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
            }
            for(int j = 8; j < 12; j++)
            {
                draw_sprite(Buffer, poison, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 18 , grille[joueur[ordreJoueur].position + tab[j]].caseY-32);
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            }
            rest(2000);


            }
            if(inter == 2)
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                joueur[ordreJoueur].PA -= 4;
                for(i = 0; i < 4; i++)
                {
                    for(int j = 4; j < 8; j++)
                    {

                        if(i == ordreJoueur)
                        {

                        int av = grille[joueur[ordreJoueur].position].caseX;
                        int va = grille[joueur[ordreJoueur].position].caseY;

                        while( av < grille[joueur[ordreJoueur].position + tab[j]].caseX && va > grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av + 4;
                            va = va - 2;


                        }
                        while( av > grille[joueur[ordreJoueur].position + tab[j]].caseX && va < grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av -4;
                            va = va +2;


                        }
                        while( av < grille[joueur[ordreJoueur].position + tab[j]].caseX && va < grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av + 4;
                            va = va + 2;


                        }
                       while( av > grille[joueur[ordreJoueur].position + tab[j]].caseX && va > grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av - 4;
                            va = va - 2;


                        }
                        circlefill(Buffer, av, va ,  5, makecol(255,255,0));
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


                        rest(500);
                        }




                        if(joueur[i].position == tab[j])
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
                for(int j = 4; j < 8; j++)
            {
                draw_sprite(Buffer, poison, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 18 , grille[joueur[ordreJoueur].position + tab[j]].caseY-32);
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            }
            rest(2000);
            }
            if(inter == 1)
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                joueur[ordreJoueur].PA -= 4;
                for(i = 0; i < 4; i++)
                {
                    for(int j = 0; j < 4; j++)
                    {

                        if(i == ordreJoueur)
                        {

                        int av = grille[joueur[ordreJoueur].position].caseX;
                        int va = grille[joueur[ordreJoueur].position].caseY;

                        while( av > grille[joueur[ordreJoueur].position + tab[j]].caseX )
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av - 4;
                            ;


                        }
                        while( av < grille[joueur[ordreJoueur].position + tab[j]].caseX )
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            av = av + 4;



                        }
                        while(  va > grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            va = va - 4;


                        }
                       while(  va < grille[joueur[ordreJoueur].position + tab[j]].caseY)
                        {
                            circlefill(screen, av, va ,  5, makecol(255,255,0));
                            rest(50);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            va = va + 4;


                        }
                        circlefill(Buffer, av, va ,  5, makecol(255,255,0));
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


                        rest(500);
                        }






                        if(joueur[i].position == tab[j])
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
                for(int j = 0; j < 4; j++)
            {
                draw_sprite(Buffer, poison, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 18 , grille[joueur[ordreJoueur].position + tab[j]].caseY-32);
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            }
            rest(2000);
            }


        *attaqueChoisi = -10;
        }
    }
}




void RA4(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[56];
    tab[0] = -3;
    tab[1] = -18;
    tab[2] = -33;
    tab[3] = -48;
    tab[4] = -47;
    tab[5] = -46;
    tab[6] = -45;
    tab[7] = -44;
    tab[8] = -43;
    tab[9] = -42;
    tab[10] = -27;
    tab[11] = -12;
    tab[12] = 3;
    tab[13] = 18;
    tab[14] = 33;
    tab[15] = 48;
    tab[16] = 47;
    tab[17] = 46;
    tab[18] = 45;
    tab[19] = 44;
    tab[20] = 43;
    tab[21] = 42;
    tab[22] = 27;
    tab[23] = 12;
    tab[24] = -4;
    tab[25] = -19;
    tab[26] = -34;
    tab[27] = -49;
    tab[28] = -64;
    tab[29] = -63;
    tab[30] = -62;
    tab[31] = -61;
    tab[32] = -60;
    tab[33] = -59;
    tab[34] = -58;
    tab[35] = -57;
    tab[36] = -56;
    tab[37] = -41;
    tab[38] = -36;
    tab[40] = -11;
    tab[41] = 4;
    tab[42] = 19;
    tab[43] = 34;
    tab[44] = 49;
    tab[45] = 64;
    tab[46] = 63;
    tab[47] = 62;
    tab[48] = 61;
    tab[49] = 59;
    tab[50] = 58;
    tab[51] = 57;
    tab[52] = 56;
    tab[53] = 41;
    tab[54] = 26;
    tab[55] = 11;



    AffichageAttaque(56, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);

    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;
    int a = 0;
    int inter;
    caseAttaque = trouverCase(grille);
    while(a < 56)
    {
        if(tab[a] == caseAttaque)
        {
            if(a < 24)
            {
                inter = 1;
            }
            else
            {
                inter = 2;
            }
        }
        a++;
    }

    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {



            if(inter == 1)
            {
                aleatoire = rand()%11;
                if(aleatoire == 0)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {   printf("\nAttaque en cours\n");
                    ///ANNIMATION DE L'ATTAQUE
                    joueur[ordreJoueur].PA -= 5;
                    for(i = 0; i < 4; i++)
                    {
                        if(joueur[i].position == caseAttaque)
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                        }
                    }
                }
            }
            if(inter == 2)
            {
                if(aleatoire == 0 || aleatoire == 1)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {   printf("\nAttaque en cours\n");
                    ///ANNIMATION DE L'ATTAQUE
                    joueur[ordreJoueur].PA -= 5;
                    for(i = 0; i < 4; i++)
                    {
                        if(joueur[i].position == caseAttaque)
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4 - 50;
                        }
                    }

                }
            }
             *attaqueChoisi = -10;

    }
}



void SAM(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[8];
    tab[0] = -16;
    tab[1] = -15;
    tab[2] = -14;
    tab[3] = -1;
    tab[4] = 1;
    tab[5] = 14;
    tab[6] = 15;
    tab[7] = 16;



    AffichageAttaque(8, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);    ///FIN DE L'AFFICHAGE DE LA ZONE

    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;

    int i = 0;


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {

        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i=0;i<4;i++)
            {
                if(joueur[i].position == caseAttaque)
                {
                    joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaqueMele;
                }
            }
        }

        *attaqueChoisi = -10;
    }

}





void SA1(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[16];
    tab[0] = -32;
    tab[1] = -31;
    tab[2] = -30;
    tab[3] = -29;
    tab[4] = -28;
    tab[5] = -13;
    tab[6] = 2;
    tab[7] = 17;
    tab[8] = 32;
    tab[9] = 31;
    tab[10] = 30;
    tab[11] = 29;
    tab[12] = 28;
    tab[13] = 13;
    tab[14] = -2;
    tab[15] = -17;



    AffichageAttaque(16, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);    ///FIN DE L'AFFICHAGE DE LA ZONE

    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;

    int i = 0;

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);
    BITMAP *fusil;
    fusil = load_bitmap("fusil.bmp", NULL);
    if(fusil==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {



        AffichageAttaquePRecision(16, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);


    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case

        aleatoire = rand()%17;                  ///Aleatoire pour attaque








            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i = 0; i < 4; i++)
            {
                for(int j = 0; j < 16; j++)
                {
                    if(j != aleatoire)
                    {


                        draw_sprite(Buffer, fusil, grille[joueur[ordreJoueur].position + tab[j]].caseX - 10 , grille[joueur[ordreJoueur].position + tab[j]].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        rest(500);



                    }



                        if(joueur[i].position == joueur[ordreJoueur].position + tab[j])
                        {
                            joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                        }
                    }
                }
                *attaqueChoisi = -10;
            }





}





void SA2(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[32];
    tab[0] = -15;
    tab[1] = 15;
    tab[2] = 1;
    tab[3] = -1;
    tab[4] = -31;
    tab[5] = -30;
    tab[6] = -29;
    tab[7] = -17;
    tab[8] = -2;
    tab[9] = 13;
    tab[10] = 29;
    tab[11] = 30;
    tab[12] = 31;
    tab[13] = 17;
    tab[14] = 2;
    tab[15] = -13;



    AffichageAttaque(16, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);    ///FIN DE L'AFFICHAGE DE LA ZONE
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;

    int i = 0;

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);
    BITMAP *fusil;
    fusil = load_bitmap("fusil.bmp", NULL);
    if(fusil==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tab2[12];

        for(int x = 0; x < 12; x++)
        {
            tab2[x] = tab[x + 4];
        }


        AffichageAttaquePRecision(12, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);


    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case





        int a = 0;
        int inter;
        while(a < 16)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 4)
                {
                    inter = 1;
                }
                else
                {
                    inter = 2;
                }
            }
            a++;
        }


        if(inter == 1)
        {
            aleatoire = rand()%11;                  ///Aleatoire pour attaque
            if(aleatoire == 0)
            {
                printf("\nAleatoire : attaque annule\n");
                return 0;
            }
            else
            {
                printf("\nAttaque en cours\n");
                ///ANNIMATION DE L'ATTAQUE
                joueur[ordreJoueur].PA -= 3;
                for(i = 0; i < 4; i++)
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY+10);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY-10);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                    }
                    if(joueur[i].position == caseAttaque)
                    {
                        joueur[i].PV = joueur[i].PV - (3*joueur[ordreJoueur].perso.attaque2);
                    }
                }
            }
        }
        if(inter == 2)
        {


            int inter2;
            for(int s = 4; s < 16; s++)
            {
                if((joueur[ordreJoueur].position + tab[s]) == caseAttaque)
                {
                    if(4 <= s && s < 7)
                    {
                        inter2 = 1;
                    }
                    else if(7 <= s && s < 10)
                    {
                        inter2 = 2;
                    }
                    else if(10 <= s && s < 13)
                    {
                        inter2 = 3;
                    }
                    else
                    {
                        inter2 = 4;
                    }
                }
                a++;
            }

            if(inter2 == 1)
            {
                aleatoire = rand()%11;                  ///Aleatoire pour attaque
                if(aleatoire == 0)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    printf("\nAttaque en cours\n");
                    ///ANNIMATION DE L'ATTAQUE
                    joueur[ordreJoueur].PA -= 3;
                    for(i = 0; i < 4; i++)
                    {
                        for(int j = 4; j < 7; j++)
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fusil, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 10 , grille[joueur[ordreJoueur].position + tab[j]].caseY);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }

                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;
                            }
                        }
                    }
                }
            }
            if(inter2 == 2)
            {
                aleatoire = rand()%11;                  ///Aleatoire pour attaque
                if(aleatoire == 0)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    printf("\nAttaque en cours\n");
                    ///ANNIMATION DE L'ATTAQUE
                    joueur[ordreJoueur].PA -= 3;
                    for(i = 0; i < 4; i++)
                    {
                        for(int j = 7; j < 10; j++)
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fusil, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 10 , grille[joueur[ordreJoueur].position + tab[j]].caseY);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }

                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;
                            }
                        }
                    }
                }
            }
            if(inter2 == 3)
            {
                aleatoire = rand()%11;                  ///Aleatoire pour attaque
                if(aleatoire == 0)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    printf("\nAttaque en cours\n");
                    ///ANNIMATION DE L'ATTAQUE
                    joueur[ordreJoueur].PA -= 3;
                    for(i = 0; i < 4; i++)
                    {
                        for(int j = 10; j < 13; j++)
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fusil, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 10 , grille[joueur[ordreJoueur].position + tab[j]].caseY);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }

                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;
                            }
                        }
                    }
                }
            }
            if(inter2 == 4)
            {
                aleatoire = rand()%11;                  ///Aleatoire pour attaque
                if(aleatoire == 0)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    printf("\nAttaque en cours\n");
                    ///ANNIMATION DE L'ATTAQUE
                    joueur[ordreJoueur].PA -= 3;
                    for(i = 0; i < 4; i++)
                    {
                        for(int j = 13; j < 16; j++)
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fusil, grille[joueur[ordreJoueur].position + tab[j]].caseX  - 10 , grille[joueur[ordreJoueur].position + tab[j]].caseY);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }

                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;
                            }
                        }
                    }
                }
            }

        }
        *attaqueChoisi = -10;
        rest(2000);
    }

}


void SA3(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[8];
    tab[0] = -17;
    tab[1] = -31;
    tab[2] = -29;
    tab[3] = -13;
    tab[4] = 13;
    tab[5] = 29;
    tab[6] = 17;
    tab[7] = 31;

    AffichageAttaque(8, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);


    int tab2[20];
    tab2[0] = -18;
    tab2[1] = -33;
    tab2[2] = -32;
    tab2[3] = -47;
    tab2[4] = -46;
    tab2[5] = -44;
    tab2[6] = -43;
    tab2[7] = -28;
    tab2[8] = -27;
    tab2[9] = -12;
    tab2[10] = 18;
    tab2[11] = 33;
    tab2[12] = 32;
    tab2[13] = 47;
    tab2[14] = 46;
    tab2[15] = 44;
    tab2[16] = 43;
    tab2[17] = 28;
    tab2[18] = 27;
    tab2[19] = 12;

    AffichageAttaque2(20, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire1 = -10;
    int i = 0;

    BITMAP* fusil;
    fusil = load_bitmap("fusil.bmp", NULL);
    if(fusil==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        printf("\nAttaque en cours\n");
        ///ANNIMATION DE L'ATTAQUE
        joueur[ordreJoueur].PA -= 4;
        for(i = 0; i < 4; i++)
        {
            if(i == ordreJoueur)
            {
                draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY);
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

            }
            if(joueur[i].position == caseAttaque)
            {
                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque3;
            }
        }

        int inter;
        int a = 0;
        while(a < 8)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 2)
                {
                    inter = 1;
                }
                else if(2 <= a && a < 4)
                {
                    inter = 2;
                }
                else if(4 <= a && a < 6)
                {
                    inter = 3;
                }
                else
                {
                    inter = 4;
                }
            }
            a++;
        }



        if(inter == 1)
        {
            for(i = 0; i < 4; i++)
            {
                aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                if(aleatoire1 == 0)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 50 , grille[caseAttaque].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque - 1)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 1)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 500 , grille[caseAttaque].caseY-40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }

                    if(joueur[i].position == caseAttaque - 16)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 2)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY-40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }

                    if(joueur[i].position == caseAttaque - 15)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
            }
        }
        if(inter == 2)
        {
            for(i = 0; i < 4; i++)
            {
                aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                if(aleatoire1 == 0)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY-40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque - 15)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 1)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX +30 , grille[caseAttaque].caseY-40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque - 14)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 2)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX +30 , grille[caseAttaque].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque + 1)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
            }
        }
        if(inter == 3)
        {
            for(i = 0; i < 4; i++)
            {
                aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                if(aleatoire1 == 0)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 50 , grille[caseAttaque].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque - 1)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 1)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 50 , grille[caseAttaque].caseY+40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque + 14)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 2)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY+40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque + 15)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
            }
        }
        if(inter == 4)
        {
            for(i = 0; i < 4; i++)
            {
                aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                if(aleatoire1 == 0)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX +30 , grille[caseAttaque].caseY);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque + 1)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 1)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX +30 , grille[caseAttaque].caseY+40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque + 16)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
                if(aleatoire1 == 2)
                {
                    if(i == ordreJoueur)
                    {
                        rest(1000);
                        draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY+40);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    if(joueur[i].position == caseAttaque + 15)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                    }
                }
            }
        }
        *attaqueChoisi = -10;
        rest(2000);
    }
}







void SA4(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE
    int tab[8];
    tab[0] = -3;
    tab[1] = 3;
    tab[2] = -45;
    tab[3] = 45;
    tab[4] = -48;
    tab[5] = -42;
    tab[6] = 42;
    tab[7] = 48;

    AffichageAttaque(8, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;


    BITMAP* fusil;
    fusil = load_bitmap("fusil.bmp", NULL);
    if(fusil==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        aleatoire = rand()%6;                  ///Aleatoire pour attaque
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            joueur[ordreJoueur].PV -= 100;
        }
        else
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 5;
            for(i = 0; i < 4; i++)
            {
            if(i == ordreJoueur)
            {
                draw_sprite(Buffer, fusil, grille[caseAttaque].caseX - 10 , grille[caseAttaque].caseY);
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

            }

                if(joueur[i].position == caseAttaque)
                {
                    joueur[i].PV = (joueur[i].PV/2);
                }
            }
        }
        *attaqueChoisi = -10;
        rest(2000);
    }

}




void BAM(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE
    int tab[8];
    tab[0] = -16;
    tab[1] = -15;
    tab[2] = -14;
    tab[3] = -1;
    tab[4] = 1;
    tab[5] = 14;
    tab[6] = 15;
    tab[7] = 16;

    AffichageAttaque(8, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;

    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i = 0; i < 4; i++)
            {
                if(joueur[i].position == caseAttaque)
                {
                    joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaqueMele;
                }
            }
        }

        *attaqueChoisi = -10;
    }

}










void BA1(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE
    int tab[20];
    tab[0] = -32;
    tab[1] = -31;
    tab[2] = -33;
    tab[3] = -17;
    tab[4] = -47;
    tab[5] = -28;
    tab[6] = -27;
    tab[7] = -29;
    tab[8] = -13;
    tab[9] = -43;
    tab[10] = 32;
    tab[11] = 31;
    tab[12] = 33;
    tab[13] = 17;
    tab[14] = 47;
    tab[15] = 28;
    tab[16] = 27;
    tab[17] = 29;
    tab[18] = 13;
    tab[19] = 43;

    AffichageAttaque(20, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;



    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);
    BITMAP* fleche;
    fleche = load_bitmap("fleche.bmp", NULL);
    if(fleche==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tab2[5];
        int tab22[5];
        int tab222[5];
        int tab2222[5];
        for(int x = 0; x < 5; x++)
        {
            tab2[x] = tab[x];
        }
        for(int j = 0; j < 5; j++)
        {
            tab22[j] = tab[j + 5];
        }
        for(int x = 0; x < 5; x++)
        {
            tab222[x] = tab[x + 10];
        }
        for(int j = 0; j < 5; j++)
        {
            tab2222[j] = tab[j + 15];
        }


        AffichageAttaquePRecision(5, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
        AffichageAttaquePRecision(5, 0, 255, 122, joueur[ordreJoueur], grille, Buffer, tab222, PlateauObstacle2);
        AffichageAttaquePRecision(5, 255, 122, 255, joueur[ordreJoueur], grille, Buffer, tab222, PlateauObstacle2);
        AffichageAttaquePRecision(5, 122, 255, 122, joueur[ordreJoueur], grille, Buffer, tab2222, PlateauObstacle2);


    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        int a = 0;
        int inter;
        while(a < 20)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 5)
                {
                    inter = 1;
                }
                else if(5 <= a && a < 10)
                {
                    inter = 2;
                }
                else if(10 <= a && a < 15)
                {
                    inter = 3;
                }
                else
                {
                    inter = 4;
                }
            }
            a++;
        }


        if(inter == 1)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i = 0; i < 4; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                        aleatoire = rand()%11;                  ///Aleatoire pour attaque
                        if(aleatoire == 0)
                        {
                            printf("\nAleatoire : attaque annule\n");
                            return 0;
                        }
                        else
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[j]].caseX, grille[joueur[ordreJoueur].position + tab[j]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }
                            printf("\nAttaque en cours\n");
                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                            }
                        }
                }
           }
        }
        if(inter == 2)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i = 0; i < 4; i++)
            {
                for(int j = 5; j < 10; j++)
                {
                        aleatoire = rand()%11;                  ///Aleatoire pour attaque
                        if(aleatoire == 0)
                        {
                            printf("\nAleatoire : attaque annule\n");
                            return 0;
                        }
                        else
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[j]].caseX, grille[joueur[ordreJoueur].position + tab[j]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }
                            printf("\nAttaque en cours\n");
                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                            }
                        }
                }
           }
        }
        if(inter == 3)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i = 0; i < 4; i++)
            {
                for(int j = 10; j < 15; j++)
                {
                        aleatoire = rand()%11;                  ///Aleatoire pour attaque
                        if(aleatoire == 0)
                        {
                            printf("\nAleatoire : attaque annule\n");
                            return 0;
                        }
                        else
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[j]].caseX, grille[joueur[ordreJoueur].position + tab[j]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }
                            printf("\nAttaque en cours\n");
                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                            }
                        }
                }
           }
        }
        if(inter == 4)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 2;
            for(i = 0; i < 4; i++)
            {
                for(int j = 15; j < 20; j++)
                {
                        aleatoire = rand()%11;                  ///Aleatoire pour attaque
                        if(aleatoire == 0)
                        {
                            printf("\nAleatoire : attaque annule\n");
                            return 0;
                        }
                        else
                        {
                            if(i == ordreJoueur)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[j]].caseX, grille[joueur[ordreJoueur].position + tab[j]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            }
                            printf("\nAttaque en cours\n");
                            if(joueur[i].position == (joueur[ordreJoueur].position + tab[j]))
                            {
                                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque1;
                            }
                        }
                }
           }
        }
        *attaqueChoisi = -10;
        rest(2000);
    }
}







void BA2(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE
    int tab[16];
    tab[0] = -1;
    tab[1] = 1;
    tab[2] = -15;
    tab[3] = 15;
    tab[4] = -2;
    tab[5] = 2;
    tab[6] = -30;
    tab[7] = 30;
    tab[8] = -3;
    tab[9] = 3;
    tab[10] = -45;
    tab[11] = 45;
    tab[12] = -4;
    tab[13] = 4;
    tab[14] = -60;

    AffichageAttaque(16, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;

    BITMAP* fleche;
    fleche = load_bitmap("fleche.bmp", NULL);
    if(fleche==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))  ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        int a = 0;
        int inter;
        while(a < 16)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 4)
                {
                    inter = 1;
                }
                else if(4 <= a && a < 8)
                {
                    inter = 2;
                }
                else if(8 <= a && a < 12)
                {
                    inter = 3;
                }
                else
                {
                    inter = 4;
                }
            }
            a++;
        }


        if(inter == 1)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 3;
            for(i = 0; i < 4; i++)
            {
                if(i == ordreJoueur)
                {
                    draw_sprite(Buffer, fleche, grille[caseAttaque].caseX, grille[caseAttaque].caseY-10);
                    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                }

                printf("\nAttaque en cours\n");
                if(joueur[i].position == caseAttaque)
                {
                    joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque2;
                }
           }
        }
        if(inter == 2)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 3;
            for(i = 0; i < 4; i++)
            {
                aleatoire = rand()%2;                  ///Aleatoire pour attaque
                if(aleatoire == 0)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, fleche, grille[caseAttaque].caseX, grille[caseAttaque].caseY-10);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }
                    printf("\nAttaque en cours\n");
                    if(joueur[i].position == caseAttaque)
                    {
                        joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque2);
                    }
                }
           }
        }
        if(inter == 3)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 3;
            for(i = 0; i < 4; i++)
            {
                aleatoire = rand()%4;                  ///Aleatoire pour attaque
                if(aleatoire < 3)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, fleche, grille[caseAttaque].caseX, grille[caseAttaque].caseY-10);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }

                    printf("\nAttaque en cours\n");
                    if(joueur[i].position == caseAttaque)
                    {
                        joueur[i].PV = joueur[i].PV - (4*joueur[ordreJoueur].perso.attaque2);
                    }
                }
           }
        }
        if(inter == 4)
        {
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 3;
            for(i = 0; i < 4; i++)
            {
                aleatoire = rand()%8;                  ///Aleatoire pour attaque
                if(aleatoire < 6)
                {
                    printf("\nAleatoire : attaque annule\n");
                    return 0;
                }
                else
                {
                    if(i == ordreJoueur)
                    {
                        draw_sprite(Buffer, fleche, grille[caseAttaque].caseX, grille[caseAttaque].caseY-10);
                        blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    }

                    printf("\nAttaque en cours\n");
                    if(joueur[i].position == caseAttaque)
                    {
                        joueur[i].PV = joueur[i].PV - (8*joueur[ordreJoueur].perso.attaque2);
                    }
                }
           }
        }
        *attaqueChoisi = -10;
        rest(2000);
    }
}





void BA3(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE

    int tab[24];
    tab[0] = -17;
    tab[1] = -31;
    tab[2] = -33;
    tab[3] = -47;
    tab[4] = -49;
    tab[5] = -63;
    tab[6] = -13;
    tab[7] = -29;
    tab[8] = -27;
    tab[9] = -43;
    tab[10] = -41;
    tab[11] = -57;
    tab[12] = 17;
    tab[13] = 31;
    tab[14] = 33;
    tab[15] = 47;
    tab[16] = 49;
    tab[17] = 63;
    tab[18] = 13;
    tab[19] = 29;
    tab[20] = 27;
    tab[21] = 43;
    tab[22] = 41;
    tab[23] = 57;

    AffichageAttaque(24, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);


    int tab2[12];
    tab2[0] = -16;
    tab2[1] = -32;
    tab2[2] = -48;
    tab2[3] = -14;
    tab2[4] = -28;
    tab2[5] = -42;
    tab2[6] = 16;
    tab2[7] = 32;
    tab2[8] = 48;
    tab2[9] = 14;
    tab2[10] = 28;
    tab2[11] = 42;


    AffichageAttaque2(12, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire1 = -10;
    int i = 0;

    BITMAP *aide;
    aide = load_bitmap("aide.bmp", NULL);
    if(aide==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    draw_sprite(Buffer, aide, 25, 130);
    BITMAP* fleche;
    fleche = load_bitmap("fleche.bmp", NULL);
    if(fleche==NULL)
    {
        allegro_message("Pb de image") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    if(key[KEY_SPACE] || (mouse_x >= 25 && mouse_x <= 173 && mouse_y >= 130 && mouse_y <= 182 && mouse_b & 1))
    {


        int tabx[2];
        int tab22[2];
        int tab222[2];
        int tab2222[2];
        int taba[2];
        int tabb[2];
        int tabc[2];
        int tabd[2];
        int tabe[2];
        int tabf[2];
        int tabg[2];
        int tabh[2];
    tabx[0] = -17;
    tabx[1] = -31;
    tab22[0] = -33;
    tab22[1] = -47;
    tab222[0] = -49;
    tab222[1] = -63;
    tab2222[0] = -13;
    tab2222[1] = -29;
    taba[0] = -27;
    taba[1] = -43;
    tabb[0] = -41;
    tabb[1] = -57;
    tabc[0] = 17;
    tabc[1] = 31;
    tabd[0] = 33;
    tabd[1] = 47;
    tabe[0] = 49;
    tabe[1] = 63;
    tabf[0] = 13;
    tabf[1] = 29;
    tabg[0] = 27;
    tabg[1] = 43;
    tabh[0] = 41;
    tabh[1] = 57;

        AffichageAttaquePRecision(2, 0, 122, 255, joueur[ordreJoueur], grille, Buffer, tab2, PlateauObstacle2);
        AffichageAttaquePRecision(2, 0, 255, 122, joueur[ordreJoueur], grille, Buffer, tab22, PlateauObstacle2);
        AffichageAttaquePRecision(2, 255, 122, 255, joueur[ordreJoueur], grille, Buffer, tab222, PlateauObstacle2);
        AffichageAttaquePRecision(2, 122, 255, 122, joueur[ordreJoueur], grille, Buffer, tab2222, PlateauObstacle2);
        AffichageAttaquePRecision(2, 255, 122, 122, joueur[ordreJoueur], grille, Buffer, taba, PlateauObstacle2);
        AffichageAttaquePRecision(2, 122, 255, 255, joueur[ordreJoueur], grille, Buffer, tabb, PlateauObstacle2);
        AffichageAttaquePRecision(2, 0, 122, 122, joueur[ordreJoueur], grille, Buffer, tabc, PlateauObstacle2);
        AffichageAttaquePRecision(2, 122, 122, 122, joueur[ordreJoueur], grille, Buffer, tabd, PlateauObstacle2);
        AffichageAttaquePRecision(2, 255, 122, 122, joueur[ordreJoueur], grille, Buffer, tabe, PlateauObstacle2);
        AffichageAttaquePRecision(2, 122, 255, 255, joueur[ordreJoueur], grille, Buffer, tabf, PlateauObstacle2);
        AffichageAttaquePRecision(2, 0, 122, 122, joueur[ordreJoueur], grille, Buffer, tabg, PlateauObstacle2);
        AffichageAttaquePRecision(2, 122, 122, 122, joueur[ordreJoueur], grille, Buffer, tabh, PlateauObstacle2);


    }



    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        printf("\nAttaque en cours\n");
        ///ANNIMATION DE L'ATTAQUE
        joueur[ordreJoueur].PA -= 4;
        for(i = 0; i < 4; i++)
        {


            if(joueur[i].position == caseAttaque)
            {
                joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque3;
            }
        }

        int a = 0;
        while(a < 24)
        {
            if((joueur[ordreJoueur].position + tab[a]) == caseAttaque)
            {
                if(a < 2)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[0]].caseX, grille[joueur[ordreJoueur].position + tab[0]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[1]].caseX, grille[joueur[ordreJoueur].position + tab[1]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[0]].caseX, grille[joueur[ordreJoueur].position + tab2[0]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[0])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[0]].caseX, grille[joueur[ordreJoueur].position + tab2[0]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[0]].caseX, grille[joueur[ordreJoueur].position + tab2[0]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[0])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }

                }
                else if(2 <= a && a < 4)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[2]].caseX, grille[joueur[ordreJoueur].position + tab[2]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[3]].caseX, grille[joueur[ordreJoueur].position + tab[3]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[1]].caseX, grille[joueur[ordreJoueur].position + tab2[1]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[1])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[1]].caseX, grille[joueur[ordreJoueur].position + tab2[1]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[1]].caseX, grille[joueur[ordreJoueur].position + tab2[1]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[1])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(4 <= a && a < 6)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[4]].caseX, grille[joueur[ordreJoueur].position + tab[4]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[5]].caseX, grille[joueur[ordreJoueur].position + tab[5]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[2]].caseX, grille[joueur[ordreJoueur].position + tab2[2]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[2])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[2]].caseX, grille[joueur[ordreJoueur].position + tab2[2]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[2]].caseX, grille[joueur[ordreJoueur].position + tab2[2]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[2])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(6 <= a && a < 8)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[6]].caseX, grille[joueur[ordreJoueur].position + tab[6]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[7]].caseX, grille[joueur[ordreJoueur].position + tab[7]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[3]].caseX, grille[joueur[ordreJoueur].position + tab2[3]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[3])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[3]].caseX, grille[joueur[ordreJoueur].position + tab2[3]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[3]].caseX, grille[joueur[ordreJoueur].position + tab2[3]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[3])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(8 <= a && a < 10)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[8]].caseX, grille[joueur[ordreJoueur].position + tab[8]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[9]].caseX, grille[joueur[ordreJoueur].position + tab[9]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[4]].caseX, grille[joueur[ordreJoueur].position + tab2[4]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[4])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[4]].caseX, grille[joueur[ordreJoueur].position + tab2[4]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[4]].caseX, grille[joueur[ordreJoueur].position + tab2[4]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[4])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(10 <= a && a < 12)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[10]].caseX, grille[joueur[ordreJoueur].position + tab[10]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[11]].caseX, grille[joueur[ordreJoueur].position + tab[11]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[5]].caseX, grille[joueur[ordreJoueur].position + tab2[5]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[5])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[5]].caseX, grille[joueur[ordreJoueur].position + tab2[5]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[5]].caseX, grille[joueur[ordreJoueur].position + tab2[5]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[5])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(12 <= a && a < 14)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[12]].caseX, grille[joueur[ordreJoueur].position + tab[12]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[13]].caseX, grille[joueur[ordreJoueur].position + tab[13]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[6]].caseX, grille[joueur[ordreJoueur].position + tab2[6]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[6])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[6]].caseX, grille[joueur[ordreJoueur].position + tab2[6]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[6]].caseX, grille[joueur[ordreJoueur].position + tab2[6]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[6])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(14 <= a && a < 16)
                {
                    for(i = 0; i < 4; i++)
                    {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[14]].caseX, grille[joueur[ordreJoueur].position + tab[14]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[15]].caseX, grille[joueur[ordreJoueur].position + tab[15]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[7]].caseX, grille[joueur[ordreJoueur].position + tab2[7]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[7])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[7]].caseX, grille[joueur[ordreJoueur].position + tab2[7]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[7]].caseX, grille[joueur[ordreJoueur].position + tab2[7]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[7])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                    }
                }
                else if(16 <= a && a < 18)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[16]].caseX, grille[joueur[ordreJoueur].position + tab[16]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[17]].caseX, grille[joueur[ordreJoueur].position + tab[17]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[8]].caseX, grille[joueur[ordreJoueur].position + tab2[8]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[8])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[8]].caseX, grille[joueur[ordreJoueur].position + tab2[8]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[8]].caseX, grille[joueur[ordreJoueur].position + tab2[8]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[8])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(18 <= a && a < 20)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[18]].caseX, grille[joueur[ordreJoueur].position + tab[18]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[19]].caseX, grille[joueur[ordreJoueur].position + tab[19]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[9]].caseX, grille[joueur[ordreJoueur].position + tab2[9]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[9])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[9]].caseX, grille[joueur[ordreJoueur].position + tab2[9]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[9]].caseX, grille[joueur[ordreJoueur].position + tab2[9]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[9])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else if(20 <= a && a < 22)
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[20]].caseX, grille[joueur[ordreJoueur].position + tab[20]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[21]].caseX, grille[joueur[ordreJoueur].position + tab[21]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[10]].caseX, grille[joueur[ordreJoueur].position + tab2[10]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[10])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[10]].caseX, grille[joueur[ordreJoueur].position + tab2[10]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[10]].caseX, grille[joueur[ordreJoueur].position + tab2[10]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[10])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
                else
                {
                    for(i = 0; i < 4; i++)
                    {

                        if(i == ordreJoueur)
                        {
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[22]].caseX, grille[joueur[ordreJoueur].position + tab[22]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                            draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab[23]].caseX, grille[joueur[ordreJoueur].position + tab[23]].caseY-10);
                            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

                            aleatoire1 = rand()%3;                  ///Aleatoire pour attaque
                            if(aleatoire1 == 0)
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[11]].caseX, grille[joueur[ordreJoueur].position + tab2[11]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[11])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }
                            }
                            else if(aleatoire1 == 1)
                            {
                                return 0;//aucun boomerang
                            }
                            else
                            {
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[11]].caseX, grille[joueur[ordreJoueur].position + tab2[11]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                draw_sprite(Buffer, fleche, grille[joueur[ordreJoueur].position + tab2[11]].caseX, grille[joueur[ordreJoueur].position + tab2[11]].caseY-10);
                                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                                if(joueur[i].position == joueur[ordreJoueur].position + tab2[11])
                                {
                                    joueur[i].PV = joueur[i].PV - (2*joueur[ordreJoueur].perso.attaque3);
                                }

                            }

                        }


                    }                }
            }
            a++;
        }


        *attaqueChoisi = -10;
        rest(2000);
    }
}





void BA4(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur)
{
    ///DEBUT DE L'AFFICHAGE DE LA ZONE
    int tab[24];
    tab[0] = -64;
    tab[1] = -63;
    tab[2] = -62;
    tab[3] = -49;
    tab[4] = -48;
    tab[5] = -34;
    tab[6] = -56;
    tab[7] = -57;
    tab[8] = -58;
    tab[9] = -42;
    tab[10] = -41;
    tab[11] = -26;
    tab[12] = 64;
    tab[13] = 63;
    tab[14] = 62;
    tab[15] = 49;
    tab[16] = 48;
    tab[17] = 34;
    tab[18] = 56;
    tab[19] = 57;
    tab[20] = 58;
    tab[21] = 42;
    tab[22] = 41;
    tab[23] = 26;

    AffichageAttaque(24, joueur[ordreJoueur], grille, Buffer, tab, PlateauObstacle2);
    ///FIN DE L'AFFICHAGE DE LA ZONE

    int caseAttaque = -10;
    int aleatoire = -10;
    int i = 0;

    if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(180,47,250))   ///ON VERIFIE LE NUMERO DE LA CASE SI CLIC GAUCHE SUR UNE CASE BLEUE
    {
        caseAttaque = trouverCase(grille);      ///Sous programme pour trouver la case
        aleatoire = rand()%11;                  ///Aleatoire pour attaque
        if(aleatoire == 0)
        {
            printf("\nAleatoire : attaque annule\n");
            return 0;
        }
        else
        {
            printf("\nAttaque en cours\n");
            ///ANNIMATION DE L'ATTAQUE
            joueur[ordreJoueur].PA -= 5;
            for(i = 0; i < 4; i++)
            {
                if(i == ordreJoueur)
                {
                    rectfill(Buffer, grille[caseAttaque].caseX - 19, grille[caseAttaque].caseY - 19, grille[caseAttaque].caseX + 19, grille[caseAttaque].caseY + 19, makecol(255,255,255));
                    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                }
                if(joueur[i].position == caseAttaque)
                {
                    joueur[i].PV = joueur[i].PV - joueur[ordreJoueur].perso.attaque4;
                }
            }
        }
        *attaqueChoisi = -10;
        rest(2000);
    }

}





int trouverAttaque()
{
    if(mouse_x >= 15 && mouse_x <= 63 && mouse_y >= 80 && mouse_y <= 125)   ///faire sous programme de pre-visualisation de chaque attaque
    {
        if(mouse_b & 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(mouse_x >= 84 && mouse_x <= 133 && mouse_y >= 80 && mouse_y <= 125)
    {
        if(mouse_b & 1)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
    else if(mouse_x >= 150 && mouse_x <= 200 && mouse_y >= 80 && mouse_y <= 125)
    {
        if(mouse_b & 1)
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }
    else if(mouse_x >= 215 && mouse_x <= 260 && mouse_y >= 80 && mouse_y <= 125)
    {
        if(mouse_b & 1)
        {
            return 4;
        }
        else
        {
            return 0;
        }
    }
    else if(mouse_x >= 280 && mouse_x <= 330 && mouse_y >= 80 && mouse_y <= 125)
    {
        if(mouse_b & 1)
        {
            return 5;
        }
        else
        {
            return 0;
        }
    }
}







void attaques(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int ordreJoueur, int nbrJoueurs, int* attaque, BITMAP* PlateauObstacle2)
{
    BITMAP *PasserTour;
    PasserTour = load_bitmap("PasserLeTour.bmp", NULL);
    if(PasserTour==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    draw_sprite(Buffer, PasserTour, 1365, 805);
    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


    int attaqueChoisi = -10;
    if(joueur[ordreJoueur].numPerso == 1)
    {
        attaqueChoisi = trouverAttaque() - 1;
        while(attaqueChoisi == 0)
        {
            SAM(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 1)
        {
            SA1(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 2)
        {
            SA2(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 3)
        {
            SA3(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 4)
        {
            SA4(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        if((mouse_x >= 1370 && mouse_x <= 1524 && mouse_y >= 810 && mouse_y <= 855 && mouse_b & 1) || joueur[ordreJoueur].PA < 2)
        {
            *attaque = 1;
        }
    }
    else if(joueur[ordreJoueur].numPerso == 2)
    {
        attaqueChoisi = trouverAttaque() - 1;
        while(attaqueChoisi == 0)
        {
            BAM(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 1)
        {
            BA1(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 2)
        {
            BA2(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 3)
        {
            BA3(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 4)
        {
            BA4(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        if((mouse_x >= 1370 && mouse_x <= 1524 && mouse_y >= 810 && mouse_y <= 855 && mouse_b & 1) || joueur[ordreJoueur].PA < 2)
        {
            *attaque = 1;
        }
    }
    else if(joueur[ordreJoueur].numPerso == 3)
    {
        attaqueChoisi = trouverAttaque() - 1;
        while(attaqueChoisi == 0)
        {
            DAM(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 1)
        {
            DA1(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 2)
        {
            DA2(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 3)
        {
            DA3(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 4)
        {
            DA4(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        if((mouse_x >= 1370 && mouse_x <= 1524 && mouse_y >= 810 && mouse_y <= 855 && mouse_b & 1) || joueur[ordreJoueur].PA < 2)
        {
            *attaque = 1;
        }
    }
    else if(joueur[ordreJoueur].numPerso == 4)
    {
        attaqueChoisi = trouverAttaque() - 1;
        while(attaqueChoisi == 0)
        {
            RAM(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 1)
        {
            RA1(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 2)
        {
            RA2(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 3)
        {
            RA3(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        while(attaqueChoisi == 4)
        {
            RA4(grille, Buffer, joueur, &attaqueChoisi, PlateauObstacle2, ordreJoueur);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            *attaque = 1;
        }
        if((mouse_x >= 1370 && mouse_x <= 1524 && mouse_y >= 810 && mouse_y <= 855 && mouse_b & 1) || joueur[ordreJoueur].PA < 2)
        {
            *attaque = 1;
        }
    }
    destroy_bitmap(PasserTour);
}
