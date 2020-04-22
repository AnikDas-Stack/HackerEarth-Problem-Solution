#include <stdio.h>
int main()
{
    int N, L, W, H;
    scanf("%d %d", &L, &N);

    for(int i=1; i<=N; i++)
    {
        scanf("%d %d", &W, &H);

        if(W<L || H<L)
        {
            printf("UPLOAD ANOTHER\n");
            continue;
        }

        else if(W==H)
        {
            printf("ACCEPTED\n");
            continue;
        }
        else
        {
            printf("CROP IT\n");
            continue;
        }
    }
    return 0;
}
