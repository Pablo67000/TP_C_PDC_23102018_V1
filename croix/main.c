#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0; //entier repr�sentant l'abscisse
    int y = 0; //entier repr�sentant l'ordonn�e
    int taille = 0; //taille de croix
    char car = '&'; //caract�re composant l'exterieur du carr�
    printf("Veuillez entrer un caractere avec lequel composer la croix:\n");
    scanf("%c", &car);
    printf("Veuillez entrer un entier qui definira la taille de votre croix:\n");
    scanf("%d", &taille);
    for (x=0;x<(taille);x++){ //boucle pour, g�rant l'abscisse
        for (y=0;y<(taille);y++){ //boucle pour, g�rant l'ordonn�e
            if ((x==y)||(x==((taille-1)-y))){ //condition pour placer caract�re
                printf("%c",car);
            }
            else{ //sinon on place caract�re d'int�rieur
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

