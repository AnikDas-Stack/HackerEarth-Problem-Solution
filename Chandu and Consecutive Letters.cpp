#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    char a[50];

    for(int i=1; i<=T; i++)
    {
        scanf("%s", a);
        int length=strlen(a);
        for(int j=0; j<length; j++)
        {
            if(a[j]==a[j+1])
                continue;
            else
                printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}

