#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T; // number of test cases
	cin >> T;
	
	while (T--) {
	    int N;
	    cin >> N;
	    
	    int now = 0, best = 0;
	    
	    for (int i = 0; i < N; i++) {
	        int A;
	        cin >> A;
	        
	        if (A != 0) {
	            now++;
	            best = max(best, now);
	            
	        } else {
	            now = 0;
	        }
	    }
	    
	    cout << best << endl;
	}
	

	

}
