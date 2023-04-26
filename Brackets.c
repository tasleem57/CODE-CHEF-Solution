 #include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    char arr[1000000];
	    scanf("%s",arr);
	    int v=balanced(arr);
	    for(int i=0;i<v;i++)
	    {
	        printf("(");
	    }
	    for(int i=0;i<v;i++)
	    {
	        printf(")");
	    }
	    printf("\n");
	}
	return 0;
}
int balanced(char arr[])
{
    int mb=0;
    int b=0;
    for(int j=0;j<strlen(arr);j++)
    {
        if(arr[j]=='(')
        {
            b++;
        }
        else
        {
            b--;
        }
        if(b>mb)
        {
            mb=b;
        }
    }
    return mb;
}

