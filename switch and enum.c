#include<stdio.h>
#define pi 3.14
#define area_rectangle(l,b) l*b
#define area_circle(pi,r) pi*r*r
#define area_square(s) s*s

int main()
{
    enum area{rectangle=1,circle,square};
    enum area i;
    printf("enter 1 to find rectangle area: \n enter 2 to find circle area:\n enter 3 to find square area");
    scanf("%d",&i);
    switch(i)
    {
        case rectangle:
            printf("area of rectangle is:%d\n",area_rectangle(10,20));
            break;
        case circle:
            printf("area of circle is:%f\n",area_circle(pi,3));
            break;
        case square:
            printf("area of square is:%d\n",area_square(10));
            break;
    }
    
    
}
