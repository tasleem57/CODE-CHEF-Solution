#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
  scanf("%d", &t);
  for(int i=1;i<=t;i++){
	int x,y,z;
	scanf("%d%d%d", &x,&y,&z);
	if(x+y ==z){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
  }
	return 0;
}

