#include<stdio.h>
#include<stdlib.h>
int main(){
	

	printf("\t\t Programme vérifier si le caractère donné est un alphabet majuscule ou non\n\n");
	
	//declaration d'un caractere 
	
	char caractere,ascii;
	
	//saisir de l'utilisateur 
	
	printf("donner moi un Caractere: "); scanf("%c",&caractere);
	
	//chercher le code Ascii de caractere saisie
	
	ascii= caractere;
	
	//Traitement 
if(ascii >= 65 && ascii <= 90) {
    printf("Cet alphabet est en majuscule\n");
} else if(ascii >= 97 && ascii <= 122) {
    printf("Cet alphabet est en minuscule\n");
} else {
    printf("Ce n'est pas une lettre\n");
}

}
