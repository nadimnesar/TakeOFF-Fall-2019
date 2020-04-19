#include<stdio.h>
void main()
{
    int n, x;
    scanf("%d", &n);
    if(n<=60)
    {
        printf("gold\n");
    }
    else if(n>60&&n<=120)
    {
        printf("silver\n");
    }
    else if(n>120&&n<=180)
    {
        printf("bronze\n");
    }
}
