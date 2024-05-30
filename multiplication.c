#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the number :\n");
    scanf("%d",&num);
    
    for (int i = 1; i <= 10; i++)
    {
        int mul = num * i;
        printf("%d x %d = %d\n",num,i,mul);

    }
    
    return 0 ;
}