#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    char P[26], F[100000];
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        scanf("%s", P);
        scanf("%s", F);
        int P_length=strlen(P);
        int F_length=strlen(F);

        for(int j=0; j<P_length; j++)
        {
            for(int k=0; k<F_length; k++)
            {
                if(P[j]==F[k])
                    printf("%c", P[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
