#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


#define MAX 25

void cacher(char mot_a_trouver[], char mot_avec_etoiles[]){
    int i;
    for(i=0;mot_a_trouver[i]!='\0';i++){
        mot_avec_etoiles[i]='*';
    }
    printf("%s", mot_avec_etoiles);
}


bool is_in(char a[], char mot_a_trouver[]){
    for(int i = 0; mot_a_trouver[i]!='\0'; i++){
        if (a[0]==mot_a_trouver[i]){
            return true;
        }
    
    }
    return false;
}




int main(){
    char mot_a_trouver[25]="bateau";
    char mot_avec_etoiles[25];
    int vies = 10;
    char cartoon [10][70] = {
  "\n\n\n\n\n\n_______\n",
  "\n   |\n   |\n   |\n   |\n   |\n___|___\n",
  "\n   /-----\n   |\n   |\n   |\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |\n   |\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |    |\n   |   \n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /|\n___|___\n"
};
    cacher(mot_a_trouver, mot_avec_etoiles);
    
    do{
        for(int j = 0;mot_avec_etoiles[j]!='\0';j++){
            if (mot_avec_etoiles[j]=='*'){
                char essai_1[0];
                printf("Jeu du pendu, essayez de trouver le mot, dites une lettre :\n");
                scanf("%c", essai_1);
                for(int i =0;mot_a_trouver[i]!='\0';i++){
                    if (is_in(essai_1, mot_a_trouver)){
                        printf("Bien joué la lettre est bien dans le mot\n");
                        if (essai_1[0]==mot_a_trouver[i]){
                            mot_avec_etoiles[i]=essai_1[0];
                        }

                    }
                    else {
                        vies = vies - 1;
                        printf("Aïe, cette lettre n'est pas dans le mot, vous perdez une vie, il ne vous en reste plus que %d\n", vies);
                        printf("%s", cartoon[10-vies]);
                    }
                }
                printf("Voici le mot actualisé :%s\n", mot_avec_etoiles);
            }
            
            
        }
        } while (vies > 0);


    return 0;
}