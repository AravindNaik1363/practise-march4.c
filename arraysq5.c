#include<stdio.h>
#define n 5
void reverse(int[]);
int main()
{
    int i,arr[n];
    printf("enter elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nbefore reversing elements are:");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    reverse(arr);
    return 0;
}
void reverse(int b[])
{
    int i;
    printf("\nafter reversing elements are:");
    for(i=0;i<n;i++)
    printf("%d",b[4-i]);
}
