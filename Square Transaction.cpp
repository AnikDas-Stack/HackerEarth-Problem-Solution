#include <stdio.h>
int main()
{
    long long int T, Q, sum;
    int j;
    scanf("%lld", &T);
    long long int tran[T];

    for(int i=1; i<=T; i++)
        scanf("%lld", &tran[i]);

    scanf("%lld", &Q);
    long long int query[Q];
    for(int i=1; i<=Q; i++)
        scanf("%lld", &query[i]);

    for(int i=1; i<=Q; i++)
    {
        sum=tran[1];
        int flag=0;
        for(j=1; j<=T; j++)
        {
            if(query[i]<=sum)
            {
                flag=1;
                break;
            }
            else{
                sum=sum+tran[j+1];
            }
        }
        if(flag==1)
            printf("%d\n", j);
        else
            printf("-1\n");
    }
    return 0;
}
