#include "mon_code.h"
#include <string.h>

// implementation des fonctions a ecrire
// c est bien DANS CE FICHIER qu'il faut le faire

int pgcd(int a, int b) {
	if (a%b == 0){
      return b;
   }
   else{
      return pgcd(b, a%b);
   }
}

void majuscules(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i ++)
    {
        if (s[i]  >= 'a' &&  s[i] <= 'z')
         s[i] -=  'a' - 'A';
    }
}

