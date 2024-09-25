#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\tProgramme traiter la somme de deux valeurs entières données\n\n");
	
	//declaration des variables
	int a,b;
	float triple;
	
	//saisir par utilisateur
	
	printf("donner moi un Entier: "); scanf("%d",&a);
	printf("donner moi la 2 eme Entier: "); scanf("%d",&b);
	
	//traitement
	if(a==b){
		triple=(a+b)*3;
		printf("Votre Entier Entrer Sont identique \n \t Le triple de leur somme est  %f ",triple);
	}else{
		printf("Votre Entier Entrer ne sont pas Identiaue \n \t Leur somme est %d",a+b);
	}
}
