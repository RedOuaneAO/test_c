#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	float f , c ;
	printf("la temperature en F : ");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("la temperature en C: %f", c);
}
