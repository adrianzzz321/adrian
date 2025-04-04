#include <stdio.h>
#include "funciones.c"
#define MENU "1. para suma\n2. para resta\n3. para multiplicacion \n4. para division\n"
#define MSJ1 "ingre el primero numero"
#define MSJ2 "ingrese el segundo numero"


int main(void){
    saludo();
    int opcion=0;
    int a,b;
    char signo;
    for (;;){
        printf(MENU);
        scanf("%d",&opcion);
        if (opcion == 1)
        {
          a=obtener_datosa(a);
          b=obtener_datosb(b);
            int resultado=suma(a,b);
            signo='+';
            printf(menucalculadora(a,signo,b,resultado));
        }else if (opcion == 2)
        {
            a=obtener_datosa(a);
            b=obtener_datosb(b);
            int resultado=resta(a,b);
            signo='-';
            printf(menucalculadora(a,signo,b,resultado));
        }else if (opcion == 3)
        {
            a=obtener_datosa(a);
            b=obtener_datosb(b);
            int resultado=multiplicacion(a,b);
            signo='x';
            printf(menucalculadora(a,signo,b,resultado));
        }else if (opcion == 4)
        {
            a=obtener_datosa(a);
            b=obtener_datosb(b);
            int resultado=division(a,b);
            signo='/';
            printf(menucalculadora(a,signo,b,resultado));
        } 
    }
    return 0;
}