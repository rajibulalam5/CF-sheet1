#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int num, groupMin, count = 0;

    for (int i = 0; i < N; ++i) {
        cin >> num;

        if (count == 0) {
            groupMin = num;
        } else {

            if (num < groupMin) {
                groupMin = num;
            }
        }

        count++;

        if (count == K || i == N - 1) {
            cout << groupMin << " ";
            count = 0; 
        }
    }

    cout << endl;
    return 0;
}
