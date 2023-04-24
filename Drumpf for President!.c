/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int  n,k,count=0;
	    scanf("%d%d",&n,&k);
	    int a[n],b[n];
	    for(int i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	    for(int i=1;i<=n;i++)
	    b[i]=0;
	    for(int i=1;i<=n;i++)
	    b[a[i]]=b[a[i]]+1;
	    for(int i=1;i<=n;i++)
	    if(b[i]>=k && a[i]!=i)
	    count++;
	    printf("%d\n",count);
	}
	return 0;
}

