#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter two strings : \n");
    scanf("%s %s",str1,str2);
    if(strcmpi(str1,str2)==0)
    {
        printf("%s and %s are Same.",str1,str2);
    }
    else
    {
        printf("They are different.");
    }
    return 0;
}