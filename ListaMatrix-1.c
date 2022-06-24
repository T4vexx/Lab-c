#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 3
#define m 4

void ex1() {
    int A[n][n]={{1,2,3},{4,5,6},{7,8,9}}, B[n][n]={{10,11,12},{13,14,15},{16,17,18}}, C[n][n];

    printf("Matriz A\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("A[%d][%d] = %d ", i,j,A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("B[%d][%d] = %d ", i,j,B[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("C[%d][%d] = %d ", i,j,C[i][j]);
        }
        printf("\n");
    }
}

void ex2() {
    int A[3][4], T_A[4][3];

    srand(time(NULL));

    //povoar a matriz com valores
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            A[i][j] = (rand() % 9) + 1;
            printf("[%d] ", A[i][j]);
        }
        printf("\n");
    }

    //calculo da tranposta
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            T_A[j][i] = A[i][j];
        }
    }
    //Print da tranposta
    printf("\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%d] ", T_A[i][j]);
        }
        printf("\n");
    }
}

void ex3() {
    int A[m][m],soma=0;

    srand(time(NULL));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            A[i][j] = (rand() % 5) + 1;

            if(j < i) {
                soma = soma + A[i][j];
            }
        }
    }

    printf("Soma dos numeros é: %d", soma);

    printf("\n");
    //printar matriz inteira
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            printf("[%d] ", A[i][j]);
        }
        printf("\n"); 
    }
}

void ex4() {
    int A[n][n];
    int dig_prin1=1,dig_prin2=1,dig_prin3=1,dig_sec1=1,dig_sec2=1,dig_sec3=1,counter=1,det=0;

    srand(time(NULL));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            A[i][j] = (rand() % 5) + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        dig_prin1 = dig_prin1 * A[i][i];
        
        if (i+1 <= n-1) {
            dig_prin2 = dig_prin2 *  A[i][i+1];
        } else {
            dig_prin2 = dig_prin2 *  A[i][(n-1)-i];
        }

        if (i+2 <= n-1) {
            dig_prin3 = dig_prin3 * A[i][i+2];
        } else {
            dig_prin3 = dig_prin3 *  A[i][i-1];
        }
        
        dig_sec1 = dig_sec1 * A[i][(n-1)-i];

        if (i == 0) {
            dig_sec2 = dig_sec2 * A[i][i];
        } else {
            dig_sec2 = dig_sec2 * A[i][n-i];
        }

        if (i != 2) {
            dig_sec3 = dig_sec3 * A[i][(int)sqrt(pow(i-1,2))];
        } else {
            dig_sec3 = dig_sec3 * A[i][i];
        }
        
    }

    dig_prin1 = dig_prin1 + dig_prin2 + dig_prin3;
    dig_sec1 = dig_sec1 + dig_sec2 + dig_sec2;

    det = dig_prin1 - dig_sec1;

    printf("dig princ %d",dig_prin1);
    printf("\ndig sec %d",dig_sec1);

    printf("\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("[%d] ",A[i][j]); 
        }
        printf("\n");
    }

    printf("a determinante de A e: %d",det);
    
}

void challengeMultiplicacao() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}},B[3][1] = {{2},{3},{4}}, X[3][1],soma=0;

    for(int i = 0; i < 3; i++) {
        soma = 0;
        for(int j = 0; j < 3; j++) {
            soma = soma + A[i][j] * B[j][0];
        }

        X[i][0] = soma;
    }

    for(int i = 0; i < 3; i++) {
        printf("%d ", X[i][0]);
        printf("\n");
    }
    

}

void challenge5() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}},B[3][1] = {{2},{3},{4}}, X[3][1],soma=0;  
    /*
        1 -3 5     x     1
        1  2 1  *  y  =  12
        2 -1 3     z     10

        { x + 2y + 3z = 2
        { 4x + 5y + 6z = 3
        { 7x + 8y + 9z = 4
    */
}

int main() {    
    challengeMultiplicacao();

    return 0;
}