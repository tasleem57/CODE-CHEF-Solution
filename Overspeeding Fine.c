#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int a;
	    scanf("%d",&a);
	    
	    if(a<=70)
	        printf("0\n");
	    else if(a>70 && a<=100)
	        printf("500\n");
	    else
	        printf("2000\n");
	    
	        
	}
	return 0;
}

