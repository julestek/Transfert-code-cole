#include <stdio.h>


void echangeParValeur(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


void echangeParAdresse(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}




int main()
{
   double d, *ptrd = &d;
   ptrd+=2;
   int i  , *ptri  = &i;
   char c1 = '1', *ptrc1 = &c1;
   char c2 = '2', *ptrc2 = &c2;

//    printf("ptri = %u ptrc1 = %u \n",ptri, ptrc1);
//    printf("ptri = %x ptrc1 = %x \n",ptri, ptrc1);
   // seule la version suivante ne genere pas d'avertissement
   printf("ptrc1 = %p ptrc2 = %p \n",ptrc1, ptrc2);
   printf("*ptrc1 = %c *ptrc2 = %c \n",*ptrc1, *ptrc2);
   char temp = *ptrc1;
   *ptrc1 = *ptrc2;
   *ptrc2 = temp; 
   printf("ptrc1 = %p ptrc2 = %p \n",ptrc1, ptrc2);
   printf("*ptrc1 = %c *ptrc2 = %c \n",*ptrc1, *ptrc2);
//    printf("*ptri = %d et *ptrc1=%c\n", *ptri, *ptrc1);
//    printf("ptrd = %p \n",ptrd);
//    printf("*ptrd = %d\n", *ptrd);
   int a = 19;
   int b = 4;
   printf("valeur a = %d, valeur b = %d\n", a, b);
   echangeParAdresse(&a,&b);
   printf("valeur a = %d, valeur b = %d\n", a, b);




   ptri++;
   ptrc1++;
   
//    printf("ptri = %u ptrc1 = %d \n",ptri, ptrc1);
   // cela permet de voir la taille d'un int et d'un char en memoire
   // sizeof(int)  sizeof(char)

   return 0 ;
}
