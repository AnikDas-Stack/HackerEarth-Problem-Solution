
#include<stdio.h>

int main()
{
    int t,n,i,A[100003],motu=0,patlu=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        A[0]=0;
        for(i=1; i<=n; i++)
            scanf("%d",&A[i]);
        motu = 1;
        patlu = n;

        while(motu<patlu)
        {
            int temp = 2*A[patlu];
            while(temp!=0 && motu<patlu)
            {
                if(A[motu]>temp)
                {
                    A[motu]-=temp;
                    temp = 0;
                }
                else
                {
                    temp-=A[motu];
                    motu++;
                }
            }
            if(motu>=patlu)
                motu--;
            patlu--;
        }
        if(motu>=patlu)
            patlu--;
        printf("%d %d\n",motu,n-patlu-1);
        if(motu>(n-patlu-1))
        {
            printf("Motu\n");
        }
        else if(motu<(n-patlu-1))
        {
            printf("Patlu\n");
        }
        else
        {
            printf("Tie\n");
        }
    }
    return 0;
}
