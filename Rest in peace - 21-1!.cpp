#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        long n;
        scanf("%ld", &n);
        int x=0;
        if(n%21!=0)
        {
            long m=n;
            while(m>0)
            {
                long r=m%100;
                if(r==21)
                {
                    printf("The streak is broken!\n");
                    x++;
                    break;
                }
                m=m/10;
            }
            if(x==0)
                printf("The streak lives still in our heart!\n");
        }
        else
            printf("The streak is broken!\n");
    }
    return 0;
}
