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
}
int obtener_datosa(int a){
    printf("----------------\n");
    printf("| calculadora  |\n");
    printf("|              |\n");
    printf("|  ");
    scanf("%d",&a);
    printf("|              |\n");
    printf("|              |\n");
    printf("|              |\n");
    printf("----------------\n");
    return a;
}
int obtener_datosb(int b,int a,int signo){
    printf("----------------\n");
    printf("| calculadora  |\n");
    printf("|              |\n");
    printf("|   %d %c ",a,signo);
    scanf("%d",&b);
    printf("|              |\n");
    printf("|              |\n");
    printf("|              |\n");
    printf("----------------\n");
    return b; 
}
int menucalculadora(int a,char signo,int b,int resultado){
    printf("----------------\n");
    printf("| calculadora  |\n");
    printf("|              |\n");
    printf("|  %d %c %d = %d   \n",a,signo,b,resultado);
    printf("|              |\n");
    printf("|              |\n");
    printf("----------------\n");
    return 0;
}