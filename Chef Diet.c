/* TASLEEM BANU S */
#include<stdio.h>
int main()
{
    int t,n,k,i,j;
    int s[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
      int sum=0,sum1=0;
        scanf("%d %d",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&s[j]);
        }
        for(j=0;j<n;j++){
            sum=sum+s[j]-k;
            if(sum<0){
                break;
            }
        }
        if(sum>=0){
            printf("YES\n");

        }
        else
        {
            printf("NO %d\n",j+1);
        }
    }
    return 0;
}
