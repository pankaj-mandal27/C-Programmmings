#include<stdio.h>
int main()
{
  //  0 1 1 2 3 5 8 13 up to n
    int up,num1,num2,num3,i;
    printf("Please enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("Set the limit : ");
    scanf("%d",&up);
    printf("Here is your Fibonacce series : ");
    printf("%d\t %d\t",num1,num2);
    for (i=1; i <= up-2;i++)
    {
    num3 = num1 + num2;
    printf("%d\t",num3);
    num1=num2;
    num2=num3;
    }
return 0 ;
}