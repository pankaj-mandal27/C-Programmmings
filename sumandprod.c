#include<stdio.h>
void sumAndprod(int x, int y, int* sptr, int* pptr)
{

    *sptr = x + y;
    *pptr = x * y;
}
int main()
{
    int a, b, s, p;
    printf("Enter two numbers:\n ");
    scanf("%d%d",&a,&b);
    sumAndprod(a,b,&s,&p);
    printf("The sum is %d\nThe product is %d",s,p);

return 0 ;
}