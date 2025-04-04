#include <stdio.h>
#include "funciones.h"
int suma( int numero1,int numero2){
    int respuesta1= numero1+numero2;
    return respuesta1;
}
int resta( int numero3, int numero4){
    int respuesta2= numero3-numero4;
    return respuesta2;
}
int multiplicacion( int numero5, int numero6){
    int respuesta3 = numero5*numero6;
    return respuesta3;
}
int division( int numero7, int numero8){
    int respuesta4 = numero7/numero8;
    return respuesta4;
}int obtener_datos(){
    int a=0;
    int b=0;
    printf ("ingre el primero numero\n");
    scanf("%d",&a);
    printf ("ingre el segundo numero\n");
    scanf("%d",&b);
    return a,b;

}
