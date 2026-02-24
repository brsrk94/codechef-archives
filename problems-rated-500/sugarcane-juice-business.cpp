// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int N;
	    cin >> N;
	    int total = 50 * N;
	    int buyCane = 20;
	    int saltMint = 20;
	    int shopRent = 30;
	    int profit = total - (((total * buyCane)/100) + ((total * saltMint)/100) + ((total* shopRent)/100));
	    
	    cout << profit << endl;
	    
	    
	}

}