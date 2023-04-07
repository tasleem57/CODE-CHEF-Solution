#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    char s[N],c[N];
	    scanf("%s",s);
	     for(int i=0;i<N-1;i+=2)
	    {
	        char temp=s[i];
	            s[i]=s[i+1];
	            s[i+1]=temp;
	            
	    }
	    for(int i=0;i<N;i+=1)
	    {
	        printf("%c",122-(s[i]-97));
	    }
	    printf("\n");

	    
	}
	return 0;
}

