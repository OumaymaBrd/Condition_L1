#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Affiche La  Mention Obtenue  \n\n");
	
	//declaration de varibe
	float math,physique,francais,moyenne;
	//on pose qu 'il existe 3 modules  (math , physique , francais )
	
	printf("Donner moi la note de Maths: "); scanf("%f",&math);
	printf("Donner moi la note de physique: "); scanf("%f",&physique);
	printf("Donner moi la note de francais: "); scanf("%f",&francais);
	
	//calcul de la moyenne 
	moyenne=(math+physique+francais)/3;
	printf("\n\n Votre Moyenne de note est : %.2f\n",moyenne);
	
	//la Mentien ca depend Votre Note de Moyenne 
	
	if(moyenne < 10) 
    printf("Votre candidature est recalee\n");
else if(moyenne >= 10 && moyenne < 12) 
    printf("Votre candidature avec Mention passable\n");
else if(moyenne >= 12 && moyenne < 14) 
    printf("Votre candidature avec Mention assez bien\n");
else if(moyenne >= 14 && moyenne < 16) 
    printf("Votre candidature avec Mention Bien\n");
else if(moyenne >= 16) 
    printf("Votre candidature avec Mention tres bien\n");

	
}
