#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    scanf("%s", s);
    int length = strlen(s);

    for(int i=0; i<=length-1; i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]=='a' || s[i+1]=='a')
                s[i]='b';
            else
                s[i]='a';
        }
    }
    printf("%s\n", s);
    return 0;
}
