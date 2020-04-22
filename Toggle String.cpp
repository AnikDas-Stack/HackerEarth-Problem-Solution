#include <stdio.h>
#include <string.h>
int main()
{
    char S[101];
    scanf("%s", &S);
    int length=strlen(S);

    for(int i=0; i<length; i++)
    {
        if(S[i]>='A'&&S[i]<='Z')
        {
            S[i]= (int)S[i]+32;
            printf("%c", S[i]);
            continue;
        }
        if(S[i]>='a' && S[i]<='z')
        {
            S[i]= (int)S[i]-32;
            printf("%c", S[i]);
            continue;
        }
    }
    printf("\n");
    return 0;
}
