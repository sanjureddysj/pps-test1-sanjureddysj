#include<stdio.h>

int input()
{
  int a;
  printf("Enter the Numbers\n");
  scanf("%d", &a);
  return a;
}

int add(int a, int b)
{
  int sum=0;
  sum=a+b;
  return sum;
}

void output(int a, int b, int sum)
{
  printf("The Sum of Two Numbers is %d", sum);
}

int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
}