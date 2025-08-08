#include<stdio.h>

int somatorioAteZero(int n) {
    if(n == 0) {
        return 0;
    }
    if(n < 0) {
        return somatorioAteZero(n + 1) + n;
    }
    else {
        return somatorioAteZero(n - 1) + n;
    }
}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d \n", n);

    printf("%d \n", somatorioAteZero(n));

    return 1;
}