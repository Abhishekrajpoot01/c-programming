#include<stdio.h>
int fib(int n);
int main()
{
  int n,F,t1,t2;
  
  printf("Enter the terms ");
  scanf("%d",&n);
  printf("The fibonacci terms are 0, 1 %d%d",t1,t2);
  
  F=fib(n);
return 0;
}
int fib(n)
{
  int t1=0,t2=1,tnext,t;
  tnext=t1+t2;
for(int i=3;i<=n;i++)
{
  printf("%d",tnext);
  t1=t2;
  t2=tnext;
  printf("Fibonacci series is %d%d",t1,t2);
}
return (tnext);
}