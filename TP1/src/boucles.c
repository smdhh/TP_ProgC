#include <stdio.h>

int main() {
    int compteur = 5;  // doit être < 10

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            // 1) Première et dernière colonne → toujours *
            if (j == 1 || j == i)
                printf("* ");

            // 2) Dernière ligne → que des *
            else if (i == compteur)
                printf("* ");

            // 3) Sinon → intérieur en #
            else
                printf("# ");
        }
        printf("\n");
    }

    return 0;
}
