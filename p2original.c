#include<stdio.h>
int input()
{
  int num;
  printf("enter the numbers:\n");
  scanf("%d",&num);
  return 0;
}

int cmp(int a,int b,int c)
{
  if (a>b && a>c)
  {
    large=a;
  }
  else if (b>c)
  {
    large=b;
  }
  else 
  {
    large=c;
  }
  return large;
}

void output(int largest)
{
 printf("%d is the result among them \n",largest); 
}

int main
{
  int x,y,z,result;
  x=input();
  y=input();
  z=input();
  result=cmp(x,y,z);
  output(result);
  return 0;
}



















