#include <stdio.h>
int main ()
{
    float radius,area,circumference;
    
    printf("Enter the radius of the circle");
    scanf("%f",&radius);

    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;

    printf ("The area okf the circle is %.2f and the circumference is %.2f",area, circumference);
    return 0;
}