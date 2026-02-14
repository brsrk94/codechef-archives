/*
* * * * *
* * * *
* * *
* *
*
*/

// here the logic was , total rows - current row + 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j < 5-i+1; j++){
            cout << "* ";
        }
    cout << endl;
    }
}
