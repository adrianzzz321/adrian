#include <stdio.h>

int main(void){
    int a=0;
    int i;
    int b;
    printf("dame un numero\n");
    scanf("%d",&a);
    printf("la tabla de multiplicar del 1 al 10 de esta tabla es:\n");
    for ( i = 1; i <=10; i++)
    {
        b=a*i;
        printf("%d x %d = %d\n",i,a,b);
    }
    printf("\n");
    return 0;
}
