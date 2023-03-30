#include <stdio.h>
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    long long int N;
	    scanf("%lld",&N);
	    int a[1000000];
	    for(int j=0;j<N;j++){
	        scanf("%d",&a[j]);}
	        
	    int num = findOdd(a, N);
	    if(num==0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}
