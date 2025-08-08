//Implemente um método recursivo para determinar se um string ocorre dentro de outro.

#include<stdio.h>


int nroDigit(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return nroDigit(n%10) + nroDigit(n/10);
}

void main()
{
    printf("%d", nroDigit(1343463634));
}