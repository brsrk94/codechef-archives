#include<bits/stdc++.h>
using namespace std;

int main(){
    int X,s1,s2;
    cin >> X;
    s1 = 100 + (4 * X);
    s2 = 300;

    if (s1 > 300){
        cout << s2 << endl;
    } else {
        cout << s1 << endl;
    }
}