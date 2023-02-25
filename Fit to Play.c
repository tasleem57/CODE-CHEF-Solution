/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
	    long int n;
	    scanf("%ld",&n);
	    long int A[n];
	    for(long int i=0;i<n;i++){
	        scanf("%ld",&A[i]);
	    }
	    long int a=A[1]-A[0],b=A[0];
	    for(long int i=0;i<n;i++){
	        if(A[i]>b){
	            if(A[i]-b>a){
	                a=A[i]-b;
	            }
	        }
	        else{
	            b=A[i];
	        }
	    }
	    if(a<=0||n<2){
	        printf("UNFIT\n");
	    }
	    else{
	        printf("%ld\n",a);
	    }
	}
	return 0;
}
