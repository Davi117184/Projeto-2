#include <stdio.h>

int main(void) {
    int total_media = 0, aux = 0, media_instituicao = 0;
    int op = 0;

    do {
        total_media = 0;
        aux = 0;
        media_instituicao = 0;

        printf("\nDigite a média da instituição: ");
        scanf("%d", &media_instituicao);

        printf("\nDigite a nota do 1º bimestre: ");
        scanf("%d", &aux);
        total_media += aux;

        printf("\nDigite a nota do 2º bimestre: ");
        scanf("%d", &aux);
        total_media += aux;

        printf("\nDigite a nota do 3º bimestre: ");
        scanf("%d", &aux);
        total_media += aux;

        printf("\nDigite a nota do 4º bimestre: ");
        scanf("%d", &aux);
        total_media += aux;

        if ((total_media / 4) < media_instituicao) {
            printf("\nVocê ficou de recuperação e precisa ter nota igual ou superior a %d\n", 100 - (total_media / 4));
        } else {
            printf("\nParabéns, você não ficou de recuperação.\n");
        }

        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
    } while (op == 1);

    return 0;
}
