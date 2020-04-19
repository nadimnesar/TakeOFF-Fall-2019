#include <stdio.h>
#include <string.h>
void main()
{
    int N, i, j;
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        int c;
        scanf("%d", &c);
        char S1[c+1], S2[c+1];
        scanf("%s", &S1);
        scanf("%s", &S2);
        for (j=0; j<c; j++)
        {
            if (S1[j]>='A' && S1[j]<='Z')
            {
                S1[j]=S1[j]+32;
            }
            if (S2[j]>='A' && S2[j]<='Z')
            {
                S2[j]=S2[j]+32;
            }
        }
        if(!strcmp(S1, S2)) printf("Case %d: vai problem solve hoy na\n", i);
        else printf("Case %d: table e boisha thak solve hobe\n", i);
    }
}

