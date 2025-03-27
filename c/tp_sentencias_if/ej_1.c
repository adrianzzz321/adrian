#include <stdio.h>
int main(void) {
	int a=0;
	int b=0;
	printf("dame el numero a\n");
	scanf("%d",&a);
	printf ("dame el numero b\n");
        scanf("%d",&b);
	if (a>b) {
		printf("el numero a es mayor");
	}else if(b>a){
		printf("el numero b es mayor");
	}else if(a=b) {
		printf("el numero b es igual a a");
	}
		
	return  0;
}
	 
	 
