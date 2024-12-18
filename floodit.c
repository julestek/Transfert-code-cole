#include <stdio.h>
#include <stdlib.h>


#define COULEURS 6
#define TAILLE 12

void initialiser(int t[TAILLE][TAILLE]){
    for(int i=0; i<TAILLE; i++){
        for(int j=0; j<TAILLE; j++){
            t[i][j] = rand() % COULEURS;
        }
    }
}


void afficher(int grille[TAILLE][TAILLE]){
    for(int i=0; i<TAILLE;++i){
        for(int j=0; j<TAILLE; ++j){
            printf(" %d ",grille[i][j]);
        }

        printf("\n");
    }
}


int fin(int grille[TAILLE][TAILLE]){
    for(int i=0; i<TAILLE-1; i++){
        for(int j=0; j<TAILLE-1; j++){
            if (grille[0][0]!=grille[i][j]){
                return 0;
            }
        }
    }
    return 1;
}

void remplir(int g[TAILLE][TAILLE], int c_old, int c_new, int i, int j){
    g[i][j]=c_new;

    if (i>0 && g[i-1][j]==c_old){
        remplir(g, c_old, c_new, i-1, j);}
    if (j>0 && g[i][j-1]==c_old){
        remplir(g, c_old, c_new, i, j-1);}
    if (j<TAILLE-1 && g[i][j+1]==c_old){
        remplir(g, c_old, c_new, i, j+1);}
    if (i<TAILLE-1 && g[i+1][j]==c_old){
        remplir(g, c_old, c_new, i+1, j);}
    }



int main(){
    int t[TAILLE][TAILLE];
    initialiser(t);
    afficher(t);
    int i = 0;
    while(!fin(t) || i>22){

    
    printf("Choisissez un nombre\n");
    int nb;
    scanf("%d", &nb);
    remplir(t, t[0][0], nb, 0, 0);
    afficher(t);
    i++;

    }
    return 0;
}