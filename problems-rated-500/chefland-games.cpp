https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int R1,R2,R3,R4 = 0;
	    cin >> R1 >> R2 >> R3 >> R4;
	    // 0 - INSIDE LIMITS , 1 - OUTSIDE LIMITS


	    
	    if ( R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0){
	        cout << "IN" << endl;
	    }else {
	        cout << "OUT" << endl;
	    }
	}

}
