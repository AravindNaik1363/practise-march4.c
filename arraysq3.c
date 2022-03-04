#include <stdio.h>
void sort(int [],int);//function declaration
int main()
{
    int arr[10],i,N;
    printf("how many elements in array:");
    scanf("%d",&N);
    printf("enter elements of array:");
    for(i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);  
    }
    printf("elements of array are:");
    for(i=0;i<N;i++)
    {
      printf("\t%d",arr[i]);  
    }
    sort(arr,N);//function call
    printf("\nafter sorting in descending order:");
    for(i=0;i<N;i++)
    printf("\t%d",arr[i]);//printing elements in descending order
    
    return 0;
}
void sort(int b[],int N)//function definition
    {
        int i,j,temp;
        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++)
            {
                if(b[i]<b[j])//sorting 
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
    }
