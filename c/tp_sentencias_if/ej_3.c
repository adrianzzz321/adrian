#include <stdio.h>
int main(void){
    int a=0;
    printf("dame un año\n");
    scanf("%d",&a);
    if ( a%4==0 && a%100!=0 || a%400==0 ){
        printf("el año es bisiesto\n");
    }else{
        printf("el año no es bisiesto\n");
    }
    return 0;
}
