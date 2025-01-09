#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int onesCount = 0;
        while (N > 0) {
            if (N % 2 == 1) {
                onesCount++;
            }
            N /= 2;
        }

        int result = 0;
        for (int i = 0; i < onesCount; ++i) {
            result = result * 2 + 1;
        }

        cout << result << endl;
    }

    return 0;
}
