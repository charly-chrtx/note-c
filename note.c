#include <stdio.h>  // j'inclus la bibliothèque standard

int main() {
    // --- afficher du texte ---
    printf("hello world\n");  // j'affiche un texte

    // --- variables ---
    int age = 17;             // une variable entière
    float taille = 1.75;      // un nombre décimal
    char lettre = 'A';        // un caractère

    printf("j'ai %d ans, je mesure %.2f m et ma lettre preferee est %c\n", age, taille, lettre);

    // --- calculs ---
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);  // addition
    printf("a - b = %d\n", a - b);  // soustraction
    printf("a * b = %d\n", a * b);  // multiplication
    printf("a / b = %d\n", a / b);  // division entière
    printf("a %% b = %d\n", a % b); // modulo (reste de la division)

    // --- lire une entrée clavier ---
    int mon_age;
    printf("entre ton age : ");
    scanf("%d", &mon_age);   // je lis un entier
    printf("tu as %d ans\n", mon_age);

    // --- boucle for ---
    for (int i = 0; i < 5; i++) {
        printf("for -> i = %d\n", i);  // je repete 5 fois
    }

    // --- boucle while ---
    int j = 0;
    while (j < 5) {
        printf("while -> j = %d\n", j);  // je repete tant que j < 5
        j++;
    }

    // --- boucle do while ---
    int k = 0;
    do {
        printf("do while -> k = %d\n", k); // je fais au moins une fois
        k++;
    } while (k < 5);

    return 0;  // fin du programme
}