#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 2; i <= N; ++i) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = 0; 
                break; 
            }
        }

           if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl; 

    return 0;
}
