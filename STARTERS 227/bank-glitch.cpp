// https://www.codechef.com/START227D/problems/BANKGLITCH
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B,X,Y;
        cin >> A >> B >> X >> Y;
        float Z = A / X;
	    int total = A + B + Z * (Y - X);
	    cout << total << endl;
	}

}
