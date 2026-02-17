// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALESEASON
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int X,Y,Z,A,B;
	    cin >> X;
	    B = X + 0;
	    Y = X - 25;
	    Z = X - 100;
	    A = X - 500;
	    
	    if (X <= 100){
	        cout << B << endl;
	    } else if (100 < X && X <= 1000 ){
	        cout << Y << endl;
	    } else if (1000 < X && X <= 5000){
	        cout << Z << endl;
	    } else {
	        cout << A << endl;
	    }
	}

}
