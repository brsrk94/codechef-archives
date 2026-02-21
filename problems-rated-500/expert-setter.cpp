#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    
	    if (Y >= X/2.00 ){ //REMEMBER ADDING .00 , IN MANY TESTACASES VALUES CAN BE .05 , .06
	        cout << "YES" << endl;
	        
	    }else{
	        cout << "NO" << endl;
	    }
	
	

}

}
