#include <stdio.h>

int main(void) {
	int i,t,n,k,count,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{ scanf("%d%d",&n,&k);
	   int a[n];
	   count=0;
	    for(i=0;i<n;i++)
	   {
	   
	       scanf("%d",&a[i]);
	    if (a[i]>k)
	    count++;
	    
	  
	    
	}
	  printf("%d\n",count);
	}
	return 0;
}

