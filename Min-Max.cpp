#include <stdio.h>

void swap(long long int* a, long long int* b)
{
    long long int t = *a;
    *a = *b;
    *b = t;
}

int partition (long long int arr[], int low, int high)
{
    long long int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(long long int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    long int N;
    scanf("%ld", &N);
    long long int ara[N], temp;

    for(int i=0; i<N; i++)
        scanf("%lld", &ara[i]);
    quickSort(ara, 0, N-1);

    long long int max=0, min=0;

    for(int i=1; i<N; i++)
        max=max+ara[i];

    for(int i=0; i<N-1; i++)
        min=min+ara[i];

    printf("%lld %lld\n", min, max);
    return 0;
}
