#include<stdio.h>
int main()
{
	int v,c,f,p,i,n,j,flag=0;
	int sumv,sumc,sumf,sump;
	scanf("%d %d %d %d %d",&v,&c,&f,&p,&n);
	int arr[n][4];
	for(i=0;i<n;i++)
	scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
	for(i=0;i<(1<<n);i++)
	{
		sumv=sumc=sumf=sump=0;
		for(j=0;j<n;j++)
		if(i & (1<<j))
		{
			sumv+=arr[j][0];
			sumc+=arr[j][1];
			sumf+=arr[j][2];
			sump+=arr[j][3];
		}
		if(sumv==v && sumc==c && sumf==f && sump==p)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
