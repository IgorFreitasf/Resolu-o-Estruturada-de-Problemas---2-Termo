#include <stdio.h>

float ler_nota() {
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    return nota;
}

void avaliar_aluno() {
    float n1, n2, n3, media;

    printf("\nInforme as 3 notas do aluno:\n");
    n1 = ler_nota();
    n2 = ler_nota();
    n3 = ler_nota();

    media = (n1 + n2 + n3) / 3.0;

    printf("Média semestral: %.2f\n", media);

    if (media >= 7.0) {
        printf("PARABENS! Você foi aprovado!\n");
    } else {
        printf("REPROVADO! Tente outra vez.\n");
    }
}

int main() {
    avaliar_aluno();
    return 0;
}

