#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0; //entier représentant l'abscisse
    int y = 0; //entier représentant l'ordonnée
    int taille = 0; //taille de croix
    char car = '&'; //caractère composant l'exterieur du carré
    printf("Veuillez entrer un caractere avec lequel composer la croix:\n");
    scanf("%c", &car);
    printf("Veuillez entrer un entier qui definira la taille de votre croix:\n");
    scanf("%d", &taille);
    for (x=0;x<(taille);x++){ //boucle pour, gérant l'abscisse
        for (y=0;y<(taille);y++){ //boucle pour, gérant l'ordonnée
            if ((x==y)||(x==((taille-1)-y))){ //condition pour placer caractère
                printf("%c",car);
            }
            else{ //sinon on place caractère d'intérieur
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

