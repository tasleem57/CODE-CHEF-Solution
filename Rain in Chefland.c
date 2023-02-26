#include <stdio.h>

int main(void) {
                int i, T, X;
                scanf("%d",&T);
                for(i=1;i<=T;i++)
                {
                    scanf("%d",&X);
                   
                    if(X<3)
                   { printf("LIGHT\n");} 
                    else if((X>=3)&&(X<7))
                   { printf("MODERATE\n");} 
                   else if(X>=7)
                   { printf("HEAVY\n");} 
                    
                        
                    
                    
                 
                }
	// your code goes here
	return 0;
}

