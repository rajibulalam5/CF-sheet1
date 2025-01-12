#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;

        long long maxSum = n * (n + 1) / 2; 
        if (s > maxSum || s < 1) {
            cout << -1 << endl;
            continue;
        }

        for (int i = n; i >= 1 && s > 0; --i) {
            if (s >= i) {
                cout << i << " ";
                s -= i;
            }
        }

        if (s > 0) {
            cout << -1;
        }

        cout << endl; 
    }

    return 0;
}
