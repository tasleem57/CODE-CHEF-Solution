/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d", &t);
	
	int x,y,z;
	
	while(t--)
	{
	    scanf("%d %d %d", &x, &y, &z);
	    printf("%d \n", x-y+z);
	}
	
	return 0;
}

