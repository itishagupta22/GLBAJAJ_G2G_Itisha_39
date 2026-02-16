# include <stdio.h>
int main ()
{
    int a;
    printf("enter a number = ");
    scanf("%d",&a);
    if (a>0 ) {
        printf(" The number is positive");
    }
     else if (a<0 ) {
        printf(" The number is negative");
    }
    else {
        printf("The number is 0 ");
    }
    return 0;
}
