#include <stdio.h>
int main(void)
{
    int a,b,c=1;
    printf("dime el numero para saber cuantos digitos tiene el numero\n");
    scanf("%d",&a);
    b=a;
    while (b>=10)
    {
        b=b/10;
        c++;
    }
    printf("el numero tiene %d digitos\n",c);
    return 0;
}