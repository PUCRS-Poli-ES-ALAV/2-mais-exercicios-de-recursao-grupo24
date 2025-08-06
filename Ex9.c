//Implemente um método recursivo para determinar se um string ocorre dentro de outro.

/*
1) Assinatura
    findSubStr:: String => String => boolean

2) O que ele faz? (pós condições)
    ensures exists i:nat :: i < |str| && forall j:nat :: j < |pattern| ==> pattern[j] == str[i+j]
    
3) Casos erro (pré condições)


4) Casos base
    findSubStr(str, "") = True
    findSubStr("", pattern) = False
    
5) Casos recursivos
    findSubStr(c1:str, c2:pattern) = findSubStr(str, pattern), se findSubStr(str, pattern) == True
                                     findSubStr(str, c2:pattern), se c1 != c2
                    
*/

#include<stdio.h>
#include<string.h>

char findSubStr(char* str, char* pattern, int offset_str, int offset_pattern, char in_search)
{
    printf("%s %s %d %d\n",str, pattern, offset_str, offset_pattern);
    if (strlen(pattern) == offset_pattern-1)
    {
        return 1;
    }
    if (strlen(str) == offset_str-1)
    {
        return 0;
    }
    if (pattern[offset_pattern] == str[offset_str])
    {
        if (findSubStr(str, pattern, offset_str+1, offset_pattern+1, 1))
        {
            return 1;
        }
    }
    if (in_search == 1)
    {
        return 0;
    }
    return findSubStr(str, pattern, offset_str+1, offset_pattern, 0);
}

void main()
{
    printf("%d",findSubStr("banana", "nna", 0, 0, 0));
}