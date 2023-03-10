/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    // s hide word, t guess word, l=5
	    // right -> G, wrong -> B
	    // string m
	    int i;
	    char a[5], b[5], c[5];
	    scanf("%s", &a);
	    scanf("%s", &b);
	    for(i=0; i<5; i++) {
	        if(a[i]==b[i]) {
	            printf("G");
	        } else{
	            printf("B");
	        }
	    }
	    printf("\n");
	}
	return 0;
}
