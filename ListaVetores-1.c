#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define m 5

void ex1() {
    float soma=0,num;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%f", &num);

    for(int i = 0; i < num; i++) {
        soma = soma + ((num - i) / (i + 1));
    }

    printf("\nSoma: %f", soma);
}

void ex2() {
    float idade_v=0,idade_n=0,idade_m=0,count_im=0,altura_m=0,count_am=0,idade=0,altura=0;

    for (int i = 0; i < m; i++) {
        printf("Digite a idade: ");
        fflush(stdin);
        scanf("%f", &idade);
        

        printf("Digite a altura: ");
        fflush(stdin);
        scanf("%f", &altura);

        if ( i == 0){
            idade_v = idade;
            idade_n = idade;
        } else {
            if(idade > idade_v) {
                idade_v = idade;
            } 

            if(idade < idade_n) {
                idade_n = idade;
            }
        }

        if (altura < 1.7){
            idade_m = idade_m + idade;
            count_im++;
        }

        if (idade > 20) {
            altura_m = altura_m + altura;
            count_am++;
        }
    }
    
    printf("A) a idade media dos alunos com menos de 1.7 e %.2f", idade_m/count_im);
    printf("B) a altura media dos alunos com mais de 20 anos e %.2f", altura_m/count_am);
    printf("C) a idade do mais velho e %f", idade_v);
    printf("D) a idade do mais novo e %f", idade_n);
}

void ex3() {
    float v[10] = {11.4,10.5,12.4,12.3,7.8,8.6,6.99,12.33,6.85,9.8},maior,menor;

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            maior = v[i];
            menor = v[i];
        } else {
            if (v[i] > maior) {
                maior = v[i];
            }
            if (v[i] < menor) {
                menor = v[i];
            }
        }
    }

    printf("O maior e %.3f e o menor e %.3f", maior,menor);
}

void ex4() {
    float u[10] = {11.4,10.5,12.4,12.3,7.8,8.6,6.99,12.33,6.85,9.8},v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = u[i];

        printf("v[%d] = %.3f\n", i,v[i]);
    }

    
}

void ex5() {
   int N[10],aux;

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        N[i] = rand() % 10 + 1;
    }

    printf("Antes de inverter \n");
    for (int i = 0; i < 10; i++) {
        printf("[%d] = %d ",i,N[i]);
    }

    for (int i = 0; i < 10; i++) {
        if(i<5) {
            aux = N[i];
            N[i] = N[9-i];
            N[9-i] = aux;
        }
    } 

    printf("\nDepois de inverter \n");
    for (int i = 0; i < 10; i++) {
        printf("[%d] = %d ",i,N[i]);
    }
}

void ex6() {
    float u[3] = {3, 2, 5},v[3] = {4,3,1},prod=0;

    for (int i = 0; i < 3; i++) {
        prod = prod + u[i]*v[i];
    }

    printf("Produto é %f", prod);
}

void ex7() {
    float u[2] = {3, 2},v[2] = {4,3}, prod=0,prod2=0;

    for (int i = 0; i < 2; i++) {
        prod = prod + pow(u[i],2);
        prod2 = prod2 + pow(v[i],2);
    }

    printf("Mode do vetor u e %f\n", sqrt(prod));
    printf("Mode do vetor v e %f\n", sqrt(prod2));
    
}

void ex8() {
    float u[2] = {3, 2},v[2] = {4,3},mod_v=0,mod_u=0,escalar=0;

    escalar = (v[0]*u[0]) + (v[1]*u[1]);

    mod_v= sqrt((v[0]*v[0])+(v[1]*v[1]));
    mod_u= sqrt((u[0]*u[0])+(u[1]*u[1]));

    printf("cosseno de theta e: %f",escalar/(mod_v*mod_u));
}

void ex9() {
    char nome[81],nomemaiusculo[81];

    puts("Digite uma nome");
    gets(nome);

    for (int i = 0; i < 81; i++) {
        nomemaiusculo[i] = toupper(nome[i]);
    }

    puts(nomemaiusculo);
}

void ex10() {
    int tamanho;
    char string[8],aux;

    puts("Digite uma palavra para ser invertida");
    gets(string);

    tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) {
        if (i < (tamanho/2)) {
            aux = string[i];
            string[i] = string[(tamanho-1) - i];
            string[(tamanho-1) - i] = aux;
        }
    }

    puts(string);
}

void ex11() {
    char cpf[21]="", cpfformatado[21]="",count=0;

    puts("digite o cpf (nao usar pontos ou tracos): ");
    gets(cpf);

    for (int i = 0; i < 21; i++) {
        if (i == 3) {
            cpfformatado[i] = '.';
            count++;
        } else if (i == 6) {
            cpfformatado[i+1] = '.';
            count++;
        } else if (i == 9) {
            cpfformatado[i+2] = '-';
            count++;
        }

        cpfformatado[count] = cpf[i];
        count++;
    }

    puts(cpfformatado);

}

void ex14() {
    char meu[20];

    puts("digite o nome: ");
    gets(meu);

    for (int i = 0; i < 15; i++) {
        if (meu[i] == ' ') {
            printf("\n nada");   
        } else if (meu[i] == '\0'){
            printf("\n barra zero"); 
        }else {
            printf("\nmeu[%d] = %c", i,meu[i]);   
        }
         
    }
    
    
}

int main() {    
    ex14();

    return 0;
}
