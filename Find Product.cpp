#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);

    int ara[N];
    long long int sum=1;

    for(int i=0; i<N; i++)
        scanf("%d", &ara[i]);

    long long int div=pow(10,9)+7;

    for(int i=0; i<N; i++)
    {
        sum=(sum*ara[i])%div;
    }

    printf("%lld\n", sum);
    return 0;
}

