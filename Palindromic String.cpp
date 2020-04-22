#include <stdio.h>
#include <string.h>
int main()
{
    char S[100];
    scanf("%s", S);
    int length=strlen(S);
    int flag=0;

    for(int i=0, j=length-1; i<=length/2; i++, j--)
    {
        if(S[i]==S[j])
            continue;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
