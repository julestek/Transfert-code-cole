#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hall_of_fame.h"

// un petit commentaire ?
void afficherDonnee(FILE * file, donnee_t d) {
   fprintf(file, "%s : %s avec %d\n", d.nom, d.alias, d.score);
   
}

char* fgets_2(char* chaine, FILE* file, int n){
   fgets(chaine, n, file);
   size_t longueur = strlen(chaine);
        
      if (longueur > 0 && chaine[longueur - 1] == '\n') {
         chaine[longueur - 1] = '\0';
      }
   return chaine;
}

void saisirDonnee(FILE *file, donnee_t *d) {
   fgets_2(d->nom, file, sizeof(d->nom));

   fgets_2(d->alias, file, sizeof(d->alias));

   fscanf(file, "%d", &d->score);
}



donnee_t* creerListe(){
   donnee_t* liste = (donnee_t*)malloc(sizeof(donnee_t));

   liste->score = 0;
   strcpy(liste->alias, "PKMN");
   strcpy(liste->nom, "POKEMON");
   liste->suivant = NULL;
   return liste;
}

void afficherListe(donnee_t* tetereelle){
   if(tetereelle!=NULL){
   printf("Score:%d, Nom:%s, Alias:%s", tetereelle->score, tetereelle->nom, tetereelle->alias);
   afficherListe(tetereelle->suivant);
   }
}

void insererListe(donnee_t** tetereelle, int sc, char alias[], char nom[]){
   donnee_t* new_liste = (donnee_t*)malloc(sizeof(donnee_t));
   if (!new_liste){
      return;
   }
   new_liste -> score = sc;
   strcpy(new_liste->alias, alias);
   strcpy(new_liste->nom, nom);
   new_liste->suivant=*tetereelle;
   *tetereelle=new_liste;

}

void libererListe(donnee_t* liste){
   while(liste!=NULL){
   donnee_t* s = liste;
   liste=liste->suivant;
   free(s);
   }
}

donnee_t * tr; // tete reelle


int main(){
   donnee_t* liste = creerListe();
   afficherListe(liste);
   libererListe(liste);
   return 0;
}