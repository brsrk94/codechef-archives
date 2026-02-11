// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T; 
	
	while(T--){
	    int A,C;
	    double B; // use double when you want decimal values as output.
        cin >> A >> B >> C;
        if ((A+B)/2 > C) {
            cout << "YES" << endl;
            
        } else {
	    cout << "NO" << endl;
	}
	}
}

// done without help, loved it.



/*
Alternative ways to do this problem :
#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int A, B, C;
        std::cin >> A >> B >> C;
        if (A + B > 2 * C) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}

*/
