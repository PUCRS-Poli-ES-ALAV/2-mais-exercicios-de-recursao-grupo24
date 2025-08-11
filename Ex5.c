// Modele e implemente um método recursivo que recebe um String em retorna true se este String for um palíndrome, false caso contrário.

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool _isPalindrome(char* str, int idx)
{
    //printf("%s\n","met");
    int len = strlen(str);
    //printf("%d\n",len);
    if(idx == len/2) return true;
    if (str[idx] != str[(len-1)-idx]) return false;
    return _isPalindrome(str, ++idx);
}

bool isPalindrome(char* str)
{
    return _isPalindrome(str, 0);
}

void main()
{
    char line[1024];
    scanf("%1023[^\n]", line);
    printf("%s",isPalindrome(line)? "true" : "false");
}