#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k=0,sum = 0;
        printf("\n\n**************** Matrix A *************\n\n");
        for(i=1; i<=3; i++)
        {
            for(j=1; j<=3; j++)
            {
                printf("Enter the element of matrix A[%d][%d] : ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n\n**************** Matrix B *************\n\n");
        for(i=1; i<=3; i++)
        {
            for(j=1; j<=3; j++)
            {
                printf("Enter the element of matrix B[%d][%d] : ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        /*
        multiplication of matrices
        
        */
        for(i = 1; i <= 3; i++)
        {
            for(j = 1; j <= 3; j++)
            {
                sum = 0;
                for(k = 1; k <= 3; k++)
                {
                    sum += a[i][k]*b[k][j];
                    
                }
                c[i][j] = sum;
            }
        }
        for(i = 1; i <= 3; i++)
        {
            for(j = 1; j <=3; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        return 0;
}