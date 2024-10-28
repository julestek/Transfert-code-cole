#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAILLE 32


void majuscules(char txt[]){
    int i;
    for (i=0; txt[i]!='\0'; i++){
        if ((txt[i]<='z') && (txt[i]>='a')){
            txt[i]+=32;}
    }
}

void inverser(char txt[]){
    int i;
    for (i=0; txt[i]!='\0'; i++){
        txt[i]=txt[strlen(txt)-i-1];
    }
}


void convertir(int nb, char r[]){
    int i=0;
    while (nb!=0){
        if(nb%2==0){
            r[i]='0';
        }
        else{
            r[i]='1';
        }
        nb/=2;
        i++;
    }
}











int main(){
    int nb;
    char s[100];
    scanf("%d", &nb);
    if (nb<0){
        return 0;
    }
    else{
        convertir(nb, s);
        inverser(s);
        printf("%s", s);
    }
    return 0;
}