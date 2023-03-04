/* TASLEEM BANU S */
#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	int a,b;
    while(t--)
    {
        scanf("%d %d",&a,&b);
        int c=a+b;
        if(c%2==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
	
	return 0;
}

