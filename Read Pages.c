#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	int N,X,Y;
	while(T>0){
    	
    	scanf("%d",&N);
    	scanf("%d",&X);
    	scanf("%d",&Y);
    	if(N<=(X*Y)){
    	    printf("YES\n");
    	}
    	else{
    	    printf("NO\n");
    	}
    	T--;
    	
	}
   
    return 0;
}

