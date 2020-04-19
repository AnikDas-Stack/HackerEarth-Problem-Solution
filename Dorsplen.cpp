#include<stdio.h>

int main(){
    long long int r, g, b, count=0;
    scanf("%lld %lld %lld", &r, &g, &b);
    long long int arr[3]={r, g, b};
    long long int temp;
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    long long int diff = arr[2]-arr[1];

    if(diff%2==0)
    {
        count=diff/2;
        count=count+arr[1];
    }
    else
    {
        count=arr[1]+1;
        count=count+diff/2;
    }

    printf("%lld\n", count);

    return 0;
}
