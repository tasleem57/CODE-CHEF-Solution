#include <stdio.h>
int main(void) {
int n;
scanf("%d",&n);
while(n--){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    printf("YES\n");
    else
    printf("NO\n");
}    
	return 0;
}

