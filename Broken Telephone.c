#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,count=0;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	         scanf("%d",&a[i]);
	    }
	    if(a[0]!=a[1])
	    count++;
	    if(a[n-1]!=a[n-2])
	    count++;
	    for(int i=1;i<n-1;i++)
	    {
	        if(a[i]!=a[i-1] || a[i]!=a[i+1])
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
