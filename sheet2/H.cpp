#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    for (int i = 2; i * i <= X; ++i) {
        if (X % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl; 
    return 0;
}
