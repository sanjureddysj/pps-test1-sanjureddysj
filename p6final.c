#include<stdio.h>

int input()
{
  int n;
  printf("Enter n:");
  scanf("%d", &n);
  return n;
}

int add(int n)
{
  int i, sum=0;
  for(i=0;i<n;i++);
  {
    sum=sum+i;
  }
  return sum;
}

void output(int n, int sum)
{
  printf("The sum of %d numbers is %d", n, sum);
}

int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(n,sum);
  return 0;
}
