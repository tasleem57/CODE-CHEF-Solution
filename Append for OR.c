/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,n=-1;
	    scanf("%d%d",&x,&y);
	    int z[x],Or=0;
	    int i;
	    for(i=0;i<x;i++){
	        scanf("%d",&z[i]);
	    }
	    for(i=0;i<x;i++)
	        Or=Or|z[i];
	        for(i=0;i<=y;i++)
	        if((Or|i)==y){
	            n=i;
	            break;
	        }
	        printf("%d\n",n);
	    
	}
	return 0;
}
