#include<stdio.h>

void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the points :\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}

float is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int a;
  a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  return a;
}

void output(int a)
{
  if(a==0)
  {
    printf("The points do not form a triangle");
  }
  else
  {
    printf("The points form a traingle");
  }
}

int main()
{
  float x1,y1,x2,y2,x3,y3,area;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(area);
  return 0;
}