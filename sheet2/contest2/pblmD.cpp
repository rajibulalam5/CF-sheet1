#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long L, R;
        cin >> L >> R;
        
        if (L > R) {
            swap(L, R);
        }

        long long sum_R = R * (R + 1) / 2;
        long long sum_L_minus_1 = (L - 1) * L / 2;
        
        cout << sum_R - sum_L_minus_1 << endl;
    }
    
    return 0;
}