#include <stdio.h>
int main(void){
    int a=0;
    printf("dame tu edad\n");
    scanf("%d",&a);
    if (a>=13 && a<=17){
        printf("estsas en la adolescencia\n");
    }else if (a<13){
        printf("estas en tu infancia\n");
    }else if (a>=18){
        printf("estas en la adultez\n");
    }
    return 0;
}
