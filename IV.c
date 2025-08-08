#include<stdio.h>

int somatorioKateJ(int k, int j) 
{
    if(k == j) {
        return j;
    }
    else if(k < j) {
        return j + somatorioKateJ(k, j - 1);
    }
    else if(k > j) {
        return j + somatorioKateJ(k, j + 1);
    }
}

int main() 
{
    int k, j;

    scanf("%d %d", &k, &j);

    printf("k = %d \nj = %d \n", k, j);

    printf("Somatorio de k até j = %d \n", somatorioKateJ(k,j));


    return 0;
}