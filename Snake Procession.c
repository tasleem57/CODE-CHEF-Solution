#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n, x=0, y=0, i;
	    scanf("%d", &n);
	    char a[n];
	    scanf("%s", a);
	    for(i=0;a[i]!='\0';i++) {
	        if(x==0 && a[i]=='T')
	            break;
	        else if((x==0 && a[i]=='H') || ( y==1 && a[i]=='H')) {
	            x++;
	            y=0;
	        }
	        else if(x==1 && a[i]=='T') {
	            y++;
	            x=0;
	        }
	        else if(x==1 && a[i]=='H')
	            break;
	        
	    }
	    if(i<n)
	        printf("Invalid\n");
	    else if(x>=1)
	        printf("Invalid\n");
	    else
	        printf("Valid\n");
	}
	return 0;
}

