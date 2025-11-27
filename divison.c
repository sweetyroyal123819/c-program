#include<stdio.h>
int main()
{
    int dividend,divisor,quotient,remainder;
    printf("enter a dividend");
    scanf("%d",&dividend);
    printf("enter a divisor");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("quotient=%d\n",quotient);
    printf("remainder=%d,remainder");
    return 0;
}
