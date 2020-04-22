#include <stdio.h>
int main()
{
    int N, T, low, high,time, arra[100003];
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        scanf("%d", &N);
        arra[0]=0;
        for(int j=1; j<=N; j++)
        {
            scanf("%d", &arra[j]);
        }
        low=1, high=N;
        while(low<high)
        {
            time=arra[high]*2;
            while(time!=0 && low<high)
            {
                if(time>arra[low])
                {
                    time-=arra[low];
                    low++;
                }
                else
                {
                    arra[low]-=time;
                    time=0;
                }

            }
            if(low>=high)
                low--;
            high--;
        }
        if(low>=high)
            high--;
        printf("%d %d\n", low, N-high-1);
    }
    return 0;
}
