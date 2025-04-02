#include <stdio.h>
int main(void){
    int a=0;
    int i;
    printf("dime hasta que numero imprimire\n");
    scanf("%d",&a);
    printf("la secuencia de numeros es\n");
    for ( i = 1; i <= a; i++)
 {
    printf(" %d",i);
 }
    printf("\n");
    return 0;

}