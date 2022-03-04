#include <stdio.h>
int main()
{
    int i,j=0;
    char arr[5]={'a','b','c','d','e'};//method 1 of array declaration
    printf("%p",arr);
    char a[]={'q','w','e','r','t','y'};//method 2 of array declaration
    int b[5]={10,20,};//method3
    int c[10]={0};//method 4
    printf("\naddresses of elements using for loop:");
    for(i=0;i<5;i++)
    {
        printf("\n%c",a[i] );
        printf("\n%p",&a[i] );
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",b[i] );
        printf("\t%p",&b[i] );
    }
    printf("\n\naddress without loops:" );
    printf("\n%p",&arr[0] );
    printf("\n%p",&arr[1] );
    printf("\n%p",&arr[2] );
    printf("\n%p",arr+3 );
    printf("\n%p",arr+4 );
    while(j<5)//printing elemnts using while loop
    {
        printf("\n%c",a[j]);
        j++;
    }
    
    

    return 0;
}

