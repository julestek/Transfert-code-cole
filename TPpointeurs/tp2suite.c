#include<stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int a, b, c;
    int *pa,*pb,*pc;
    pa = &a;
    pb = &b;
    pc = &c;
    scanf("%d%d", pa, pb);
    *pc = *pa + *pb;
    printf("%d\n", *pc);

    char u, *pu = &u;
    char s, *ps = &s;
    s = '2';
    u = '8';

    printf("%c %c\n", *ps, *pu);
    char temp = *ps;
    *ps = *pu;
    *pu = temp;
    printf("%c %c\n", *ps, *pu);


    return 0;
}