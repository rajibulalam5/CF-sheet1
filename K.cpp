#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int min = A, max = A;

    if (B < min) min = B;
    if (C < min) min = C;

    if (B > max) max = B;
    if (C > max) max = C;

    cout << min << " " << max << endl;

    return 0;
}