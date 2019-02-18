even or odd number
#include 
main()
{
  int a,temp;
  printf("enter the number to check the given number is even or odd");
  scanf("%d",&a);
  temp=a/2;
  if(temp==0);
   {
    printf("the given number is even");
   }
   else
   {
    printf("the given number is odd");
    }
  
}

postive or negative number
#include<stdio.h>
main()
{
  int a,b;
  printf("enter the number");
  scanf("%d",&a);
  if(a<0)
  {
    printf("the given number is negative");
  }
  else
  {
    printf("the given number is positive");
  }
}

sum
#include<stdio.h>
main()
{
  int a,b,sum;
  printf("enter the number for a");
  scanf("%d",&a);
  printf("enter the number for b");
  scanf("%d",&b);
  sum=a+b;
  printf("the sum of the two number is equal=%d",sum);
}

