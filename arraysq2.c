#include <stdio.h>
#define N 10//defining macro
int main()
{
    int i;
    char arr[N]={'a','b','c','d','e','Q','W','E','R','U'};//macro replaced
    for(i=0;i<N;i++)//macro replaced
    {
        if(arr[i]=='a' || arr[i]=='A' || arr[i]=='e' ||arr[i]=='E' ||arr[i]=='i' ||arr[i]=='I' ||arr[i]=='o' ||arr[i]=='O' ||
            arr[i]=='u' ||arr[i]=='U')//checking for vowel condition
        {
            printf("\nvowel is:%c",arr[i]);
            printf("\nLocation is:%d",i);
            printf("\naddress is:%p",&arr[i]);
        }
    }
    return 0;
}
