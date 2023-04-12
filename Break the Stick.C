#include <stdio.h>
int main(void) {
	long int n,a,b;
	scanf("%ld",&n);
	while(n--)
	   scanf("%ld %ld",&a,&b),printf("%s\n",((b%2!=0)||(b%2==0&&((a-b)%2)==0))?"YES":"NO");
}

