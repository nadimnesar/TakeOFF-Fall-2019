#include<stdio.h>
void main()
{
    int n, i, j=0;
    scanf("%d", &n);
    int G[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &G[i]);
    }
    for (i=0; i<n; i++)
    {
        if(G[i]==0)
        {
            j++;
        }
    }
    if(j==0||n==1) printf("Beriye jao, beyadob kothakar!\n");
    else printf("Solution Achhe Habibi!\n");
}

