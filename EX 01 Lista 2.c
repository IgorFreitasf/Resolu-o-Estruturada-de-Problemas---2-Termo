#include <stdio.h>
#include <conio.h>

int verificador() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        return 1; 
    } else {
        return 2;  
    }
}

void main(){
	printf("Seu numero e: %d (1 - Par 2 - Impar) ", verificador());
}
