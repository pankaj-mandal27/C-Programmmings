#include<stdio.h>
int main()
{
    int a,i,c=1;
    printf("Please enter a number : ");
    scanf("%d",&a);
    int arr[10];
    for(i=0;i<=a;i++)
    {
        if (a%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
        a=a/2;
        c++;
        
    }

    for(i=c;i>=0;i--){                                                            /*there are faults in program */
        printf("%d",arr[i]);
    }
return 0 ;
}