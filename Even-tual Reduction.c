/* TASLEEM BANU S */
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,c,flag=0;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    for(int i=0;i<n && n%2==0;i++)
	    {
	        c=0;
	        for(int j=0;j<n;j++)
	        {
	            if(s[i]==s[j])
	                c+=1;
	        }
	        if(c%2==0)
	            flag=1;
	        else{
	            flag=0; 
	            break;
	        }
	    }
	    if(flag==1)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}	return 0;
}

