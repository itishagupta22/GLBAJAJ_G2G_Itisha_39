#include <stdio.h>
int main ()
{
 int a,b,c;
 printf ("Enter the dimenions of the three sides of the triangle");
 scanf ("%d%d%d",&a,&b,&c);

  if( a+b>c && b+c>a && a+c>b ) {
 if (a==b && a==c) {
    printf ("The triangle with the entered dimensions is an equilateral triangle!");
 }
  else if ( a==b || b==c || c==a ) {
  printf ("The triangle is an isoceles triangle");
  }
 else {
 printf ("the triangle is scalene ");
 }
}
  else 
  printf (" entered dimesnsion is incorrect");
 return 0;
 
}