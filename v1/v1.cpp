#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t programme qui demande un nombre et affiche si ce nombre est pair ou impair\n\n");
	
	//declaration de variable
	
	int nombre;
	
	printf("donner moi un entier: "); scanf("%d",&nombre);
	if(nombre%2==0){
		printf("Votre Entier est pair");
	}else{
		printf("Votre Entier est impair");
	}
	
}
