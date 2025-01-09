#include <iostream>

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long result = 1;
        for (int i = 2; i <= N; ++i) {
            result *= i;
        }

        cout << result << endl;
    }

    return 0;
}
