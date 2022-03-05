#include<stdio.h>
int input()
{
  int n;
  printf("Enter the serial number \n");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  int i,n1=0,n2=1,n3;
  for(i=2;i<n;++i)
    {
      n3=n1+n2;
      n1=n2;
      n2=n3;
    } 
   return n2;
}

void output(int n,int f)
{
  printf("The fibonacci sequence of %d is:- %d \n",n,f);
}

int main()
{
  int n,z,fibo;
  n=input();
  z=find_fibo(n);
  output(n,z);
  return 0;
}