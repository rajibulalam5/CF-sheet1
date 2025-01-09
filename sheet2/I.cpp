#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N, reversed = 0;

    while (N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }

    cout << reversed << endl;

    if (original == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
