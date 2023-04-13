#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,b,yes=0;
	    scanf("%d %d",&n,&b);
	    for(int i=0;i<n;i++)
	    {
	        int w,h,p;
	        scanf("%d %d %d",&w,&h,&p);
	        if(p<=b && yes<w*h)
	            yes=w*h;
	    }
	    if(yes!=0)
	        printf("%d\n",yes);
        else
            printf("no tablet\n");
	}	return 0;
}

