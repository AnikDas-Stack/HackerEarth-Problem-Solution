#include<stdio.h>
int main()
{
    long int T;
    scanf("%lld\n",&T);
    while(T--)
    {
        double N,A,B,S,L,i;
        scanf("%lf %lf %lf",&N,&A,&B);
        if(A<B)
        {
            S=A;
            L=B;
        }
        else
        {
            S=B;
            L=A;
        }
        i=(S*N)/(S+L);
        long int x= i+.5;
        long int MC=L*x*x+(S*(N-x)*(N-x));
        printf("%ld\n",MC);
    }
    return 0;
}
