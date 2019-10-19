even or odd number
#include<stdio.h>

 void evenodd(int a)
  {
    int temp;
    temp=a%2;
    if(temp==0);
    {
      printf("the given number is even");
    }
    else
    {
    printf("the given number is odd");
    }
  }
 
void posneg(int a)
{
  if(a>0)
    printf("the given number is positive");
  else if(a<0)
    printf("the given number is negative");
  else
    printf("The number is neither positive nor negative");
}
void main()
{
  int a;
  printf("enter the number to check the given number is even or odd");
  scanf("%d",&a);
  evenodd(a);
  posneg(a);
}
  
 



