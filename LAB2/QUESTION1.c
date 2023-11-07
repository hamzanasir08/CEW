//Q1. Write a C program to display the first n odd natural numbers and their sum using for, while and do-while loop.
int main()
{
    int n;
    int sum=0;
    printf("ENTER VALUE OF N :");
    scanf("%d",&n);

    // Using for loop:
    for(int a=0;a<n+1;a++){
            printf(" %d ",2*a+1);
            sum=sum+2*a+1;

    }
    printf("\nSUM OF N ODD NUMBERS IS %d\n",sum);

    //Using while loop:
    int b=0;
    int sum2=0;
    while (b<n+1){
        printf(" %d ",2*b+1);
        sum2+=2*b+1;
        b++;
    }
    printf("\nSUM OF N ODD NUMBERS IS %d\n",sum2);

    //Using do-while loop:
    int c=0;
    int sum3=0;
    do{
        printf(" %d ",2*c+1);
        sum3+=2*c+1;
        c++;
    }while(c<n+1);
    printf("\nSUM OF N ODD NUMBERS IS %d",sum3);
}
