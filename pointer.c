#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter the size of array");
    scanf("%d",&n);
    
    ptr = (int*)malloc(n * sizeof(int));

    for(i=0; i<n;i++){
        scanf("%d",(ptr + i));
    }
    for(i=0; i<n;i++){
        printf("%d \t",*(ptr + i));
    }
    return 0;
}