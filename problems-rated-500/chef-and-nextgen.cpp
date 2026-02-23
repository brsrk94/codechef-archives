// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
	while(T--){
	    int A,B,X,Y;
	    cin >> A >> B >> X >> Y;
	    
	    int prod1 = A * B;
	    int prod2 = X * Y;
	    
	    if (prod2 >= prod1){
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}

}
