/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
    int t,y,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
	if(y>x)
	{
	    printf("PROFIT \n");
	}
	else if (y<x)
	{
	    printf("LOSS \n");
	}
	else
	{
	    printf("NEUTRAL\n");
	}
    }
	return 0;
}

