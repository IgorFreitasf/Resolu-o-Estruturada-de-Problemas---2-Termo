#include <stdio.h>

float area_circulo() {
    float raio, area;
    printf("\nCalcular area do circulo:\n");
    printf("Informe o raio: ");
    scanf("%f", &raio);
    area = (raio * raio) * 3.14;
    return area;
}

float perimetro() {
    float diametro, per;
    printf("\nCalcular perimetro do circulo:\n");
    printf("Informe o diâmetro: ");
    scanf("%f", &diametro);
    per = diametro * 3.14;
    return per;
}

void menu() {
    int escolha;
    float resultado;

    do {
        printf("\nMenu de Opcoes:");
        printf("\n1 - Calcular Area do Circulo");
        printf("\n2 - Calcular Perimetro do Circulo");
        printf("\n3 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            resultado = area_circulo();
            printf("Area do circulo: %.2f\n", resultado);
        } else if (escolha == 2) {
            resultado = perimetro();
            printf("Perimetro do circulo: %.2f\n", resultado);
        } else if (escolha != 3) {
            printf("Opcao invalida.\n");
        }
    } while (escolha != 3);
}

void main() {
    menu();
    return 0;
}

