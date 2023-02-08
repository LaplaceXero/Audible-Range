#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x; //output frequency
	bool y;
	
	cin >>testCases;
	
	for(int i = 0;i < testCases; i++)
	{
	    cin >>x;
	    
	    y = ((x >= 67) && (x <= 45000)) ? true:false;
	    
	    if(y)
	        cout <<"Yes" <<endl;
	        
	    else
	        cout <<"No" <<endl;
	}
	
	return 0;
}
