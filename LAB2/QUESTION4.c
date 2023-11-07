//Q4. Write a C program to read a sentence and replace lowercase characters with uppercase and vice versa.
#include<string.h>
int main()
{
    char sentence[]="My name is Hamza";
    for (int i=0;i<strlen(sentence);i++){
        if (sentence[i]>='a' && sentence[i]<='z'){
            sentence[i]=sentence[i]-32;
        }
        else if (sentence[i]>='A' && sentence[i]<='Z'){
            sentence[i]=sentence[i]+32;
        }
    }
    printf("Your sentence after modification looks like this:\n %s",sentence);
}
