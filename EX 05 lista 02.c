#include <stdio.h>
#include <math.h> 

float calcular_volume_esfera() {
    float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    return volume;
}
int main() {
    float volume = calcular_volume_esfera();
    printf("Volume da esfera: %.2f\n", volume);
    return 0;
}

