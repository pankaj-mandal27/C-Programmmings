#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main ()
{
    int a,b,choice;
    char ch;
    do
    {
        printf("Enter Any Two Numbers : \n");
        scanf("%d %d",&a,&b);
        printf("=====================================\n");
        printf(" MAIN MENU\n\n");
        printf("1. Sum\n");
        printf("2. Product\n");
        printf("3. Subtraction\n");
        printf("4. Exit\n");
        printf("=====================================\n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:  
                printf("The Sum of %d and %d is %d\n",a,b,a+b);
                break;
        
            case 2:
                printf("The Product of %d and %d id %d\n",a,b,a*b);
                break;

            case 3:
                printf("The Subtraction of %d And %d is %d\n",a,b,a-b);
                break;
            
            case 4:
                exit(0);
        
            default:
                printf("Wrong Choice\n");
                break;
        }
        printf("\n");
        printf("Do you want to do again (Y/N) ?\n");
        scanf("%s",&ch);
    }while(ch == 'Y' || ch == 'y');
}