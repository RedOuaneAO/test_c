#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a , b ,opera;
	printf("entrez le N1 :");
	scanf("%d" ,&a);
	printf("entrez le N2 :");
	scanf("%d" ,&b);
	printf("entrer operator :\n1:+\n2-\n3:*\n4:/\n5:%%");
	if(opera == 1){
		printf("resulta :%d",a+b);
	}else if(opera == 2){
		printf("resulta :%d",a-b);
	}else if(opera == 3){
		printf("resulta :%d",a*b);
	}else if(opera == 4){
		printf("resulta :%d",a/b);
	}else if(opera == 5){
		printf("resulta :%d",a%b);
	}else{
		printf("entrer operator correct");
	}
	return 0;
}
