#include <stdio.h>
int main()
{
    int N, K, count=0;
    scanf("%d %d", &N, &K);
    int A[N];

    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-1; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        if(A[i]<=K)
        {
            count++;
            K=K-A[i];
        }
        else
            break;
    }
    printf("%d\n", count);
    return 0;
}
