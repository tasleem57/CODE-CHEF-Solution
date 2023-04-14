/* TASLEEM BANU S */
#include<stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
        switch(c){
	    case '+':
	    printf("%d\n",a+b);
	    break;
	    case '-':
	    printf("%d\n",a-b);
	    break;
	    case '*':
	    printf("%d\n",a*b);
	    break;
	    case '/':
	    printf("%.7f\n",1.0*a/b);
	    break;
	}
	return 0;
}
