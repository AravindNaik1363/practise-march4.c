#include <stdio.h>  
struct student  
{  
   char a;  //1byte
   char b;  //1 byte
   int c;  //4 bytes
};  
int main()  
{  
   struct student stud1; // variable declaration of the student type..  
   // Displaying the size of the structure student.  
   printf("The size of the student structure is %d", sizeof(stud1)); //structure padding is done here 
   return 0;  
}  //output=8
