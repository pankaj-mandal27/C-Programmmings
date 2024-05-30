#include<stdio.h>
int main()

{
    int n,i,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {   //this will print 1
        //                2 2 
        //                3 3 3  and so on
        for(j = 1; j <= i; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    for (i = (n-1); i >= 1; i--)
    {   //this will print 3 3 3
        //                2 2 
        //                1 
        for(j = 1; j <= i; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}