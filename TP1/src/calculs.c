#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'operateur (+ - * / %% & | ~): ");
    scanf(" %c", &op);

    int resultat;

    switch (op) {

        case '+':
            resultat = num1 + num2;
            break;

        case '-':
            resultat = num1 - num2;
            break;

        case '*':
            resultat = num1 * num2;
            break;

        case '/':
            if (num2 == 0) {
                printf("Erreur : division par zero !\n");
                return 1;
            }
            resultat = num1 / num2;
            break;

        case '%':
            resultat = num1 % num2;
            break;

        case '&':
            resultat = num1 & num2;
            break;

        case '|':
            resultat = num1 | num2;
            break;

        case '~':
            resultat = ~num1; // num2 ignoré
            break;

        default:
            printf("Operateur inconnu !\n");
            return 1;
    }

    printf("Resultat : %d\n", resultat);

    return 0;
}


