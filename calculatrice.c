#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre1,nombre2;
	char choix; 
	
	printf ("Donne ton premier nombre : ");
	scanf("%d",&nombre1);
	getc(stdin);
	printf("Donne l'operateur : ");
	scanf("%c",&choix);
	printf ("Donne un deuxieme nombre : ");
	scanf("%d",&nombre2);
	
	switch (choix)
	{
		case '+' :
			printf("%d + %d = %d\n", nombre1,nombre2,nombre1 + nombre2);
		break;
		case '-' :
			printf("%d - %d = %d\n", nombre1,nombre2,nombre1 - nombre2);
		break;
		case '*' :
			printf("%d * %d = %d\n", nombre1,nombre2,nombre1 * nombre2);
		break;
		case '/' :
			if (nombre2 != 0) 
				printf("%d / %d = %d\n", nombre1,nombre2,(int) nombre1 /nombre2);
			else 
				printf("Impossible de diviser par 0\n");
		break;
		default : printf("Operateur que je connais pas \n");
	}
	
	return 0;
}
