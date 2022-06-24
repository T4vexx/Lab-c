#include <stdio.h>
#include <math.h>
#define n 10

void ex1() {
    float dp[n],media,soma,dpm;

    //informe dos valores e somatoria dos resultados
    for(int i=0;i<n;i++) {
        printf("Digite os valores: \n");
        scanf("%f", &dp[i]);
        soma = soma + dp[i];
    }

    // media dos resultados
    media = soma/n;

    // somatoria dos desvios
    soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + pow(dp[i] - media, 2);
    }

    // raiz quadrado do resultado
    dpm = sqrt(soma/(n-1));

    printf("O dpm e: %.2f", dpm);
}

int main() {
    ex1();

    return 0;
}