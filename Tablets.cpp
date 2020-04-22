#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ara[N];

    for(int i=0; i<N; i++)
        scanf("%d", &ara[i]);

    long res[N];
    res[0] = 1;

    for(int i=1; i<N; i++)
    {
        if(ara[i-1]<ara[i])
            res[i]=res[i-1]+1;
        else
            res[i] = 1;
    }

    long sum = res[N-1];
    for (int j = N-2; j>=0 ; j--)
    {
        if(ara[j]>ara[j+1] && res[j]<=res[j+1])
        {
            res[j] = res[j+1] + 1;
        }
        sum += res[j];
    }
    printf("%d\n", sum);
    return 0;
}
