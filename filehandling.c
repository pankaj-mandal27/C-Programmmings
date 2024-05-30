#include<stdio.h>
int main()
{
    int i;
    char name[20];
    long int num;
    FILE *fp;
    fp = fopen("Details.txt","w");
    for( i = 0; i<3; i++);
    {
        printf("ENTER NAME AND NUMBER : ");
        scanf("%s %ld",name,&num);
        fprintf(fp,"%d %s %ld",i+1,name,num);
    }
    return 0 ;
}