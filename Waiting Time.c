#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    //multiply the no. of weeks by 7.
	    //and then subtract the given number of days from it.
	    cout<<x*7-y<<"\n";
	}
	return 0;
}
