#include <stdio.h>
#include <string.h>
int main()
{
    int T, num, length;
    scanf("%d", &T);
    char s[100000];

    for(int i=1; i<=T; i++)
    {
        scanf("%s", s);
        length = strlen(s);
        num=0;

        for(int j=0; j<length; j++)
        {
            if(s[j]=='A'|| s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'||s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                num=num+1;
        }
        printf("%d\n", num);
    }
    return 0;
}
