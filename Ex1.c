//Modele e implemente um método recursivo que calcule o fatorial de um número n passado como parâmetro.
#include <stdio.h>
int fatorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n-1);
    }
    
}

void main()
{
    printf("%d",fatorial(10));
}