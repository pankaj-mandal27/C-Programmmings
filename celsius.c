#include<stdio.h>
int main()
{
    int cel;
    float farh;
    printf("Enter You Temperature in degree Celsius : ");
    scanf("%d",&cel);
    farh = (float)cel/100 * 180 +32;
    printf("%d degree Celsius = %f fahrenheit.\n\n",cel,farh);
    return 0;
}