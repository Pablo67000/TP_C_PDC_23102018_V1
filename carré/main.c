#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0; //entier représentant l'abscisse
    int y = 0; //entier représentant l'ordonnée
    int taille = 0; //taille du carré
    char exte = '&'; //caractère composant l'exterieur du carré
    char inte = '-'; //caractère composant l'intérieur du carré
    printf("Veuillez entrer un caractere avec lequel composer le contour du carre:\n");
    scanf("%c", &exte);
    fflush(stdin); //permet la répétition de scan du meme type
    printf("Veuillez entrer un caractere avec lequel composer l interieur du carre:\n");
    scanf("%c", &inte);
    printf("Veuillez entrer la taille de votre carre:\n");
    scanf("%d", &taille);
    for (x=1;x<(taille+1);x++){ //boucle pour, gérant l'abscisse
        for (y=1;y<(taille+1);y++){ //boucle pour, gérant l'ordonnée
            if ((x==1)||(x==taille)||(y==1)||(y==taille)){ //condition pour placer caractère de contour
                printf(" %c",exte);
            }
            else{ //sinon on place caractère d'intérieur
                printf(" %c",inte);
            }
        }
        printf("\n");
    }
    return 0;
}
