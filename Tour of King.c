/* TASLEEM BANU S */
#include <stdio.h>

int main(void)
{
 int T,M,N,a,L;
 
 scanf("%d",&T);
 
 for(a=1;a<=T;a++)
 {
    scanf("%d %d",&N,&M);
    L = (N*5)+(M*7);
    printf("%d\n",L);
 }
	return 0;
}

