// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    int A;
	    A = X * Y;
	    int B;
	    B = A/100;
	    
	    int C = 0;
	    
	    if (A >= 100){
	        cout << B << endl;
	    } else {
	        cout << C << endl;
	    }
	}

}
