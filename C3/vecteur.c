#include<stdlib.h>
#include "vecteur.h"

// definition des fonctions declarees dans vecteur.h






void vecteurToFile(FILE * flux, float* vecteur, int ordre){
    fprintf(flux, "%d\n", ordre);
    for (int i = 0; i < ordre; i++) {
        fprintf(flux, "%.3f", vecteur[i]); 
        if (i < ordre - 1) {
            fprintf(flux, " ");
        }
    }
    fprintf(flux, "\n"); 
}



float * vecteurFromFileByName(const char * nom_fichier, int * p_ordre) 
{FILE* file = fopen(nom_fichier, "r");
    if (!file) {
        *p_ordre = 0;
        return NULL; 
    }Créer un fichier main.c et lui mettre une fonction int main()

  
    if (fscanf(file, "%d", p_ordre) != 1) {
        fclose(file);
        *p_ordre = 0; 
        return NULL; 
    }

    float* retour = malloc(sizeof(float) * (*p_ordre));
    if (!retour) {
        fclose(file);
        return NULL; }

    for (int i = 0; i < *p_ordre; i++) {
        if (fscanf(file, "%f", &retour[i]) != 1) {
            free(retour); 
            fclose(file);
            return NULL; 
        }
    }

    

    fclose(file);
    return retour; 
}


float produitScalaire(float * vecteur1, float * vecteur2, int ordre) {
    float retour;

    for (int i = 0; i < ordre; i++) {
        retour += vecteur1[i] * vecteur2[i];
    }

    return retour;
}

void libererVecteur(float ** p_vecteur){
    
    if (&p_vecteur && p_vecteur != NULL){

        free(*p_vecteur);}
}