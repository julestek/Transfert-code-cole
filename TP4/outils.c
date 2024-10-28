#include <stdio.h>
#include <stdlib.h>



int somme(int a, int b) {
   return a+b;
}



int main() {
   int x = 3, y = 5;   
   printf("%d", somme(x, y));
   return EXIT_SUCCESS;
}

