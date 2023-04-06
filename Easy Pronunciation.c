#include <stdio.h>

int main(void) {
	int t, n;
	int flag = 0;
	int count = 0;
	char s[100];
	scanf("%d", &t);
	
	while(t>0){
	    
	    scanf("%d", &n);
	    scanf("%s", s);
	    count = 0;
	    flag = 0;
	    
	    for (int i = 0; i < n; i++) {
	        if(s[i] != 'a' && s[i] != 'e' &&s[i] != 'i'&&s[i] != 'o'&&s[i] != 'u'){
	            count++;
	            if(count == 4){
	                flag = 1;
	                break;
	            }
	        }else{
	            count = 0;
	        }
	    }
	    
	    if(flag == 1){
	        printf("no\n");
	    }
	    else{
	        printf(
	            "yes\n");
	    }
	    
	        
	    
	    
	    t--;
	}
	
	return 0;
}

