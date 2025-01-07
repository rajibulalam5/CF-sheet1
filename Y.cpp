#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long mod = 100;
    long long result = (((A % mod) * (B % mod)) % mod * (C % mod)) % mod * (D % mod) % mod;
    if (result < 10) {
        cout << "0";
    }
    cout << result << endl;
    return 0;
}
