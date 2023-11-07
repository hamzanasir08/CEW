#include <stdio.h>
#include <stdlib.h>
//QUESTION 1
int main()
{
   int emp_ID,hours_worked;
   float wage_rate;
   printf("Enter employee ID :");
   scanf("%d",&emp_ID);
   printf("Enter total hours worked in a month :");
   scanf("%d",&hours_worked);
   printf("Enter wage rate :");
   scanf("%f",&wage_rate);
   printf("Total salary of an employee having employee ID %d is %.2f",emp_ID,hours_worked*wage_rate);
    return 0;
}
