#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int a;
        scanf("%d", &a);
        if (a>=30)
        {
            printf("yes \n");
        }
        else
        printf("no \n");
        t--;
    }
	// your code goes here
	return 0;
}

