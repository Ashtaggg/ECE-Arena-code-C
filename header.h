#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <allegro.h>
#include <string.h>
#include <time.h>



typedef struct personnages
{
    int numPerso;
    int ordreJoueur;
    char nom[9];
    int vie;
    int attaqueMele;
    int attaque1;
    int attaque2;
    int attaque3;
    int attaque4;
}t_p;

typedef struct joueurs
{
    int ordreJoueur;
    int numPerso;
    t_p perso;
    int PA;
    int PM;
    int PV;
    int position;
    int positionX;
    int positionY;
}t_j;


typedef struct cases
{
    int caseX;
    int caseY;
    int vide;
    int colonne;
    int ligne;
}t_c;

void MenuPrincipal();
void creerStruct(int nbrJoueurs, t_j joueur[3], t_p personnages[3]);
void choixPerso(int nbrJoueurs, t_j joueur[3], t_p personages[3]);
void avantAffichagePerso(int nbrJoueurs, t_j joueur[4], t_c grille[225], BITMAP *Buffer, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico, BITMAP *PlateauObstacle2);
int afficherStats(t_p personnages[4], BITMAP *Buffer, BITMAP* tabBitmap[24], BITMAP* ChoixPerso);
void afficherStats2(BITMAP *Buffer, BITMAP* tabBitmap[24], BITMAP* ChoixPerso, int numPerso);
void affichageCaseDeplacement(t_j joueur, t_c grille[225], BITMAP *Buffer);
void affichagePlateau(BITMAP *Buffer);
void afficherTableau(t_c grille[225]);
void affichagePerso(t_j joueur, t_c grille[225], BITMAP *Buffer, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico);
void coCases(t_c grille[225]);
void plateau(t_c grille[225], BITMAP *Buffer, BITMAP *PlateauFond, BITMAP *PlateauObstacle);
void jeu(int nbrJoueurs, t_j joueur[4], t_p personnages[4], BITMAP *Buffer);
void deplacementPerso(t_j joueur[4], t_c grille[225], BITMAP *Buffer, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico, BITMAP *PlateauFond, BITMAP *PlateauObstacle, BITMAP *PlateauObstacle2, int nouvelleCase, int nbrJoueurs, int ordreJoueur);
void affichageInterface(t_j joueur[4], int nbrJoueurs, int ordreJoueur, BITMAP *Buffer, BITMAP *InterfaceJoueur, BITMAP *CacheInterface, BITMAP *Shelly, BITMAP *Bo, BITMAP *Dynamike, BITMAP *Rico, BITMAP *ShellyGrande, BITMAP *BoGrand, BITMAP *DynamikeGrand, BITMAP *RicoGrand);
void menuFin(int nbrJoueurs, t_j joueur[4], t_p personnages[4], BITMAP *Buffer);

void attaques(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int ordreJoueur, int nbrJoueurs, int* attaque, BITMAP* PlateauObstacle2);
int trouverAttaque();
void AffichageAttaque(int nbCases, t_j joueurAttaquant, t_c grille[225], BITMAP *Buffer, int tab[100], BITMAP* PlateauObstacle2);
void DAM(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur);
void DA1(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur);
void DA2(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur);
void DA3(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur);
void DA4(t_c grille[225], BITMAP *Buffer, t_j joueur[4], int* attaqueChoisi, BITMAP* PlateauObstacle2, int ordreJoueur);



#endif // HEADER_H_INCLUDED
