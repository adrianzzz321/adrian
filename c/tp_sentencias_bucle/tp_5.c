#include <stdio.h>
int main(void)
{   
    int i,contador=0;
    char palabra [50]; 
    printf("dame una palabra\n");
    scanf("%s",palabra);
    while (palabra[contador]!='\0')/*utilizo el \0 por que es el valor del caracter nulo de c donde esta en todos los strings, digo que lo siga haciendo hasta que encuentre el valor igual*/
    {
        contador++;
    }
    printf("la palabra al reves es: ");
    for ( i = contador; i >=0 ; i--)
    {
        printf("%c",palabra[i]);/*vamos utilizando las partes de la cadena de texto para que la posicion de escritura de la palabra vaya de la ultima letra para la primera*/
    }
    printf("\n");
    printf("la palabra %s tiene %d  letras\n",palabra,contador);
    return 0;
}
