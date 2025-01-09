#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int first = 0, second = 1;

    for (int i = 1; i <= N; ++i) {
        if (i == 1) {
            cout << first;
        } else if (i == 2) {
            cout << " " << second;
        } else {
            int next = first + second;
            cout << " " << next;
            first = second;
            second = next;
        }
    }

    cout << endl;

    return 0;
}
