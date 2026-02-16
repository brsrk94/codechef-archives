// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int B1,B2,B3;
	    cin >> B1 >> B2 >> B3;

        int zeros = (B1 == 0) + (B2 == 0) + (B3 == 0);
	    if (zeros >= 2){
	        cout << "Water filling  time" << endl;
	    } else {
	        cout << "Not now" << endl;
	    }
	}

}

/* 
can be done using this condition only as well in if
if (B1 == 0 && B2 == 0 || B2 == 0 && B3 == 0 || B3 == 0 && B1 == 0){
*/
