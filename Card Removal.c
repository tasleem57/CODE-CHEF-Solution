#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	    for(int i=0;i<n;i++)
	    {
	        int c=0;
	        for(int j=0;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	                c+=1;
	        }
	        if(x<c)
	            x=c;
	    }
	    printf("%d\n",n-x);
	}	return 0;
}

