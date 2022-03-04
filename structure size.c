#include <stdio.h>  
struct student  
{  
   char a;  
   char b;  
   int c;  
};  
int main()  
{  
   struct student stud1; // variable declaration of the student type..  
   // Displaying the size of the structure student.  
   printf("The size of the student structure is %d", sizeof(stud1));  
   return 0;  
}  //output=8
