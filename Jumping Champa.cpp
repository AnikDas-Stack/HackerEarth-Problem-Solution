#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        int N, Q;
        scanf("%d %d", &N, &Q);
        long long int ara[N], sum;

        for(int j=0; j<N; j++)
        {
            scanf("%lld", &ara[j]);
        }
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N-1; j++)
            {
                if(ara[j]>ara[j+1])
                {
                    int temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }
        sum=0;
        for(int j=N-1; j>0; j--)
        {
            sum=sum+Q*(ara[j]-ara[j-1]);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
