#include <stdio.h>
#include <stdlib.h>

//QUESTION 2
int main()
{
    float height,width;
    printf("Enter height of Rectangle :");
    scanf("%f",&height);
    printf("Enter width of Rectangle :");
    scanf("%f",&width);
    printf("Perimeter of Rectangle = %.2f UNITS\n",(height+width)*2);
    printf("Area of Rectangle = %.2f SQUARE UNITS",height*width);
    return 0;
}
