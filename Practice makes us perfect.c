#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10],i,count=0;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++){
	if(a[i]<10)
	count++;}
	printf("%d\n",4-count);
	return 0;
}

