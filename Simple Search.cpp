#include <stdio.h>
int main()
{
    int N, K;
    scanf("%d", &N);
    int ara[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &K);

    for(int i=0; i<N; i++)
    {
        if(ara[i]==K)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
