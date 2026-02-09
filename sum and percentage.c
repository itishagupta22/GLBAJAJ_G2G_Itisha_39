# include <stdio.h>
int main ()
{
    int a,b,c,d,e,sum;
    float per;
    printf("Enter the marks of 5 subjects \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    per = sum/5.0;
    printf("the sum of the marks is - %d and the percentage is - %.2f",sum,per);
    return 0;
}
