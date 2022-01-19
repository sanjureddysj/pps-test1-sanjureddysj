#include<stdio.h>

void input(int *a,int *b)
{
  printf("Enter the Numbers\n");
  scanf("%d %d", a,b);
}

void add(int a,int b,int *sum)
{
  *sum=a+b;
}

void output(int a,int b,int sum)
{
  printf("The Sum of Numbers is %d", sum);
}

int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}