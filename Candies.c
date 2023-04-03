#include <stdio.h>

int main(void) {
	int t;
	scanf("%d\n", &t);
	while(t--){
	    int n;
	    scanf("%d\n", &n);
	    int m=2*n;
	    int a[m],count;
	    for(int i=0;i<m;i++){
	        scanf("%d", &a[i]);
	    }
	    for(int i=0;i<m;i++){
	        count=0;
	        for(int j=0;j<m;j++){
	            if(a[j]==a[i]){
	                count++;
	            }
	        }
	        if(count>2){
	            break;
	        }
	    }
	    if(count>2){
	        printf("No\n");
	    }
	    else{
	        printf("Yes\n");
	    }
	   // for(int i=0;i<m;i++){
	   //    printf("%d", a[i]);
	   // }
	   // for(int i=0;i<m;i++){
	   //     printf("%d", b[i]);
	   // }
	}
	return 0;
}

