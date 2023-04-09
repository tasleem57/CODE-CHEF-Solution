/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            printf("%d\n",(n/2)+1);
        }
        else {
            printf("%d\n",(n+1)/2);
        }
    }
	
	return 0;
}

