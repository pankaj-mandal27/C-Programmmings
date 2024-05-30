#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter The Order Of The Matrix m*n : ");
    scanf("%d %d",&m,&n);
    int A[m][n],B[n][m];
    printf("Enter the elements of matrix A[%d][%d]\n",m,n);
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);

        }
    }
    printf("\n\n");
    printf("Your matrix is : \n\n");
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    // transposing 
    printf("\n\n");
    printf("And The Transpose of  Your matrix is : \n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            B[i][j] = A[j][i];
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
return 0 ;
}