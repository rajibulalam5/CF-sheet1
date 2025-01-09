#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int start = X < Y ? X + 1 : Y + 1; 
        int end = X > Y ? X : Y;           

        int sum = 0;

        for (int i = start; i < end; ++i) {
            if (i % 2 != 0) { 
                sum += i;
            }
        }

        cout << sum << endl; 
    }

    return 0;
}
