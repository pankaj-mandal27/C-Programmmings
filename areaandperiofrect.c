#include<stdio.h>
int areaofrect(int *x,int *y)
{
    int area=*x * *y;
return area;
} 
int peri(int *x , int *y)
{
    int peri= 2*(*x + *y);
    return peri;
}
int main()
{
    int l,b,k,p;
    printf("Enter length (L) : ");
    scanf("%d",&l);
    printf("Enter breath (B) : ");
    scanf("%d",&b);
    k = areaofrect(&l,&b);
    p = peri(&l,&b);
    printf("\nThe area of the rectangle is %d units.\nAnd the perimeter of same rectangle is %d units.\n\n",k,p);
    return 0;
}