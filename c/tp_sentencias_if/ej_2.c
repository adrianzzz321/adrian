#include <stdio.h>
int main(void){
    int a=0;
    printf("dame un numero\n");
    scanf("%d",&a);
    if (a>0){
        printf("a es positivo\n");
    }else if (a<0){
        printf("a es negativo\n");
    }else if (a=0){
        printf("a es 0\n");
    }
    return 0;
    }   
