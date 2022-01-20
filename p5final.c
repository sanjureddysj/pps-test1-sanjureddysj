#include<stdio.h>                   //Pass by Reference 

void input(int *a,int *b, int *c)
{
  printf("Enter Three Numbers\n");
  scanf("%d %d %d", a,b,c);
}

void compare(int a, int b, int c, int *large)
{
  if (a>b && a>c)
  {
    *large=a;
  }

  else if (b>a && b>c)
  {
    *large=b;
  }

  else
  {
    *large=c;
  }
}

void output(int a, int b, int c, int large)
{
  printf("The Largest Number is %d", large);
}

int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  compare(a,b,c,&large);
  output(a,b,c,large);
  return 0;
}