#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int even = 0; 

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        even++;
    }

    if (even == 0) {
        cout << -1 << endl;
    }

    return 0;
}
