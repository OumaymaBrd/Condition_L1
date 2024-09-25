#include <stdio.h>
#include<stdlib.h>

int main() {
	
	//declaration de variable 
    int x1, y1, x2, y2, x, y;

    // Lire les coordonnées du segment
    printf("Entrez les coordonnées de la première extrémité du segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);

    printf("Entrez les coordonnées de la deuxième extrémité du segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);

    // Lire les coordonnées du point de segment 
    printf("Entrez les coordonnées du point (x y) : ");
    scanf("%d %d", &x, &y);

    // Vérification 1 : appartient a  limites du segment
    if ((x >= (x1 < x2 ? x1 : x2)) && (x <= (x1 > x2 ? x1 : x2)) &&
        (y >= (y1 < y2 ? y1 : y2)) && (y <= (y1 > y2 ? y1 : y2))) {
        
        // Vérification colinearite
        int determinant = (y2 - y1) * (x - x1) - (x2 - x1) * (y - y1);

        if (determinant == 0) {
            printf("Le point (%d, %d) est sur le segment.\n", x, y);
        } else {
            printf("Le point (%d, %d) n'est pas sur le segment.\n", x, y);
        }
    } else {
        printf("Le point (%d, %d) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}

