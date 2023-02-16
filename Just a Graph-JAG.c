#include <stdio.h>

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        long int n;
       scanf("%ld",&n);
       long int w[n];
       for(int i=0;i<n;i++)
          scanf("%ld",&w[i]);
        long int a[n];
       for(int i=0;i<n;i++)
          a[i]=i-w[i];
       int k=a[0],count=0;
       for(int i=1;i<n;i++)
       {
           if(k!=a[i])
           {
               count++;
           }
       }
       if(count>0)
         printf("1");
       else
          printf("%ld",n);
       printf("\n");
   }

    return 0;
}
