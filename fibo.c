#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter 1st and 2nd number followed by a comma ");
    scanf("%d,%d",&a,&b);
    printf("%d\t %d\t",a,b);
    for(i=0; i<=18; i++)
    {
        c= a + b;
        printf("%d\t",c);
        a=b;
        b=c;
        
    }
return 0 ;
}