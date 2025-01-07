#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int smol = A, mid = A, big = A;

    if (B < smol) smol = B;
    if (C < smol) smol = C;
    if (B > big) big = B;
    if (C > big) big = C;

    mid = A + B + C - smol - big;
    cout << smol << endl;
    cout << mid << endl;
    cout << big << endl;
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    return 0;
}
