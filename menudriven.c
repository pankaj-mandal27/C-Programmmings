#include<stdio.h>
#include<string.h>
int sum(int* x, int* y)
{
	return *x + *y;
}
int prod(int* x, int* y)
{
	return *x * *y;
}
int sumofsquares(int* x, int* y)
{
	return *x * *x + *y * *y;
}
int main()
{
	
	int n,i,a,b;
	char choice[5];
	do
	{
	

		printf("Enter The Two Numbers :\n");
		scanf("%d %d",&a,&b);
		printf("============ CHOOSE AN OPTION ============== ");
		printf("\n");
		printf("1. SUM OF TWO NUMBERS\n");
		printf("2. THEIR PRODUCT\n");
		printf("3. SUM OF THEIR SQUARES\n");
		printf("============================================\n ");
		printf("OPTION : ");
		scanf("%d",&n);
		printf("YOU CHOSE OPTION : %d \n",n);
		if (n== 1)
		{
			printf("The sum of %d and %d is %d",a,b,sum(&a,&b));
		}
		else if ( n == 2)
		{
			printf("The product of %d and %d is %d ",a,b,prod(&a,&b));
		}
		else if (n == 3)
		{
			printf("The sum of the squares of %d and % d is %d ",a,b,sumofsquares(&a,&b));
		}
		else 
		{
			printf("YOU HAVE ENTERED A WRONG CHOICE -_- ");
		}
			printf("\n");
			printf("Do yo want to go to Menu ? (y/n) : ");
			scanf("%s",choice);
	} while (strcmpi(choice,"y")==0);
	return 0;
}
