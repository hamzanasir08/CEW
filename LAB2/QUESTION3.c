//Q3. Write a C program to compare two strings without using string library functions.
int main()
{
    char str1[]="hamza";
    char str2[]="nasir";
    int a=0;
    int sum=0;
    while(a<5){
        if(str1[a]==str2[a]){
            sum++;
        }
        else{
           printf("Strings are non-indentical!");
           a++;
           break;
        }
        a++;
        }
    if (a==sum){
        printf("Strings are identical!");
    }
}
