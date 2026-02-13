#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    int A[100];
    int even = 0, odd = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];

        if(A[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(even > odd)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
}
