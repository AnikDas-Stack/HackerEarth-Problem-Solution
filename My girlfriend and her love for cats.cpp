#include <stdio.h>
int main()
{
    long int n, temp;
    long long int sum;
    scanf("%ld", &n);

    long int s[n], c[n];

    for(int i=0; i<n; i++)
        scanf("%ld", &s[i]);

    for(int i=0; i<n; i++)
        scanf("%ld", &c[i]);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(s[j]<s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
            if(c[j]<c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }

    sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=(c[i]*s[i]);
    }
    printf("%lld\n", sum);
    return 0;
}
