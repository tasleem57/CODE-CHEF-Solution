#include <stdio.h>

int main(void) {
	// your code goes here
	int R;
	scanf("%d",&R);
	if(R>=1 && R<=50)
	printf("100");
    else
    if(R>=51 && R<=100)
    printf("50");
    else
    printf("0");
    printf("\n");
	return 0;
}
