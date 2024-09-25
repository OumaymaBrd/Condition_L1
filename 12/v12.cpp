#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("\t\t Programme C qui lit deux instants dans le format HH:MM:SS \n\n");
    
    // déclaration des variables pour stocker les deux dates
    char date1[9], date2[9];
    
    printf("Donnez-moi la 1ere date (HH:MM:SS) : ");
    scanf("%s", date1);
    
    printf("Donnez-moi la 2eme date (HH:MM:SS) : ");
    scanf("%s", date2);
    
    // conversion des chaînes de caractères 
    int heure1 = (date1[0] - '0') * 10 + (date1[1] - '0');  
    int min1 = (date1[3] - '0') * 10 + (date1[4] - '0');  
    int sec1 = (date1[6] - '0') * 10 + (date1[7] - '0');
    
    int heure2 = (date2[0] - '0') * 10 + (date2[1] - '0');  
    int min2 = (date2[3] - '0') * 10 + (date2[4] - '0');  
    int sec2 = (date2[6] - '0') * 10 + (date2[7] - '0');
    
    // Comparaison par if
    if(heure1 < heure2) {
        printf("Le premier instant vient avant le deuxieme au niveau des heures.\n");
    } else if (heure1 > heure2) {
        printf("Le deuxieme instant vient avant le premier au niveau des heures.\n");
    } else { //Si sont égales
        if(min1 < min2) {
            printf("Le premier instant vient avant le deuxième au niveau des minutes.\n");
        } else if(min1 > min2) {
            printf("Le deuxieme instant vient avant le premier au niveau des minutes.\n");
        } else { // Si minutes sont égales
            if(sec1 < sec2) {
                printf("Le premier instant vient avant le deuxieme au niveau des secondes.\n");
            } else if(sec1 > sec2) {
                printf("Le deuxieme instant vient avant le premier au niveau des secondes.\n");
            } else {
                printf("Les deux instants sont identiques.\n");
            }
        }
    }
    
    return 0;
}

