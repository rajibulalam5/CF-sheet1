#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = a - b;
    if (result < 0) {
        result = 0;
    }

    cout << result << endl;

    return 0;
}
