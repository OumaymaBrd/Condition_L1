#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Programme vérifier si le nombre donné est positif, négatif ou nul\n\n");
	
	//declaration d'un entier 
	
	int a ;
	
	//saisir de l'utilisateur 
	
	printf("donner moi un entier : "); scanf("%d",&a);
	
	//Traitement des cas avec l'affichage 
	
	if(a<0) printf("Votre Entier est negatif!!!!");
	 else if (a>0) printf("Votre Entier est Positive");
	else printf("Votre Entier est nul");
	
}
