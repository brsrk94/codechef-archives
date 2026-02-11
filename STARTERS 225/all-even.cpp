#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[105];
        for (int i = 0; i < N; i++) cin >> A[i];

        int firstOdd = -1;

        for (int i = 0; i < N; i++) {
            if (A[i] % 2 == 1) {
                firstOdd = i;
                break;
            }
        }

        if (firstOdd == -1) {
            cout << "YES\n";
            continue;
        }

        int oddCount = 0;
        for (int i = firstOdd; i < N; i++) {
            if (A[i] % 2 == 1) oddCount++;
        }

        if (oddCount % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
