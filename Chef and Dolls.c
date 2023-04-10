#include <stdio.h>

int main(void) {
    
    int T;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        long long int N;
        scanf("%lld",&N);
        int a[100000],b[100000];
        for(int j=0;j<N;j++)
        {
            scanf("%d",&a[j]);
        }
        
        for(int k=0;k<N;k++)
        {
            int count =0;
            for(int l=0;l<N;l++)
            {
                if(a[k]==a[l])
                {
                    count++;
                }
              
            }b[k]=count;
            
        }
        int num;
        for(int i=0;i<N;i++)
        {
            if(b[i]%2!=0)
            {
                num=i;
                
            }
        }
        
        printf("%d\n",a[num]);
        
        
    }
	
	return 0;
}
