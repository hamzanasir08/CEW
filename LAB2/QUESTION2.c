//Q2. Write a C program to make the following pattern as a pyramid with an asterisk.

//   *
//  * *
// * * *
//* * * *

int main()
{
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    int stars=1;

    for(int i=n;i>=1;i--)
        {

        for (int k=n-1;k>=1;k--)
        {   printf(" ");
        }

        for(int j=1;j<=stars;j++){
            printf("* ");
            }
        stars++;
        n--;
        printf("\n");
        }
}

