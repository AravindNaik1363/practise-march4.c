#include <stdio.h>  
#pragma pack(1)//To force compiler to use 1 byte packaging
struct student  
{  
   char a;  //1 byte
   char b;  //1 byte
   int c;  //4 byte
};  
int main()  
{  
   struct student stud1; // variable declaration of the student type..  
   // Displaying the size of the structure student.  
   printf("The size of the student structure is %d", sizeof(stud1));  //because of pragma pack(1),structure size is exactly 1+1+4=6bytes
   return 0;  
}  //output=6
