#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int n = a + b;
    if (n > 0 && abs(a - b) <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
