#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1, count = 1; count <= N; i += 4, ++count) {
        cout << i << " " << i + 1 << " " << i + 2 << " PUM" << endl;
    }

    return 0;
}
