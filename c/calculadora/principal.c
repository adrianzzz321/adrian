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
            signo='+';
            a=obtener_datosa(a);
            b=obtener_datosb(b,a,signo);
            int resultado=suma(a,b);
            printf(menucalculadora(a,signo,b,resultado));
        }else if (opcion == 2)
        {
            signo='-';
            a=obtener_datosa(a);
            b=obtener_datosb(b,a,signo);
            int resultado=resta(a,b);
            printf(menucalculadora(a,signo,b,resultado));   
        }else if (opcion == 3)
        {
            signo='x';
            a=obtener_datosa(a);
            b=obtener_datosb(b,a,signo);
            int resultado=multiplicacion(a,b);
            printf(menucalculadora(a,signo,b,resultado));
        }else if (opcion == 4)
        {
            signo='/';
            a=obtener_datosa(a);
            b=obtener_datosb(b,a,signo);
            int resultado=division(a,b);
            printf(menucalculadora(a,signo,b,resultado));
        } 
    }
    return 0;
}