#include<stdio.h>
#include<stdlib.h>
//QUESTION 5

int fibonacci_series(num_of_terms)
{   int x=1,y=1,z,n=num_of_terms;
    int i;
    printf(" %d "" %d ",x,y);
    for(i=3;i<n+1;i++){
        z=x+y;
        x=y;
        y=z;
        printf(" %d ",z);
        }
}

int main()
{   int n;
    printf("Enter no.of terms of fibonacci series:");
    scanf("%d",&n);
    fibonacci_series(n);

}
