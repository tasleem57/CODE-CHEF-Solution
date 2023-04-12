#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int f;
	cin>>f;
	while(f--){
	    int g;
	    cin>>g;
	    int a[g];
	    for(int i=0;i<g;i++)
	    cin>>a[i];
	    float sv=0;
	    float cv=0;
	    for(int i=0;i<g;i++){
	        sv+=a[i];
	        float num_of_balls=i+1;
	        if(sv==0)
	        continue;
	        float strikeRate(sv/num_of_balls);
	        if(strikeRate*100==100)
	        cv++;
	        
	    }
	    cout<<cv<<endl;
	}
	
	return 0;
}
