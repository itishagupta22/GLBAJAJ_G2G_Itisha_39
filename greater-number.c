 #include <stdio.h>
 int main () 
 {
    int a,b,c;
    printf("enter 3 numbers = ");
    scanf ("%d %d %d",&a,&b,&c);
if (a>b && a>c) {
    printf ("a is greatest");
}
else if ( b>a && b > c ) {
        printf(" The number b is the greatest");
    }
    else {
        printf (" The number c is the greatest");
    }
    return 0;
 }