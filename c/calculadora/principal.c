#include <stdio.h>
#include "funciones.c"
#define MENU "1. para suma\n2. para resta\n3. para multiplicacion \n4. para division\n"
#define MSJ1 "ingre el primero numero"
#define MSJ2 "ingrese el segundo numero"


int main(void)
{
    saludo();
    int opcion=0;
    int a,b;
    for (;;){
        printf(MENU);
        scanf("%d",&opcion);
        if (opcion == 1)
        {
            a,b=obtener_datos();
            int resultado=suma(a,b);
            printf("la suma es ; %d\n",resultado);
        }else if (opcion == 2)
        {
            a,b=obtener_datos();
            int resultado=resta(a,b);
            printf("la resta es ; %d\n",resultado);
        }else if (opcion == 3)
        {
            a,b=obtener_datos();
            int resultado=multiplicacion(a,b);
            printf("la multiplicacion es ; %d\n",resultado);
        }else if (opcion == 4)
        {
            a,b=obtener_datos();
            int resultado=division(a,b);
            printf("la division es : %d\n",resultado);
        } 
    }
    return 0;
}
