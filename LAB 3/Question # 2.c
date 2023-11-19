//2. Write a program in C to print a string in reverse using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[]="HAMZA";
    char*ptr=string;
    printf("The reverse string is: ");
    for (int i=strlen(ptr);i>=0;i--){
        printf("%c",*(ptr+(i-1)));
    }
}
