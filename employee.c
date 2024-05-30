#include<stdio.h>
#define n 2
struct employee
    {
        char name[50];
        char address[50];
        long int num;
        int sal;
    };
struct organization 
{
    char name[50];
    char address[50];
    struct employee emp[n];
};

int main(){
    int i;
    struct organization o;
    {
    printf("Enter Organization Name : ");
    scanf("%s",o.name);
    printf("Enter The address of the organization : ");
    scanf("%s",o.address);
    printf("\n");
        for ( i = 0; i < n; i++)
        {
            printf("Enter the name of the employee  : ");
            scanf("%s",o.emp[i].name);
            printf("Enter The Adress of the employee : ");
            scanf("%s",o.emp[i].address);
            printf("Enter Contact number : ");
            scanf("%ld",o.emp[i].num);
            printf("Enter Your salary (In Npr) : ");
            scanf("%d",o.emp[i].sal);
        }

    printf("\n");
    printf("%s\n",o.name);
    printf("%s\n\n",o.address);
    printf("EMPLOYEE DETAILS");
    printf("\n");
    printf("\n");
        for ( i = 0; i < n; i++)
        {
            printf("Employee %d\n.",&i);
            printf("Name : %s\n",o.emp[i].name);
            printf("Address : %s\n",o.emp[i].address);
            printf("Contact no : %ld\n",o.emp[i].num);
            printf("Salary : %d\n",o.emp[i].sal);
            printf("\n\n");
        }
    printf("!!!!!!!!!! THAT'S ALL !!!!!!!!\n\n");
return 0 ;
}
}