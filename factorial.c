#include<stdio.h>
int fact(int* x){
    int i, counter=1;
    for(i = 1; i<= *x; i++){
        counter = counter * i;
    }
    return counter;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The factorial of the number %d is %d ", n,fact(&n));
return 0 ;
}