#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t  Programme  piloté par menu pour convertir une année donnée \n\n");
	
	//declaration des variables
	
	int anee;
	printf("Donner Moi le Nombre d'annee: "); scanf("%d",&anee);
	
	
   int Mois=anee*12;
   int  Jours=anee*30;
   int Heures=anee*24;
   int  Minutes=anee*60;
   int  Secondes=anee*60;
   
   printf("D'apres Anee Entrer : \n");
   printf("\t\t %d Mois %d jours %d Heures %d Minutes %d Secondes ",Mois,Jours,Heures,Minutes,Secondes);
   
   

}
