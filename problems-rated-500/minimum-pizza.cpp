// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    
    while(T--){
        int N,X;
        cin >> N >> X;
        cout << (N * X + 3) / 4 << endl;
    }
}
