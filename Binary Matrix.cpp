#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N, M,power, index;
    double sum, Max;
    scanf("%d %d", &N, &M);
    int ara[N][M];
    char s[M];


    for(int i=0; i<N; i++)
    {
        scanf("%s", s);
        for(int j=0; j<M; j++)
        {
            ara[i][j]=s[j];
        }
    }
    index=0;
    Max=-1;
    for(int i=0; i<N; i++)
    {
        sum=0.00;
        power=M;
        for(int j=0; j<M; j++)
        {
            power--;
            sum+=ara[i][j]*(pow(2,power));
        }
        if(sum>Max)
        {
            Max=sum;
            index=i+1;
        }
    }
    printf("%d\n", index);
    return 0;
}
