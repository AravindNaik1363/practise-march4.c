#include <stdio.h>
#define SIZE 5
int sec_lar(int arr[],int n);
int main(){
    int arr[SIZE],n,i;
    printf("enter the elements:");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);//      45  23  9     18      145
    }
    printf("\n2nd largest element is:%d",sec_lar(arr,n));
    //return sec_lar(arr,n);
    return 0;
   
}
int sec_lar(int arr[],int n)
{
    int i,l=0,s=0;
    for(i=0;i<SIZE;i++) // i=0  0<5     1<5                                 2<5                     3<5                 4<5
    { 
        if(arr[i]>l)    //if(45>0)TRUE  (23>45)FALSE--> go to line 25       9>45 false->go line 25  18>45->line25   145>45
        {
            s=l;        //s=0                                                                                       s=45
            l=arr[i];   //l=45                                                                                      l=145
        }
        else if(arr[i]>s)               //(23>0)true                        9>23false->line18       18>23->line18
        {
            s=arr[i];                   //s=23
        }
    }
    //printf("%d",s);
    return s;//function returns integer s=45 as 2nd largest value
}
