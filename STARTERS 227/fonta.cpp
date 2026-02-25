https://www.codechef.com/START227D/problems/FONTA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // string(size_t count, char ch);
	string S(5, 'a'); // just  learned how to put string of length 5
	cin >> S;
	if(S[2] ==  'n' && S[3] == 't' && S[4] == 'a') {
	    cout << "YES" << endl;
	    
	} else {
	    cout << "NO" << endl;
	}

}
