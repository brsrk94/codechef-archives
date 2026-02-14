// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_

#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;
    cin >> T;

    while(T--){
        int N,X;
        cin >> N >> X;
        //N - group size
        //X - cost of one subscription

        int sub = (N + 5) / 6;
        int total = sub * X;

        cout << total << endl;
    }
}

// used gpt to understand the logic. but learned that , whenever it'll ask about something like that
// Whenever a problem asks:
// minimum number of packets
// minimum number of buses
// minimum number of subscriptions
// minimum number of rooms
// minimum number of groups

// we'll use : (N + K - 1) / K
