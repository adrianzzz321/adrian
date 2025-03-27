#include <stdio.h>
int main(void){
    int a=0;
    printf("dame un numero\n");
    scanf("%d",&a);
    if ( a%2==0){
        printf("el numero es par\n");
    }else{
        printf("el numero es impar\n");
    }
    return 0;
}
