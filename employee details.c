#include<stdio.h>
struct employee
{
    int number,age,salary;
    char name[25];
}emp[100];
 
int main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name , number , age , salary by leaving a line\n");
    for(i=0;i<n;i++)
    {
        scanf("%s\n %d\n %d\n %d\n",emp[i].name,&emp[i].number,&emp[i].age,&emp[i].salary);
    }
    printf("\nEMP_NAME\tEMP_NUMBER\tEMP_AGE\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].number,emp[i].age,emp[i].salary);
    }
    return 0;
   
}
