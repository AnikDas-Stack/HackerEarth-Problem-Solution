#include <stdio.h>
#include <string.h>
int main()
{
    int T, suvo, suvojit;
    char s[150];
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        scanf("%s", s);
        int length=strlen(s);
        suvo=0, suvojit=0;

        for(int j=0; j<length; j++)
        {
            if(s[j]=='S')
            {
                if(s[j+1]=='U'&&s[j+2]=='V'&&s[j+3]=='O')
                {

                    if(s[j+4]=='J'&&s[j+5]=='I'&&s[j+6]=='T')
                    {
                        suvojit++;
                        j=j+6;
                        continue;
                    }
                    else
                    {
                        suvo++;
                        j=j+3;
                        continue;
                    }
                }
            }
            else
                continue;
        }
        printf("SUVO = %d, SUVOJIT = %d\n", suvo, suvojit);
    }
    return 0;
}
