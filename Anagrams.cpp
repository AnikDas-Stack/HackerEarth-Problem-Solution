#include <stdio.h>
#include<math.h>
int main(){
     int n;
     scanf("%d",&n);
     while(n--)
     {
         char arr1[10000],arr2[10000];
         scanf("%s",arr1);
         scanf("%s",arr2);
         int arr[26]={0};
         int j=0;
         while(arr1[j]!='\0')
         {
             arr[arr1[j]-'a']++;
             j++;
         }
         int i=0;
         while(arr2[i]!='\0')
         {
             arr[arr2[i]-'a']--;
             i++;
         }
         int sum=0;
         for(int i=0;i<26;i++)
         {
             if(arr[i]<0)
             arr[i]=arr[i]*(-1);
             sum=sum+arr[i];        }
         printf("%d\n",sum);
     }
     return 0;
}
