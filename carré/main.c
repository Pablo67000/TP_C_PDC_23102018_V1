#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0; //entier repr�sentant l'abscisse
    int y = 0; //entier repr�sentant l'ordonn�e
    int taille = 0; //taille du carr�
    char exte = '&'; //caract�re composant l'exterieur du carr�
    char inte = '-'; //caract�re composant l'int�rieur du carr�
    printf("Veuillez entrer un caractere avec lequel composer le contour du carre:\n");
    scanf("%c", &exte);
    fflush(stdin); //permet la r�p�tition de scan du meme type
    printf("Veuillez entrer un caractere avec lequel composer l interieur du carre:\n");
    scanf("%c", &inte);
    printf("Veuillez entrer la taille de votre carre:\n");
    scanf("%d", &taille);
    for (x=1;x<(taille+1);x++){ //boucle pour, g�rant l'abscisse
        for (y=1;y<(taille+1);y++){ //boucle pour, g�rant l'ordonn�e
            if ((x==1)||(x==taille)||(y==1)||(y==taille)){ //condition pour placer caract�re de contour
                printf(" %c",exte);
            }
            else{ //sinon on place caract�re d'int�rieur
                printf(" %c",inte);
            }
        }
        printf("\n");
    }
    return 0;
}
