
#include <stdio.h>
#include <string.h>

int main()
{
    char S[10000];
    scanf("%s", S);
    int length=strlen(S);
    int count;

    for(int i=0; i<length; i++)
    {
        count=0;
        for(int j=i; j<length; j++)
        {
            if(S[j]=='2')
                count++;
            if(S[j]=='4')
                count++;
            if(S[j]=='6')
                count++;
            if(S[j]=='8')
                count++;
        }
        if(count>=0)
            printf("%d ", count);
    }
    printf("\n");
    return 0;
}
