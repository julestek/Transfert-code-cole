#include <stdlib.h>
#include <stdio.h>



// float hexa_dec(char hex[100]){
//     int len;
//     int i;
//     for(i=0;hex[i]!='\0';i++){
//         len+=1;
//     }
//     int j;
//     for(j = 0;j<len;j++){
//         if (hex[j]=='F'){

//         }
//         else if (hex[j]=='E'){

//         }
//         else if (hex[j]=='D'){

//         }
//         else if (hex[j]=='C'){

//         }
//         else if (hex[j]=='B'){

//         }
//         else if (hex[j]=='A'){

//         }
//         else{

//         }
//     }
// }


void cesar(char c[], int decalage){
    int i;
    for(i=0;c[i]!='\0';i++){
        c[i]+=decalage;
    }
}




int main(){
    char mot[50]="BCZ";
    cesar(mot, 3);
    printf("%s", mot);
    return 0;
}