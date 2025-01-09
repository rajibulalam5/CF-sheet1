#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int found = 0;
    for (int i = A; i <= B; ++i) {
        int num = i;
        int isLucky = 1; 
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = 0; 
                break;
            }
            num /= 10;
        }

        if (isLucky) {
            cout << i << " ";
            found = 1;
        }
    }

    if (!found) {
        cout << -1;
    }

    cout << endl;
    return 0;
}
