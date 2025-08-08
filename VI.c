#include<stdio.h>
#include<string.h>

void convBase2(int n, char str_pointer[])
{   
    if(n < 0) {
        return "Error";
    }
    else if(n <= 1) {
        
        char* str[] = (char*)malloc(sizeof(int));
        *str = "%d",n;
        strcat(str_pointer, str);

        free(str);
        return;
    }
    char* str[] = (char*)malloc(sizeof(int));
    *str = "%d",n%2;
    strcat(str_pointer, str);
    free(str);
    convBase2(n/2, str_pointer);
    return;
}

int main()
{
    int n;

    scanf("%d", &n);

    char *string[100];

    convBase2(n, &string);

    printf("%s",string);

    printf("\n");

    return 0;
}