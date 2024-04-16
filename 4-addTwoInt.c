#include <stdio.h> 
 #include <onio.h> 
int main() 
{ 
    int A, B, sum = 0; 

clrscr();
//-------------------------------------------------------------------------------  
    printf("Enter two numbers A and B : \n"); 
    scanf("%d%d", &A, &B); 
    sum = A+B;
    printf("Sum of A and B is: %d", sum); 
//------------------------------------------------------------------------------  
  getch();
  
  return 0; 
}
