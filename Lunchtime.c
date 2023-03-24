#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
	    int x;
	    scanf("%d", &x);
	    if(x>=1 && x<=4){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

