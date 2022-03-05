#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i,count=0;
  for(i=2;i<=n;i++)
    {
      if(n%i==0)
      {
        count++;
      }
      
    }
  return count;
}
void output(int n,int count)
{
  if(count==1)
    printf("%d is a  prime number",n);
  else
  printf("%d is not a prime number",n);
}
int main()
{
  int n,x;
  n=input_number();
  x=is_prime(n);
  output(n,x);
  return 0;
}