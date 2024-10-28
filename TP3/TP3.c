#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100


int* initialisation_tab(int taille, int value){
    int* tab = malloc(sizeof(int*)*taille);
    for(int i=0;i<taille;i++){
        tab[i]=value;
    }
    return tab;
}

int** init_matrix(int taille, int value){
    int** m =malloc(sizeof(int*)*taille*taille);
    for (int i=0;i<taille;i++){
        for(int j=0;j<taille;j++){
            m[i][j]=value;
        }
    }
    return m;
}

void affiche_tab(int *tab, int taille){
     for(int i=0; i<taille; i++){
        printf("%d\n", tab[i]);
 }
}


void affiche_matrix(int tab[100][100], int taille){
     for(int i=0; i<=taille; i++){
        for(int j=0; j<=taille; j++){
            if (tab[i][j]!=0){
                printf("%d", tab[i][j]);
            } 
        }
        printf("\n");
    }
}



// int max_tab(int* tab, int taille){
//     int max = tab[0];
//     for (int i = 1; i<taille; i++)
//         if(tab[i]>=max){
//             max = tab[i];
//         }
//     return max;
// }

// int min_tab(int* tab, int taille){
//     int min = tab[0];
//     for (int i = 1; i<taille; i++)
//         if(tab[i]<=min){
//             min = tab[i];
//         }
//     return min;
// }

// double moy_tab(int* tab, int taille){
//     int somme = 0;
//     for(int i=0;i<taille;i++){
//         somme = somme + tab[i];
//     }
//     return (somme/taille);

// }

int fib_rec(int n){
    if (n>=2){
        return fib_rec(n-2)+fib_rec(n-1);
        }
    else if (n==1){
        return 1;
    }
    else {
        return 0;
    }
}


int fib_tab(int n){
    int tab[N]={ 0, 1 };
    if (n>=N){
        exit(42);
    }
    for(int i=2; i<=n; i++){
        tab[i]=tab[i-2]+tab[i-1];
    }
    return tab[n];
}

void pascal(int n, int tab[N][N]){
    if (n>=N){
        exit(42);
    }
    for(int i=0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            if (i==j){
                tab[i][j]=1;
            }
            else if (j==0){
                tab[i][j]=1;
            }
            else if ((j>0) && j<i){
            tab[i][j]=tab[i-1][j-1]+tab[i-1][j];}
        }
    }
}





int main(){
    // int t[100][100];
    // pascal(10, t);
    // affiche_matrix(t, 10);
    // char p[10];
    // char na[20];
    // int n;
    // scanf("%s", p);
    // scanf("%s", na);
    // scanf("%d", &n);
    // for(int i=0; i<n; i++){
    //     printf("Merci %s\n ", p);
    // }
    // int cpt = 0;
    // int j = 0;
    // while(p[j]!='\0'){
    //     cpt++;
    //     j++;
    // }
    // printf("%ld\n", strlen( p ));
    // printf("%d\n", cpt);
    // char np[50];
    // strcpy (np, p);
    // strcat (np, " ");
    // strcat (np, na);
    // printf( "Full name is: %s\n", np );
    return 0;
}