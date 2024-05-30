#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
    printf("Enter the elements of matrix a :" );
    for(i = 0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix b :" );
    for(i = 0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Enter the elements of matrix c :" );
    for(i = 0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    // d11 =a11+b11+c11
    printf("THE SUM OF THREE MATRICES IS : \n");
    for (i = 0; i < 3; i++)
    {
        for(j=0; j<3; j++)
        {
            d[i][j] = a[i][j] + b[i][j] + c[i][j];
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    
    
return 0 ;
}