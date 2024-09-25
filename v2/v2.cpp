#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t programme qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non\n\n");
	
	//declaration d'un caractere
	char charactere;
	
	//demander a l'utilisateur un caractere
	printf("donner moi un caractere: "); scanf("%c",&charactere);
	//traitement 
	
	switch(charactere){
		case 'a': 
		printf("Votre voyelle Entrer est 'a'");
		break;
		
		case 'e':
			printf("Votre Voyelle Entrer est 'e' ");
			break;
		
		case 'i' :
			printf("Votre Voyelle Enter est 'o'");
			break;
		case 'o' :
			printf("Votre Voyelle Enter est 'u'");
			break;
		
		case 'y':
			printf("Votre Voyelle Entrer est 'y'");
			break;
		default:
			printf("Ce Caractere Enter n'est pas une Voyelle !!! ");
			
	}
	
}
