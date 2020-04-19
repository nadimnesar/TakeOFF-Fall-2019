#include<stdio.h>
void main()
{
    long long int n, x;
    double bc, y;
    scanf("%lld %lld", &n, &x);
    y=n/2.00;
    bc=(double)y/x;
    printf("%.2lf\n", bc);
}
