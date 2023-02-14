/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
	    int n,x,y;
	    scanf("%d%d%d", &n,&x,&y);
	    if(n>= (x*1) + (y*2)){
	        printf("Yes\n");
	    }
	    else {
	        printf("No\n");
	    }
	    
	}
	return 0;
}

