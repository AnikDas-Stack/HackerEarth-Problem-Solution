#include<stdio.h>
int main()
{
    long int T, X;
    scanf("%ld",&T);

    for(int i=1; i<=T; i++)
    {
        scanf("%ld",&X);

        if(X==1)
            printf("-1\n");

        else if(X==8)
            printf("2\n");

        else
        {
            if(X%7==0)
                printf("%ld\n",X/7);

            else if(X%7==2 || X%7==3 || X%7==5)
                printf("%ld\n",X/7+1);

            else if(X%7==4 || X%7==6)
                printf("%ld\n",X/7+2);

            else
                printf("%ld\n",(X/7-1)+2);
        }
    }
    return 0;
}
