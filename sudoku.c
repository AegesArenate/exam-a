#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HORIZ 9
#define VERT 9

/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/

// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls

int generer(int tab[HORIZ][VERT]){  
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (tab[i] != 0) {
                printf("%d ", tab[i]);
            }
            if (tab[j] != 0) {
                printf("%d ", tab[j]);
            }
        }
    }
    return 0;
}

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/


/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/


int saisir(int i, int j){ 
    int i = 1;
    int j = 1;
    printf("Veuillez rentrer la coordonnées i (horizontal) et la coordonnées j (vertical) : \n");
    scanf("Coordonnées i :%d et la coordonéés j :%d \n", &i, &j );
    for(j=0;j<9; ++j) {
        for(i=0; i<9; ++i){

        }
    }
    return 0;
}

/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/

int verifierLigneColonne(int tab[HORIZ][VERT], int hor, int ver, int number){
    for (int i = 0; i <= 9; i++) {
        if (tab[hor][i] == number || tab[i][ver] == number) {
            return 0;
        }
    }
    return 1;
}


//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon
int verifierGrille(int tab[HORIZ][VERT], int hor, int ver, int number){
    for (int hor = 0; hor < 3; hor++){
        for (int ver = 0; ver < 3; ver++){
            if (tab[hor+ver][ver+hor] == number);
        }
    }
    return 0;
}

/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/

int verifierRegion(int tab[HORIZ][VERT], int hor, int ver, int number){
    for (int k = 0; k < 9; k++){  
        for (int l = 0; l < 9; l++){
            for (int hor = 0; hor < 3; hor++){
                for (int ver = 0; ver < 3; ver++){
                    if (tab[hor+ver][ver+hor] == number);
                }
            }
        }
    }
    return 0;
}

//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int tab[9][9];
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) {
    for(i=0; i<9; ++i)
        tab[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", tab[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");  
    //toucher le code entre les commentaires 
    
    printf("%d",rand() % 9);
    


    if (main(tab, 0, 0))
        print(tab);
    else 
        print("Pas de solution possible");

    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}