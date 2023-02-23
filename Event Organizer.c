#include<stdio.h>

//Kinda like 0-1 knapsack problem
//sort by earlist end time
//for T[i][j] check max of of the just upper and if thaken then just before its start time in upper line

typedef struct 
{
    int start;
	int end;
	int cost;
}EVENT;

void sortE(EVENT eArr[], int n)
{
    int i,j, minind;
    for ( i = 0; i < n; i++)
    {
        minind = i;
        for ( j = i+1; j < n; j++)
        {
            if(eArr[j].end < eArr[minind].end)
            {
                minind = j;
            }
        }
        EVENT el;
        el = eArr[i];
        eArr[i] = eArr[minind];
        eArr[minind] = el; 
    }
    return;
}

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

void program()
{
	int n;
	scanf("%d", &n);
	int S[n], E[n], C[n];
	EVENT eArr[n];
	int i,j;
	for ( i = 0; i < n; i++)
	{
		scanf("%d%d%d", &S[i], &E[i], &C[i]);
		eArr[i].start = S[i];
		eArr[i].end = E[i];
		eArr[i].cost = C[i];
	}
	sortE(eArr, n);
	int m_end = eArr[n-1].end;
	//Starting DP
	int Table[n+1][m_end+1];
	for ( j = 0; j < m_end+1; j++)
    {
        Table[0][j] = 0;
    }
	for ( i = 1; i < n+1; i++)
    {
        for ( j = 0; j < m_end+1; j++)
        {
            //Table's i === eArr's i-1
            if(j < eArr[i-1].end)
            {
                Table[i][j] = Table[i-1][j];
            }
            else
            {
                Table[i][j] = max(Table[i-1][j], eArr[i-1].cost + Table[i-1][eArr[i-1].start]);
            }
        }
    }
    printf("%d\n", Table[n][m_end]);
}

int main()
{
	int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        program();
    }
	return 0;
}
