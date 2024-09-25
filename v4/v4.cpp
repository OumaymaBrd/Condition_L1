#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	printf("\t\t calculer les solutions possibles d’une équation du deuxième degré\n\n");
	
	//explication 
	
	printf("\tOn pose que Votre Equation est : aX2+bX1+cX3\n\n");
	printf("Entrer Les 3 Racines de Votre Equation : \n");
	
	//declaration les racines de l'equation
	
	int a,b,c;
	//demande de saisir
	printf("Donner moi la 1 ere Racine: "); scanf("%d",&a);
	printf("Donner moi la 2 eme Racine: "); scanf("%d",&b);
	printf("Donner moi la3 eme Racine: "); scanf("%d",&c);
	
	//traitement 
	   // calcul de la valeur delta 
	   float delta= pow(b,2)-4*a*c;
	   
	   //analyse de resultat delta
	       //si delta<0
	          if(delta<0) printf("Votre Equation Admet des solution dans l'ensemble C : Complex ");
	          if(delta>0){
	          	float x1,x2;
	          x1=	(-b-sqrt(delta))/ (2*a);
	          x2=	(-b+sqrt(delta))/ (2*a);
	          	printf("Votre Equation Admet deux solution Sont : x1= %.2f est x2=%.2f ",x1,x2);
	          	
			  }
			  if(delta==0){
			  	printf("Votre Equation Admet un seule Solution est : %.2f",-b/2*a);
			  }
	
}
