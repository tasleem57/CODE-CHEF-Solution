#include <stdio.h>

int main(void) {
	// your code goes here
	int N;             //N = no. of new users
	printf(" ");
	scanf("%d",&N);
	
	if((N>=2) && (N<=1000))
	{
	    int A;     // A= users who didn't make submission
	    printf(" ");
	    scanf("%d",&A);
	    
	    if((A>=1) && (A<=1000))
	    {
	       int B;  // B= users who made a submission but got all wrong
	       printf(" ");
	       scanf("%d",&B);
	       
	       if((B>=1) && (B<=1000))
	       {
	           int C;  
	           C=A+B;  // Done to check whether A and B do not exceed the No. of users i.e N
	           
	           if(C<=N)
	           {
	               printf("%d\t",N-A);
	               printf("%d",N-C);
	           }
	       }
	     
	    }
	}
	    return 0;
}
	    
