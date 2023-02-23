#include<stdio.h>
#include<stdlib.h>

void quickSort( int *nuts, int ind1, int ind2 ){
    if( ind1 >= ind2 )
        return;

    int i, pivot = nuts[ind1], handle = ind1;

    for( i=ind1 + 1; i<=ind2; i++ )
        if( nuts[i] < pivot ){
            int temp = nuts[++handle];
            nuts[handle] = nuts[i];
            nuts[i] = temp;
        }

    nuts[ind1] = nuts[handle];
    nuts[handle] = pivot;

    quickSort( nuts, ind1, handle - 1);
    quickSort( nuts, handle + 1, ind2 );
}

int checkMid( int mid, int *T, int *P, int numTree, int numSquirrels, int limit ){

    int i, j, nuts[numTree];

    for( i=0; i<numTree; i++ )
        if( mid >= T[i] )
            nuts[i] = (mid - T[i])/P[i] + 1;
        else
            nuts[i] = 0;

    quickSort( nuts, 0, numTree-1 );

    long sum = 0;
    for( i=numTree - 1; i>= numTree - numSquirrels; i-- ){
        sum += nuts[i];

        if( sum >= limit)
            return 1;
    }
    return 0;
}

void performTest(){
    int i, low, high, mid, numTree, numSquirrel, limit;
    scanf( "%d %d %d", &numTree, &numSquirrel, &limit );

    if( numSquirrel > numTree )
        numSquirrel = numTree;

    int T[numTree], P[numTree];

    for( i=0; i<numTree; i++ )
        scanf( "%d", &T[i] );

    for( i=0; i<numTree; i++ )
        scanf( "%d", &P[i] );

    low = 0;
    high = T[0] + (limit - 1)*P[0];

    for( i=1; i<numTree; i++ )
        if( T[i] + (limit - 1)*P[i] < high )
            high = T[i] + (limit - 1)*P[i];

    while( high > low ){
        mid = (high + low)/2;

        if( checkMid( mid, T, P, numTree, numSquirrel, limit ) )
            high = mid;
        else
            low = mid+1;
    }

    printf( "\n%d", high );
}

int main(){

    int numTest;
    scanf( "%d", &numTest );

    while( numTest-- )
        performTest();

    return 0;
}
