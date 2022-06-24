#include <stdio.h>
#define n 7

int main() {    
    int pa[n][n], i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j<=i; j++){
            if(j==0 || j==i) {
                pa[i][j] = 1;
            } else {
                pa[i][j] = pa[i-1][j-1] + pa[i-1][j];
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j<=i; j++) {
            printf("%d ", pa[i][j]);
        }
        printf("\n");
    }

    return 0;
}