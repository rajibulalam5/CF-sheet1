#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;

        if (N <= 0 || M <= 0) {
            break;
        }

        int start = min(N, M);
        int end = max(N, M);

        int sum = 0;
        int current = start;

        while (current <= end) {
            cout << current << " "; 
            sum += current; 
            current++;
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}
