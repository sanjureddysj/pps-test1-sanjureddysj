#include<stdio.h>           //Pass by Value

int input()
{
  int a;
  printf("Enter Three Numbers\n");
  scanf("%d", &a);
  return a;
}

int compare(int a, int b, int c)
{
  int large;
  if((a>b)&&(a>c))
  {
    large=a;
  }
  
  else if((b>a)&&(b>c))
  {
    large=b;
  }
  
  else
  {
    large=c;
  }

  return large;

}

void output(int a,int b,int c,int large)
{
  printf("The Largest Number is %d", large);
}

int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=compare(a,b,c);
  output(a,b,c,large);
  return 0;
}