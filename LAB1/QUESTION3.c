#include <stdio.h>
#include <stdlib.h>

//QUESTION 3
int main()
{
    float height;
    printf("Enter the height of a person in  :");
    scanf("%f",&height);
    if(height<150){
        printf("The person is dwarf");
    }
    else if(height==150){
        printf("The person is average");
    }
    else if(height>=165){
        printf("The person is tall");

    }
    return 0;
}
