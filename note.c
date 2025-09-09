#include <stdio.h>
int main() {
    // boucle for
    int repetition = 0;
    for(int nombreboucle = 0; nombreboucle>5 ; nombreboucle++) {
        printf("cette ligne a été afficher %d fois", repetition);
    }

    //scanf: permet de lire une entrée utilisateur
    int age;
    printf("Quel est votre age ? ");
    scanf("%d", &age);
    printf("Vous avez %d ans", age);
}

