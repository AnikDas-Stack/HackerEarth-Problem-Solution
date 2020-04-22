#include<stdio.h>
int main()
{
    int T;
    double R,G,result,temp;
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%lf %lf",&R,&G);

        if(R==0 || G==0)
            printf("1.000000\n");

        else
        {
            temp=1;
            result=R/(R+G);
            for(G=G; G>1; G-=2)
            {
                temp=temp*(G/(R+G))*(G-1)/(R+G-1);
                result+=(temp*(R/(R+G-2)));
            }
            printf("%0.6f\n",result);
        }
    }
    return 0;
}
