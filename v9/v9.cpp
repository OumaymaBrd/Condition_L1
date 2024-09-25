#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Pour La Verification d'Alphabet \n\n");
	
	//declaration des variables 
	char caractere ;
	int ascii;	
	//Demande a l'utilisateur de saisir 
	
	printf("Donner Moi un caractere: "); scanf("%c",&caractere);

	
	//Chercher le code AScii 
		ascii=caractere;
	
	//traiter les cas de alphabets 
	if(ascii<=90 && ascii>=65 ) printf("Ce caractere entrer est un Alphabet Majuscule \n");	
    else if(ascii>=97 && ascii<=122) printf("Ce caractere entrer est un Alphabet Miniscule \n");
	else printf("Ce caractere ni un Alphabet || ni Miniscule ou Majuscule");
}
