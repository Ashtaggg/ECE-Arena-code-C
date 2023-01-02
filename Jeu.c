#include "header.h"

void affichagePlateau(BITMAP *Buffer)
{
    //while(!key[KEY_ESC])
    //{
    //clear_bitmap(Buffer);
    //rectfill(Buffer,350,0,600,20,makecol(0,0,0));

    vline(Buffer, 480, 150, 750, makecol(255,0,0));
    vline(Buffer, 520, 150, 750, makecol(255,0,0));
    vline(Buffer, 560, 150, 750, makecol(255,0,0));
    vline(Buffer, 600, 150, 750, makecol(255,0,0));
    vline(Buffer, 640, 150, 750, makecol(255,0,0));
    vline(Buffer, 680, 150, 750, makecol(255,0,0));
    vline(Buffer, 720, 150, 750, makecol(255,0,0));
    vline(Buffer, 760, 150, 750, makecol(255,0,0));
    vline(Buffer, 800, 150, 750, makecol(255,0,0));
    vline(Buffer, 840, 150, 750, makecol(255,0,0));
    vline(Buffer, 880, 150, 750, makecol(255,0,0));
    vline(Buffer, 920, 150, 750, makecol(255,0,0));
    vline(Buffer, 960, 150, 750, makecol(255,0,0));
    vline(Buffer, 1000, 150, 750, makecol(255,0,0));
    vline(Buffer, 1040, 150, 750, makecol(255,0,0));
    vline(Buffer, 1080, 150, 750, makecol(255,0,0));

    hline(Buffer, 480, 150, 1080, makecol(255,0,0));
    hline(Buffer, 480, 190, 1080, makecol(255,0,0));
    hline(Buffer, 480, 230, 1080, makecol(255,0,0));
    hline(Buffer, 480, 270, 1080, makecol(255,0,0));
    hline(Buffer, 480, 310, 1080, makecol(255,0,0));
    hline(Buffer, 480, 350, 1080, makecol(255,0,0));
    hline(Buffer, 480, 390, 1080, makecol(255,0,0));
    hline(Buffer, 480, 430, 1080, makecol(255,0,0));
    hline(Buffer, 480, 470, 1080, makecol(255,0,0));
    hline(Buffer, 480, 510, 1080, makecol(255,0,0));
    hline(Buffer, 480, 550, 1080, makecol(255,0,0));
    hline(Buffer, 480, 590, 1080, makecol(255,0,0));
    hline(Buffer, 480, 630, 1080, makecol(255,0,0));
    hline(Buffer, 480, 670, 1080, makecol(255,0,0));
    hline(Buffer, 480, 710, 1080, makecol(255,0,0));
    hline(Buffer, 480, 750, 1080, makecol(255,0,0));

    //textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
    //blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    //}
}




void afficherTableau(t_c grille[225])
{
    int a = 0;
    printf("\n\n\n");
    int i = 0;
    int y = 0;
    int compteur = 0;
    for(i=0;i<15;i++)
    {
        for(y=0;y<15;y++)
        {
            printf("%d :   %d %d\t\t",compteur ,grille[compteur].caseY,grille[compteur].caseX);
            //printf("%d\t",grille[compteur].colonne);
            //printf("%d\t",grille[compteur].ligne);
            compteur = compteur+1;
        }
        printf("\n\n\n");
    }
}

void coCases(t_c grille[225])
{
    int i = 0;
    int y = 0;
    int compteur = 0;
    int compteurX = 500;
    int compteurY = 170;
    int compteurColonne = 1;
    int compteurLigne = 1;
    for(i=0;i<15;i++)
    {
        compteurX = 500;
        for(y=0;y<15;y++)
        {
            grille[compteur].caseX = compteurX;
            grille[compteur].caseY = compteurY;
            grille[compteur].vide = 0;
            grille[compteur].colonne = compteurColonne;
            grille[compteur].ligne = compteurLigne;
            compteurColonne = (compteurColonne + 1)%16;
            compteurX = compteurX + 40;
            compteur = compteur+1;
        }
        compteurY = compteurY + 40;
        compteurColonne = 1;
        compteurLigne += 1;
    }
    grille[48].vide = 2;
    grille[49].vide = 2;
    grille[63].vide = 2;
    grille[64].vide = 2;
    grille[55].vide = 2;
    grille[56].vide = 2;
    grille[70].vide = 2;
    grille[71].vide = 2;

    grille[168].vide = 2;
    grille[169].vide = 2;
    grille[153].vide = 2;
    grille[154].vide = 2;
    grille[175].vide = 2;
    grille[176].vide = 2;
    grille[160].vide = 2;
    grille[161].vide = 2;

    grille[112].vide = 2;
    grille[111].vide = 2;
    grille[113].vide = 2;
    grille[97].vide = 2;
    grille[127].vide = 2;
}



void plateau(t_c grille[225], BITMAP *Buffer, BITMAP *PlateauFond, BITMAP *PlateauObstacle)
{
    //blit(PlateauFond, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    draw_sprite(Buffer, PlateauFond, 0, 0);

    //affichagePlateau(Buffer);
    //afficherTableau(grille);

    draw_sprite(Buffer, PlateauObstacle, 0, 0);
}



void affichagePerso(t_j joueur, t_c grille[225], BITMAP *Buffer, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico)
{
    if(joueur.numPerso == 1)
    {
        draw_sprite(Buffer, Shelly, joueur.positionX - 20, joueur.positionY - 40);
    }
    else if(joueur.numPerso == 2)
    {
        draw_sprite(Buffer, Bo, joueur.positionX - 20, joueur.positionY - 40);
    }
    else if(joueur.numPerso == 3)
    {
        draw_sprite(Buffer, Dynamike, joueur.positionX - 20, joueur.positionY - 40);
    }
    else if(joueur.numPerso == 4)
    {
        draw_sprite(Buffer, Rico, joueur.positionX - 20, joueur.positionY - 40);
    }
}


void avantAffichagePerso(int nbrJoueurs, t_j joueur[4], t_c grille[225], BITMAP *Buffer, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico, BITMAP *PlateauObstacle2)
{
    affichagePerso(joueur[0], grille, Buffer, Shelly, Bo, Dynamike, Rico);
    affichagePerso(joueur[1], grille, Buffer, Shelly, Bo, Dynamike, Rico);
    if(nbrJoueurs >= 3)
    {
        affichagePerso(joueur[2], grille, Buffer, Shelly, Bo, Dynamike, Rico);
    }
    if(nbrJoueurs == 4)
    {
        affichagePerso(joueur[3], grille, Buffer, Shelly, Bo, Dynamike, Rico);
    }
    draw_sprite(Buffer, PlateauObstacle2, 0, 0);
}




void affichageCaseDeplacement(t_j joueur, t_c grille[225], BITMAP *Buffer)
{
    if(grille[joueur.position].ligne >= 2)
    {
        if(grille[joueur.position - 15].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position - 15].caseX - 19, grille[joueur.position - 15].caseY - 19, grille[joueur.position - 15].caseX + 19, grille[joueur.position - 15].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position - 15].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position - 15].caseX - 19, grille[joueur.position - 15].caseY - 19, grille[joueur.position - 15].caseX + 19, grille[joueur.position - 15].caseY + 19, makecol(255,0,0));
        }
    }
    if(grille[joueur.position].ligne >= 3)
    {
        if(grille[joueur.position - 30].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position - 30].caseX - 19, grille[joueur.position - 30].caseY - 19, grille[joueur.position - 30].caseX + 19, grille[joueur.position - 30].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position - 30].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position - 30].caseX - 19, grille[joueur.position - 30].caseY - 19, grille[joueur.position - 30].caseX + 19, grille[joueur.position - 30].caseY + 19, makecol(255,0,0));
        }
    }
    if(grille[joueur.position].ligne >= 4)
    {
        if(grille[joueur.position - 45].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position - 45].caseX - 19, grille[joueur.position - 45].caseY - 19, grille[joueur.position - 45].caseX + 19, grille[joueur.position - 45].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position - 45].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position - 45].caseX - 19, grille[joueur.position - 45].caseY - 19, grille[joueur.position - 45].caseX + 19, grille[joueur.position - 45].caseY + 19, makecol(255,0,0));
        }
    }
    if(grille[joueur.position].ligne <= 14)
    {
        if(grille[joueur.position + 15].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position + 15].caseX - 19, grille[joueur.position + 15].caseY - 19, grille[joueur.position + 15].caseX + 19, grille[joueur.position + 15].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position + 15].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position + 15].caseX - 19, grille[joueur.position + 15].caseY - 19, grille[joueur.position + 15].caseX + 19, grille[joueur.position + 15].caseY + 19, makecol(255,0,0));
        }
    }
    if(grille[joueur.position].ligne <= 13)
    {
        if(grille[joueur.position + 30].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position + 30].caseX - 19, grille[joueur.position + 30].caseY - 19, grille[joueur.position + 30].caseX + 19, grille[joueur.position + 30].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position + 30].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position + 30].caseX - 19, grille[joueur.position + 30].caseY - 19, grille[joueur.position + 30].caseX + 19, grille[joueur.position + 30].caseY + 19, makecol(255,0,0));
        }
    }
    if(grille[joueur.position].ligne <= 12)
    {
        if(grille[joueur.position + 45].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position + 45].caseX - 19, grille[joueur.position + 45].caseY - 19, grille[joueur.position + 45].caseX + 19, grille[joueur.position + 45].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position + 45].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position + 45].caseX - 19, grille[joueur.position + 45].caseY - 19, grille[joueur.position + 45].caseX + 19, grille[joueur.position + 45].caseY + 19, makecol(255,0,0));
        }
    }



    if(grille[joueur.position].colonne >= 2)
    {
        if(grille[joueur.position - 1].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position - 1].caseX - 19, grille[joueur.position - 1].caseY - 19, grille[joueur.position - 1].caseX + 19, grille[joueur.position - 1].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position - 1].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position - 1].caseX - 19, grille[joueur.position - 1].caseY - 19, grille[joueur.position - 1].caseX + 19, grille[joueur.position - 1].caseY + 19, makecol(255,0,0));
        }
        if(grille[joueur.position].ligne >= 2)
        {
            if(grille[joueur.position - 16].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position - 16].caseX - 19, grille[joueur.position - 16].caseY - 19, grille[joueur.position - 16].caseX + 19, grille[joueur.position - 16].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position - 16].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position - 16].caseX - 19, grille[joueur.position - 16].caseY - 19, grille[joueur.position - 16].caseX + 19, grille[joueur.position - 16].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne >= 3)
        {
            if(grille[joueur.position - 31].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position - 31].caseX - 19, grille[joueur.position - 31].caseY - 19, grille[joueur.position - 31].caseX + 19, grille[joueur.position - 31].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position - 31].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position - 31].caseX - 19, grille[joueur.position - 31].caseY - 19, grille[joueur.position - 31].caseX + 19, grille[joueur.position - 31].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne <= 14)
        {
            if(grille[joueur.position + 14].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position + 14].caseX - 19, grille[joueur.position + 14].caseY - 19, grille[joueur.position + 14].caseX + 19, grille[joueur.position + 14].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position + 14].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position + 14].caseX - 19, grille[joueur.position + 14].caseY - 19, grille[joueur.position + 14].caseX + 19, grille[joueur.position + 14].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne <= 13)
        {
            if(grille[joueur.position + 29].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position + 29].caseX - 19, grille[joueur.position + 29].caseY - 19, grille[joueur.position + 29].caseX + 19, grille[joueur.position + 29].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position + 29].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position + 29].caseX - 19, grille[joueur.position + 29].caseY - 19, grille[joueur.position + 29].caseX + 19, grille[joueur.position + 29].caseY + 19, makecol(255,0,0));
            }
        }
    }




    if(grille[joueur.position].colonne >= 3)
    {
        if(grille[joueur.position - 2].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position - 2].caseX - 19, grille[joueur.position - 2].caseY - 19, grille[joueur.position - 2].caseX + 19, grille[joueur.position - 2].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position - 2].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position - 2].caseX - 19, grille[joueur.position - 2].caseY - 19, grille[joueur.position - 2].caseX + 19, grille[joueur.position - 2].caseY + 19, makecol(255,0,0));
        }
        if(grille[joueur.position].ligne >= 2)
        {
            if(grille[joueur.position - 17].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position - 17].caseX - 19, grille[joueur.position - 17].caseY - 19, grille[joueur.position - 17].caseX + 19, grille[joueur.position - 17].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position - 17].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position - 17].caseX - 19, grille[joueur.position - 17].caseY - 19, grille[joueur.position - 17].caseX + 19, grille[joueur.position - 17].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne <= 14)
        {
            if(grille[joueur.position + 13].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position + 13].caseX - 19, grille[joueur.position + 13].caseY - 19, grille[joueur.position + 13].caseX + 19, grille[joueur.position + 13].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position + 13].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position + 13].caseX - 19, grille[joueur.position + 13].caseY - 19, grille[joueur.position + 13].caseX + 19, grille[joueur.position + 13].caseY + 19, makecol(255,0,0));
            }
        }
    }



    if(grille[joueur.position].colonne >= 4)
    {
        if(grille[joueur.position - 3].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position - 3].caseX - 19, grille[joueur.position - 3].caseY - 19, grille[joueur.position - 3].caseX + 19, grille[joueur.position - 3].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position - 3].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position - 3].caseX - 19, grille[joueur.position - 3].caseY - 19, grille[joueur.position - 3].caseX + 19, grille[joueur.position - 3].caseY + 19, makecol(255,0,0));
        }
    }



    if(grille[joueur.position].colonne <= 14)
    {
        if(grille[joueur.position + 1].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position + 1].caseX - 19, grille[joueur.position + 1].caseY - 19, grille[joueur.position + 1].caseX + 19, grille[joueur.position + 1].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position + 1].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position + 1].caseX - 19, grille[joueur.position + 1].caseY - 19, grille[joueur.position + 1].caseX + 19, grille[joueur.position + 1].caseY + 19, makecol(255,0,0));
        }
        if(grille[joueur.position].ligne >= 2)
        {
            if(grille[joueur.position - 14].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position - 14].caseX - 19, grille[joueur.position - 14].caseY - 19, grille[joueur.position - 14].caseX + 19, grille[joueur.position - 14].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position - 14].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position - 14].caseX - 19, grille[joueur.position - 14].caseY - 19, grille[joueur.position - 14].caseX + 19, grille[joueur.position - 14].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne >= 3)
        {
            if(grille[joueur.position - 29].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position - 29].caseX - 19, grille[joueur.position - 29].caseY - 19, grille[joueur.position - 29].caseX + 19, grille[joueur.position - 29].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position - 29].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position - 29].caseX - 19, grille[joueur.position - 29].caseY - 19, grille[joueur.position - 29].caseX + 19, grille[joueur.position - 29].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne <= 14)
        {
            if(grille[joueur.position + 16].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position + 16].caseX - 19, grille[joueur.position + 16].caseY - 19, grille[joueur.position + 16].caseX + 19, grille[joueur.position + 16].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position + 16].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position + 16].caseX - 19, grille[joueur.position + 16].caseY - 19, grille[joueur.position + 16].caseX + 19, grille[joueur.position + 16].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne <= 13)
        {
            if(grille[joueur.position + 31].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position + 31].caseX - 19, grille[joueur.position + 31].caseY - 19, grille[joueur.position + 31].caseX + 19, grille[joueur.position + 31].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position + 31].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position + 31].caseX - 19, grille[joueur.position + 31].caseY - 19, grille[joueur.position + 31].caseX + 19, grille[joueur.position + 31].caseY + 19, makecol(255,0,0));
            }
        }
    }




    if(grille[joueur.position].colonne <= 13)
    {
        if(grille[joueur.position + 2].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position + 2].caseX - 19, grille[joueur.position + 2].caseY - 19, grille[joueur.position + 2].caseX + 19, grille[joueur.position + 2].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position + 2].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position + 2].caseX - 19, grille[joueur.position + 2].caseY - 19, grille[joueur.position + 2].caseX + 19, grille[joueur.position + 2].caseY + 19, makecol(255,0,0));
        }
        if(grille[joueur.position].ligne >= 2)
        {
            if(grille[joueur.position - 13].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position - 13].caseX - 19, grille[joueur.position - 13].caseY - 19, grille[joueur.position - 13].caseX + 19, grille[joueur.position - 13].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position - 13].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position - 13].caseX - 19, grille[joueur.position - 13].caseY - 19, grille[joueur.position - 13].caseX + 19, grille[joueur.position - 13].caseY + 19, makecol(255,0,0));
            }
        }
        if(grille[joueur.position].ligne <= 14)
        {
            if(grille[joueur.position + 17].vide == 0)
            {
                rectfill(Buffer, grille[joueur.position + 17].caseX - 19, grille[joueur.position + 17].caseY - 19, grille[joueur.position + 17].caseX + 19, grille[joueur.position + 17].caseY + 19, makecol(0,0,255));
            }
            else if(grille[joueur.position + 17].vide == 1)
            {
                //rectfill(Buffer, grille[joueur.position + 17].caseX - 19, grille[joueur.position + 17].caseY - 19, grille[joueur.position + 17].caseX + 19, grille[joueur.position + 17].caseY + 19, makecol(255,0,0));
            }
        }
    }







    if(grille[joueur.position].colonne <= 12)
    {
        if(grille[joueur.position + 3].vide == 0)
        {
            rectfill(Buffer, grille[joueur.position + 3].caseX - 19, grille[joueur.position + 3].caseY - 19, grille[joueur.position + 3].caseX + 19, grille[joueur.position + 3].caseY + 19, makecol(0,0,255));
        }
        else if(grille[joueur.position + 3].vide == 1)
        {
            //rectfill(Buffer, grille[joueur.position + 3].caseX - 19, grille[joueur.position + 3].caseY - 19, grille[joueur.position + 3].caseX + 19, grille[joueur.position + 3].caseY + 19, makecol(255,0,0));
        }
    }
}





int trouverCase(t_c grille[225])
{
    int i = 0;
    for(i=0;i<225;i++)
    {
        if(mouse_x <= grille[i].caseX + 20 && mouse_x >= grille[i].caseX - 20 && mouse_y <= grille[i].caseY + 20 && mouse_y >= grille[i].caseY - 20)
        {
            //printf("\nCase : %d\n",i);
            return i;
        }
    }
}






void deplacementPerso(t_j joueur[4], t_c grille[225], BITMAP *Buffer, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico, BITMAP *PlateauFond, BITMAP *PlateauObstacle, BITMAP *PlateauObstacle2, int nouvelleCase, int nbrJoueurs, int ordreJoueur)
{
    grille[joueur[ordreJoueur].position].vide = 0;
    joueur[ordreJoueur].positionX = grille[joueur[ordreJoueur].position].caseX;
    joueur[ordreJoueur].positionY = grille[joueur[ordreJoueur].position].caseY;

    char nomdufichier[13];
    BITMAP* imgMvtBr[32];
    for(int i=0; i<32; i++)
    {
        sprintf(nomdufichier, "br_%d.bmp", i);
        imgMvtBr[i] = load_bitmap(nomdufichier, NULL);
        if(imgMvtBr[i] == NULL)
        {
            allegro_message("Pb ouverture image : %s. \n", nomdufichier);
            allegro_exit();
            exit(EXIT_FAILURE);
        }
    }


    int brwl = 0;
    int cnt = 0;
    switch (joueur[ordreJoueur].perso.numPerso)
    {
        case 1 :
            brwl = 0; //shelly = 0 dans le tableau d'images de deplacementd
            break;
        case 2 :
            brwl = 8; //bo = 8
            break;
        case 3 :
            brwl = 16; //shelly = 16
            break;
        case 4 :
            brwl = 24; //shelly = 24
            break;
    }

    int a = 0;


    while(joueur[ordreJoueur].positionX != grille[nouvelleCase].caseX)
    {
        if(grille[nouvelleCase].caseX > joueur[ordreJoueur].positionX)
        {
            joueur[ordreJoueur].positionX += 1;
            plateau(grille, Buffer, PlateauFond, PlateauObstacle);
            if(a == 0)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 4], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 1;
            }
            else if(a == 1)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 5], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 0;
            }
            //deplacementAnimation(imgMvtBr, Buffer, joueur[ordreJoueur].positionX, joueur[ordreJoueur].positionY, brwl + 4, &cnt);
            //avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
        else if(grille[nouvelleCase].caseX < joueur[ordreJoueur].positionX)
        {
            joueur[ordreJoueur].positionX -= 1;
            plateau(grille, Buffer, PlateauFond, PlateauObstacle);
            if(a == 0)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 6], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 1;
            }
            else if(a == 1)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 7], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 0;
            }
            //avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
            //deplacementAnimation(imgMvtBr, Buffer, joueur[ordreJoueur].positionX, joueur[ordreJoueur].positionY, brwl + 6, &cnt);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
    }
    while(joueur[ordreJoueur].positionY != grille[nouvelleCase].caseY)
    {
        if(grille[nouvelleCase].caseY > joueur[ordreJoueur].positionY)
        {
            joueur[ordreJoueur].positionY += 1;
            plateau(grille, Buffer, PlateauFond, PlateauObstacle);
            if(a == 0)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 2], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 1;
            }
            else if(a == 1)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 3], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 0;
            }
            //avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
            //deplacementAnimation(imgMvtBr, Buffer, joueur[ordreJoueur].positionX, joueur[ordreJoueur].positionY, brwl + 2, &cnt);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
        else if(grille[nouvelleCase].caseY < joueur[ordreJoueur].positionY)
        {
            joueur[ordreJoueur].positionY -= 1;
            plateau(grille, Buffer, PlateauFond, PlateauObstacle);
            if(a == 0)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 0], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 1;
            }
            else if(a == 1)
            {
                draw_sprite(Buffer, imgMvtBr[brwl + 1], joueur[ordreJoueur].positionX - 20, joueur[ordreJoueur].positionY - 20);
                a = 0;
            }
            //avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
            //deplacementAnimation(imgMvtBr, Buffer, joueur[ordreJoueur].positionX, joueur[ordreJoueur].positionY, brwl, &cnt);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        }
    }
    joueur[ordreJoueur].position = nouvelleCase;
    grille[joueur[ordreJoueur].position].vide = 1;
    draw_sprite(Buffer, PlateauObstacle2, 0, 0);

    for(int i=0; i < 32; i++)
    {
        destroy_bitmap(imgMvtBr[i]);
    }
}




void affichageInterface(t_j joueur[4], int nbrJoueurs, int ordreJoueur, BITMAP *Buffer, BITMAP *InterfaceJoueur, BITMAP *CacheInterface, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico, BITMAP *ShellyGrande, BITMAP *BoGrand, BITMAP *DynamikeGrand, BITMAP *RicoGrand)
{
    float calculVie = 0;
    float calculVie2 = 0;
    float calculVie3 = 0;
    calculVie = (float)joueur[ordreJoueur].PV/(float)joueur[ordreJoueur].perso.vie;
    calculVie2 = (calculVie*278);
    calculVie3 = calculVie2 + 52;

    /*printf("%d / %d = %f\n",joueur[ordreJoueur].PV, joueur[ordreJoueur].perso.vie,calculVie);
    printf("%f\n", calculVie2);
    printf("%f\n", calculVie3);*/

    draw_sprite(Buffer, InterfaceJoueur, 0, 0);
    if(joueur[ordreJoueur].PV > 0)
    {
        rectfill(Buffer, 52, 10, calculVie3, 45,makecol(0,255,0));
        textprintf_ex(Buffer, font, 150, 26, makecol(255, 255, 255), -1, "%d / %d", joueur[ordreJoueur].PV, joueur[ordreJoueur].perso.vie);
    }
    else
    {
        rectfill(Buffer, 52, 10, 330, 45,makecol(255,0,0));
        textprintf_ex(Buffer, font, 150, 26, makecol(255, 255, 255), -1, "  Mort");
    }

    if(joueur[ordreJoueur].PA < 10)
    {
        textprintf_ex(Buffer, font, 364, 25, makecol(255, 255, 255), -1, "%d", joueur[ordreJoueur].PA);
    }
    else if(joueur[ordreJoueur].PA >= 10)
    {
        textprintf_ex(Buffer, font, 360, 25, makecol(255, 255, 255), -1, "%d", joueur[ordreJoueur].PA);
    }



    if(joueur[(ordreJoueur)].numPerso == 1)
    {
        draw_sprite(Buffer, ShellyGrande, 60, 244);
    }
    else if(joueur[(ordreJoueur)].numPerso == 2)
    {
        draw_sprite(Buffer, BoGrand, 60, 244);
    }
    else if(joueur[(ordreJoueur)].numPerso == 3)
    {
        draw_sprite(Buffer, DynamikeGrand, 60, 244);
    }
    else if(joueur[(ordreJoueur)].numPerso == 4)
    {
        draw_sprite(Buffer, RicoGrand, 60, 244);
    }








    if(nbrJoueurs == 2)
    {
        draw_sprite(Buffer, CacheInterface, 15, 780);
        if(joueur[(ordreJoueur + 1)%2].PV > 0)
        {
            rectfill(Buffer,37,754,((float)(joueur[(ordreJoueur + 1)%2].PV)/(float)(joueur[(ordreJoueur + 1)%2].perso.vie))*119 + 37,769,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 759, makecol(255, 255, 255), -1, "%d / %d", joueur[(ordreJoueur + 1)%2].PV, joueur[(ordreJoueur + 1)%2].perso.vie);
        }
        else
        {
            rectfill(Buffer,37,754,156,769,makecol(255,0,0));
            textprintf_ex(Buffer, font, 60, 759, makecol(255, 255, 255), -1, "   Mort");
        }

        if(joueur[(ordreJoueur + 1)%2].numPerso == 1)
        {
            draw_sprite(Buffer, Shelly, 166, 730);
        }
        else if(joueur[(ordreJoueur + 1)%2].numPerso == 2)
        {
            draw_sprite(Buffer, Bo, 166, 730);
        }
        else if(joueur[(ordreJoueur + 1)%2].numPerso == 3)
        {
            draw_sprite(Buffer, Dynamike, 166, 730);
        }
        else if(joueur[(ordreJoueur + 1)%2].numPerso == 4)
        {
            draw_sprite(Buffer, Rico, 166, 730);
        }
    }
    if(nbrJoueurs == 3)
    {
        draw_sprite(Buffer, CacheInterface, 15, 810);
        if(joueur[(ordreJoueur + 1)%3].PV > 0)
        {
            rectfill(Buffer,37,754,((float)(joueur[(ordreJoueur + 1)%3].PV)/(float)(joueur[(ordreJoueur + 1)%3].perso.vie))*119 + 37,769,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 759, makecol(255, 255, 255), -1, "%d / %d", joueur[(ordreJoueur + 1)%3].PV, joueur[(ordreJoueur + 1)%3].perso.vie);
        }
        else
        {
            rectfill(Buffer,37,754,156,769,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 759, makecol(255, 255, 255), -1, "%   Mort");
        }

        if(joueur[(ordreJoueur + 1)%3].numPerso == 1)
        {
            draw_sprite(Buffer, Shelly, 166, 720);
        }
        else if(joueur[(ordreJoueur + 1)%3].numPerso == 2)
        {
            draw_sprite(Buffer, Bo, 166, 720);
        }
        else if(joueur[(ordreJoueur + 1)%3].numPerso == 3)
        {
            draw_sprite(Buffer, Dynamike, 166, 720);
        }
        else if(joueur[(ordreJoueur + 1)%3].numPerso == 4)
        {
            draw_sprite(Buffer, Rico, 166, 720);
        }
        if(joueur[(ordreJoueur + 2)%3].PV > 0)
        {
            rectfill(Buffer,37,786,((float)(joueur[(ordreJoueur + 2)%3].PV)/(float)(joueur[(ordreJoueur + 2)%3].perso.vie))*119 + 37,801,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 792, makecol(255, 255, 255), -1, "%d / %d", joueur[(ordreJoueur + 2)%3].PV, joueur[(ordreJoueur + 2)%3].perso.vie);
        }
        else
        {
            rectfill(Buffer,37,786,156,801,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 792, makecol(255, 255, 255), -1, "   Mort");
        }

        if(joueur[(ordreJoueur + 2)%3].numPerso == 1)
        {
            draw_sprite(Buffer, Shelly, 166, 760);
        }
        else if(joueur[(ordreJoueur + 2)%3].numPerso == 2)
        {
            draw_sprite(Buffer, Bo, 166, 760);
        }
        else if(joueur[(ordreJoueur + 2)%3].numPerso == 3)
        {
            draw_sprite(Buffer, Dynamike, 166, 760);
        }
        else if(joueur[(ordreJoueur + 2)%3].numPerso == 4)
        {
            draw_sprite(Buffer, Rico, 166, 760);
        }
    }
    if(nbrJoueurs == 4)
    {
        if(joueur[(ordreJoueur + 1)%4].PV > 0)
        {
            rectfill(Buffer,37,754,((float)(joueur[(ordreJoueur + 1)%4].PV)/(float)(joueur[(ordreJoueur + 1)%4].perso.vie))*119 + 37,769,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 759, makecol(255, 255, 255), -1, "%d / %d", joueur[(ordreJoueur + 1)%4].PV, joueur[(ordreJoueur + 1)%4].perso.vie);
        }
        else
        {
            rectfill(Buffer,37,754,156,769,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 759, makecol(255, 255, 255), -1, "   Mort");
        }

        if(joueur[(ordreJoueur + 1)%4].numPerso == 1)
        {
            draw_sprite(Buffer, Shelly, 166, 720);
        }
        else if(joueur[(ordreJoueur + 1)%4].numPerso == 2)
        {
            draw_sprite(Buffer, Bo, 166, 720);
        }
        else if(joueur[(ordreJoueur + 1)%4].numPerso == 3)
        {
            draw_sprite(Buffer, Dynamike, 166, 720);
        }
        else if(joueur[(ordreJoueur + 1)%4].numPerso == 4)
        {
            draw_sprite(Buffer, Rico, 166, 720);
        }

        if(joueur[(ordreJoueur + 2)%4].PV > 0)
        {
            rectfill(Buffer,37,786,((float)(joueur[(ordreJoueur + 2)%4].PV)/(float)(joueur[(ordreJoueur + 2)%4].perso.vie))*119 + 37,801,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 792, makecol(255, 255, 255), -1, "%d / %d", joueur[(ordreJoueur + 2)%4].PV, joueur[(ordreJoueur + 2)%4].perso.vie);
        }
        else
        {
            rectfill(Buffer,37,786,156,801,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 792, makecol(255, 255, 255), -1, "   Mort");
        }

        if(joueur[(ordreJoueur + 2)%4].numPerso == 1)
        {
            draw_sprite(Buffer, Shelly, 166, 760);
        }
        else if(joueur[(ordreJoueur + 2)%4].numPerso == 2)
        {
            draw_sprite(Buffer, Bo, 166, 760);
        }
        else if(joueur[(ordreJoueur + 2)%4].numPerso == 3)
        {
            draw_sprite(Buffer, Dynamike, 166, 760);
        }
        else if(joueur[(ordreJoueur + 2)%4].numPerso == 4)
        {
            draw_sprite(Buffer, Rico, 166, 760);
        }

        if(joueur[(ordreJoueur + 3)%4].PV > 0)
        {
            rectfill(Buffer,37,818,((float)(joueur[(ordreJoueur + 3)%4].PV)/(float)(joueur[(ordreJoueur + 3)%4].perso.vie))*119 + 37,833,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 824, makecol(255, 255, 255), -1, "%d / %d", joueur[(ordreJoueur + 3)%4].PV, joueur[(ordreJoueur + 3)%4].perso.vie);
        }
        else
        {
            rectfill(Buffer,37,818,156,833,makecol(0,255,0));
            textprintf_ex(Buffer, font, 60, 824, makecol(255, 255, 255), -1, "   Mort");
        }

        if(joueur[(ordreJoueur + 3)%4].numPerso == 1)
        {
            draw_sprite(Buffer, Shelly, 166, 800);
        }
        else if(joueur[(ordreJoueur + 3)%4].numPerso == 2)
        {
            draw_sprite(Buffer, Bo, 166, 800);
        }
        else if(joueur[(ordreJoueur + 3)%4].numPerso == 3)
        {
            draw_sprite(Buffer, Dynamike, 166, 800);
        }
        else if(joueur[(ordreJoueur + 3)%4].numPerso == 4)
        {
            draw_sprite(Buffer, Rico, 166, 800);
        }
    }
}





void jeu(int nbrJoueurs, t_j joueur[4], t_p personnages[4], BITMAP *Buffer)
{
    t_c grille[225];
    clear_bitmap(Buffer);
    coCases(grille);

    BITMAP *PlateauFond;
    PlateauFond = load_bitmap("map_BR.bmp", NULL);
    if(PlateauFond==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *PlateauObstacle;
    PlateauObstacle = load_bitmap("obs_BR.bmp", NULL);
    if(PlateauObstacle==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *PlateauObstacle2;
    PlateauObstacle2 = load_bitmap("obs2_BR.bmp", NULL);
    if(PlateauObstacle2==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *InterfaceJoueur;
    InterfaceJoueur = load_bitmap("InterfaceJoueur.bmp", NULL);
    if(InterfaceJoueur==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *CacheInterface;
    CacheInterface = load_bitmap("CacheInterface.bmp", NULL);
    if(CacheInterface==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    plateau(grille, Buffer, PlateauFond, PlateauObstacle);


    grille[joueur[0].position].vide = 1;
    grille[joueur[1].position].vide = 1;

    if(nbrJoueurs >= 3)
    {
        grille[joueur[2].position].vide = 1;
    }
    if(nbrJoueurs == 4)
    {
        grille[joueur[3].position].vide = 1;
    }

    joueur[0].positionX = grille[joueur[0].position].caseX;
    joueur[0].positionY = grille[joueur[0].position].caseY;
    joueur[1].positionX = grille[joueur[1].position].caseX;
    joueur[1].positionY = grille[joueur[1].position].caseY;
    joueur[2].positionX = grille[joueur[2].position].caseX;
    joueur[2].positionY = grille[joueur[2].position].caseY;
    joueur[3].positionX = grille[joueur[3].position].caseX;
    joueur[3].positionY = grille[joueur[3].position].caseY;




    BITMAP *Shelly;
    Shelly = load_bitmap("BSShelly.bmp", NULL);
    if(Shelly==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *Bo;
    Bo = load_bitmap("BSBo.bmp", NULL);
    if(Bo==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *Dynamike;
    Dynamike = load_bitmap("BSDynamike.bmp", NULL);
    if(Dynamike==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *Rico;
    Rico = load_bitmap("BSRico.bmp", NULL);
    if(Rico==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }



    BITMAP *ShellyGrande;
    ShellyGrande = load_bitmap("ShellyGrande.bmp", NULL);
    if(ShellyGrande==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *BoGrand;
    BoGrand = load_bitmap("BoGrand.bmp", NULL);
    if(BoGrand==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *DynamikeGrand;
    DynamikeGrand = load_bitmap("DynamikeGrand.bmp", NULL);
    if(DynamikeGrand==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    BITMAP *RicoGrand;
    RicoGrand = load_bitmap("RicoGrand.bmp", NULL);
    if(RicoGrand==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }




    int ordreJoueur = 0;
    int choix = 0;
    int nouvelleCase = -10;
    int attaque = 0;
    int nbrJoueurEnVie = nbrJoueurs;

    avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


    while(nbrJoueurEnVie > 1)
    {
        if(joueur[ordreJoueur].PV > 0)
        {
            joueur[ordreJoueur].positionX = grille[joueur[ordreJoueur].position].caseX;
            joueur[ordreJoueur].positionY = grille[joueur[ordreJoueur].position].caseY;
            rectfill(Buffer,0,0,1524,855,makecol(0,0,0));
            affichageInterface(joueur, nbrJoueurs, ordreJoueur, Buffer, InterfaceJoueur, CacheInterface, Shelly, Bo, Dynamike, Rico, ShellyGrande, BoGrand, DynamikeGrand, RicoGrand);
            plateau(grille, Buffer, PlateauFond, PlateauObstacle);
            affichageCaseDeplacement(joueur[ordreJoueur], grille, Buffer);
            draw_sprite(Buffer, PlateauObstacle, 0, 0);
            avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
            blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            /*
            while(!key[KEY_ESC])
            {
                rectfill(Buffer,350,0,600,20,makecol(0,0,0));
                textprintf_ex(Buffer, font, 280, 10, makecol(255, 255, 0), -1, "Hauteur : %d     Largeur : %d", mouse_y, mouse_x);
                blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
            }*/

            while(nouvelleCase == -10)
            {
                if(mouse_b & 1 && getpixel(screen, mouse_x, mouse_y) == makecol(0,0,255))
                {
                    while(nouvelleCase == -10)
                    {
                        nouvelleCase = trouverCase(grille);
                    }

                    deplacementPerso(joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauFond, PlateauObstacle, PlateauObstacle2, nouvelleCase, nbrJoueurs, ordreJoueur);
                }
            }
            nouvelleCase = -10;
            while(attaque == 0)         ///Faire truc pour attaquer tant qu'on a des PA ou qu'on passe (afficher l'interface entre chaque attaque)
            {
                attaques(grille, Buffer, joueur, ordreJoueur, nbrJoueurs, &attaque, PlateauObstacle2);
                affichageInterface(joueur, nbrJoueurs, ordreJoueur, Buffer, InterfaceJoueur, CacheInterface, Shelly, Bo, Dynamike, Rico, ShellyGrande, BoGrand, DynamikeGrand, RicoGrand);
                plateau(grille, Buffer, PlateauFond, PlateauObstacle);
                draw_sprite(Buffer, PlateauObstacle, 0, 0);
                avantAffichagePerso(nbrJoueurs, joueur, grille, Buffer, Shelly, Bo, Dynamike, Rico, PlateauObstacle2);
            }
            attaque = 0;
            joueur[ordreJoueur].PA += 2;
        }

        if(ordreJoueur == nbrJoueurs - 1)
        {
            ordreJoueur = 0;
        }
        else if(ordreJoueur < nbrJoueurs - 1)
        {
            ordreJoueur = ordreJoueur + 1;
        }
        nbrJoueurEnVie = 0;
        for(int i=0;i<nbrJoueurs;i++)
        {
            if(joueur[i].PV > 0)
            {
                nbrJoueurEnVie += 1;
            }
        }
        rest(50);
    }
    rest(1000);

    BITMAP *Victoire;
    Victoire = load_bitmap("Victoire.bmp", NULL);
    if(Victoire==NULL)
    {
        allegro_message("Pb de image");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    blit(Victoire, Buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    for(int i=0;i<nbrJoueurs;i++)
    {
        if(joueur[i].PV > 0)
        {
            if(joueur[i].perso.numPerso == 1)
            {
                draw_sprite(Buffer, ShellyGrande, 585, 300);
            }
            else if(joueur[i].perso.numPerso == 2)
            {
                draw_sprite(Buffer, BoGrand, 585, 300);
            }
            else if(joueur[i].perso.numPerso == 3)
            {
                draw_sprite(Buffer, DynamikeGrand, 585, 300);
            }
            else if(joueur[i].perso.numPerso == 4)
            {
                draw_sprite(Buffer, RicoGrand, 585, 300);
            }
        }
    }


    blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);


    rest(5000);


    destroy_bitmap(PlateauFond);
    destroy_bitmap(PlateauObstacle);
    destroy_bitmap(PlateauObstacle2);
    destroy_bitmap(Shelly);
    destroy_bitmap(Bo);
    destroy_bitmap(Dynamike);
    destroy_bitmap(Rico);
    destroy_bitmap(ShellyGrande);
    destroy_bitmap(BoGrand);
    destroy_bitmap(DynamikeGrand);
    destroy_bitmap(RicoGrand);
    destroy_bitmap(Victoire);


    menuFin(nbrJoueurs, joueur, personnages, Buffer);///Menu de fin
}
