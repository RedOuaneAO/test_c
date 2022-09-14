#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1,y1,x2,y2,dist;
	printf("saisir la valeur de X1 \n");
	scanf("%d",&x1);
	printf("saisir la valeur de X2 \n");
	scanf("%d",&y1);
	printf("saisir la valeur de Y1 \n");
	scanf("%d",&x2);
	printf("saisir la valeur de Y2 \n");
	scanf("%d",&y2);
	p=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf(" la distance entre deux points donnés : %d ",dist);

	return 0;
}
	
