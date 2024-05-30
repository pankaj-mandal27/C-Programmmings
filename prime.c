#include<stdio.h>
int main()
// PRIME AND COMPOSITE NUMBERS
{
    int num,counter=0;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    if(num%i==0)
    {
        counter++;
    }
    if (counter==2)
    {
       printf("You entered %d : It is a prime number.",num);
    }
    else
    {
     printf("You entered %d : It is a composite number.",num);
    }
    return 0;

}