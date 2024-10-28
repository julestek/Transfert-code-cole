/*
* Exemple d'utilisation de ddd
* Compiler le programme avec les options
*  -g -Wall -Wextra
*
* - La compilation ne dit rien
* - A l'execution, il est possible de ne rien voir suivant la configuration
* - Le comportement a probleme est signale par valgrind a l execution
*/

#include<stdio.h>

int tab[5] = { 0 };

int main() 
{
	int j;

	for(j=0; j<=5; ++j)
		printf("%d\n", tab[j]);
	
	return 0;
}
