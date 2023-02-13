#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    int x,y;
    while(t--)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",y-x);
    }
	return 0;
}

