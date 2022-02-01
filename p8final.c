#include<math.h>
#include <stdio.h>

float input()
{
  int n;
  printf("Enter the Number\n");
  scanf("%d",&n);
  return n;
}

float my_sqrt(float n)
{
  float root;
  root=sqrt(n);
}

void output(float n,float sqrt_result)
{
  float result;
  printf("The Sqaure root of %f is %f", n, result);
}

float main()
{
  float n, result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}