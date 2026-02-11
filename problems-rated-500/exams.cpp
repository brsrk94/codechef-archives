// Exams : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin >> T;
	
	while(T--){
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    
	    if ((Z * 100)/(X * Y) > 50){
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}

}

// Hooray we did it .

/* alternative approach : 

Check if the number of students who passed is strictly greater than 50%
        if (Z * 2 > X * Y){
*/
