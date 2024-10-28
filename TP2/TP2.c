#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


double calcul(char ope, double a, double b){
    double res;
    switch(ope){
        case '*':
        res = a*b;
        break;
        case '+':
        res = a+b;
        break;
        case '-':
        res = a-b;
        break;
        case'/':
        res = a/b;
        break;
    }
    return res;
}

double somme(int n){
    printf("%s\n", "If you want to do the sum of n² type 1, the sum of n type 2, the sum of 1/n² type 3");
    int wish;
    scanf("%d", &wish);
    double res = 0;
    switch(wish){
        case 1:
        for(int i = 0;i<=n;i++){
            res = res + i*i;
        }
        break;
        case 2:
        for(int i = 0;i<=n;i++){
            res = res + i;
        }
        break;
        case 3:
        for(double i = 1;i<=n;i++){
            res = res + 1/(i*i);
        }

        break;
    }
    return res;
}


// double val = 8.5;




// void modif(double v){
//     v = 100;
//     printf("%f",v);
// }

int factorielle_boucle(int n){
    int i = n;
    int res = 1;
    while (i>0){
        res = res*i;
        i--;

    }
    return res;
}


int fact_rec(int n){
    if (n>0){
    return n*fact_rec(n-1);}
    else return 1;
}






int main(){
    printf("%d\n",fact_rec(5));
    // printf("%f\n", somme(10));
    // printf("%f\n",val);
  //  modif(local);
    //printf("%f",local);
    //printf("%f\n",val);
    return 0;
}