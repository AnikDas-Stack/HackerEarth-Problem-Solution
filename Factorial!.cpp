#include <stdio.h>
int sum=0;

int factorial(int N)
{
    if(N==0)
        return 1;
    else
        sum=N*factorial(N-1);
    return sum;

}
int main()
{
    int N;
    scanf("%d", &N);

    int fact=factorial(N);
    printf("%d\n", fact);
    return 0;
}
