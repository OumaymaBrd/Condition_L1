#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
printf("\t\t Programme qui affiche d'une maniere aleatoire un des jours de la semaine\n\n");
const char jours[7][10] = {
     
    "Lundi", 
    "Mardi", 
    "Mercredi", 
    "Jeudi", 
    "Vendredi", 
    "Samedi",
    "Dimanche"
};    
    // Initialisation 
    srand(time(NULL));
    
    // generer un indice aléatoire entre 0 et 6
    int index = rand() % 7;
    
    // Affichage du jour 
    printf("Jour selectionne Cette fois est  : %s\n", jours[index]);


}
    



