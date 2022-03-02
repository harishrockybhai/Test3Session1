#include<stdio.h>
typedef struct _fraction
{
int num,den;
}Fraction;

Fraction input_fraction()
{
  Fraction a;
  printf("enter the numbers of num and den :");
  scanf("%d %d",&a.num,&a.den);
  return a;
  }

Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  if(f1>f2)
  {
    if(f1>f3)
    {
      return f1;
    }
    else
    {
      return f3;
    }
  }
  else
  {
    if(f2>f3)
    {
      return f2;
    }
    else
    {
      return f3;
    }
  }
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  largest =Largest_fraction(f1,f2,f3)
 printf("the largest among the three is %d",a.num,a.den);

}
int main()
{
  Fraction f1,f2,f3,largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest =Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
}