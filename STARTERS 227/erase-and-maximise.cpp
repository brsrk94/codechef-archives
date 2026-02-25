// https://www.codechef.com/START227D/problems/DICEERMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
// your code goes here
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int cal1 = 6 * N;
        int cal2 = S - 5 * N;

        if (cal2 < 0)
            cal2 = 0;

        cout << cal1 - cal2 << endl;
    }
}