#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char nom[30] , prenom[30] , sexe[10];
	int age;
    long nemo_tele;
	
	printf("write your second name: \n");
	scanf("%s",&nom);
	printf("write your first name : \n");
	scanf("%s",&prenom);
	printf("write your age : \n");
	scanf("%d" , &age);
    printf("write your nomber phone : \n");
	scanf("%ld" , &nemo_tele);
	printf("write your gender : \n");
	scanf("%s" , &sexe);
	printf(" your info : \n");
	printf("Name : %s \n", nom);
    printf("Name : %s \n", prenom);
    printf("Name : %d \n", nemo_tele);
   	printf("Name : %s \n", sexe);
	
	
}

	

