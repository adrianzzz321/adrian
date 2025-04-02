#include <stdio.h>
int main(void){
    int a=0;
    int i;
    int suma=0;
    printf("sumare todos los numeros naturales desde 1 hasta el numero que me digas\n");
    scanf("%d",&a);
    printf("la suma de numeros naturales es:");
    for ( i = 1; i <= a; i++)
 {
    suma=suma+i;
 }
    printf("%d",suma);
    printf("\n");
    return 0;

}