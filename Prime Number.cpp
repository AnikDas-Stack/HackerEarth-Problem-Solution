#include <stdio.h>
int main()
{
    int N, flag;
    scanf("%d", &N);

    for(int i=2; i<N; i++)
    {
        flag=0;
        for(int j=2; j<i; j++)
        {
            if(i%j != 0)
                continue;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ", i);

    }
    printf("\n");
    return 0;
}

