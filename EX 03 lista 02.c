#include <stdio.h>

float fahrenheit_para_celsius() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = ((fahrenheit - 32) / 9) * 5;
    return celsius;
}
int main() {
    float celsius = fahrenheit_para_celsius();
    printf("Temperatura em Celsius: %.2f\n", celsius);
    return 0;
}

