#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	float f ,c ;
	printf("write temperatur F : ");
	scanf("%f", &f);
	c = (f-32)/1.8;
	printf(" la temperature en C : %f\n",c);
	if (c>=40){
		printf(" la sensation ressentie : tres chaud");
	}else if(c>20){
		printf(" la sensation ressentie : chaud");
	}else if(c>51){
		printf(" la sensation ressentie : froid");
	}else{
		printf(" la sensation ressentie : tres froid");
	}
}
