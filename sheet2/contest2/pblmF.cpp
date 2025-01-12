#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long num;
    int maxF = 0;

    while (n--) {
        cin >> num;
        int count = 0;
        while (num % 2 == 0) {
            num /= 2;
            count++;
        }
        if (count > maxF) {
            maxF = count;
        }
    }

    cout << maxF << endl;
    return 0;
}
