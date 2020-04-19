#include <stdio.h>
#include <string.h>
int main()
{
    int i, N, X, guest, arms, backs, seats, structure, sofa, j, smallest;
    char S[11];
    scanf("%d", &N);
    for (j=1; j<=N; j++)
    {
        scanf("%d", &guest);
        for (i=0; i<4; i++)
        {
            scanf("%s %d", S, &X);
            if(!strcmp(S, "Arms"))
                arms=X/2;
            if(!strcmp(S, "Backs"))
                backs=X/2;
            if(!strcmp(S, "Seats"))
                seats=X/2;
            if(!strcmp(S, "Structure"))
                structure=X/1;
        }

        if(arms<=backs && arms<=seats && arms<=structure)
            smallest=arms;
        else if(backs<=arms&&backs<=seats&&backs<=structure)
            smallest=backs;
        else if(seats<=arms&&seats<=backs&&seats<=structure)
            smallest=seats;
        else
            smallest=structure;

        if(smallest*2>=guest)
            printf("Case %d: Carry On!\n\n", j);
        else
            printf("Case %d: Abort! Abort!\n\n", j);
    }
    return 0;
}
