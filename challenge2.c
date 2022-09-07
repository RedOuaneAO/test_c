#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float fh,c;
	printf("WRITE TEMPERATURE C :");
	scanf("%f",&c);
	fh = (c*1.8)+32;
	printf(" TEMPERATURE F : %.2f",fh);
	


}
