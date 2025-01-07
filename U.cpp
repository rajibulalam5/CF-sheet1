#include <iostream>
using namespace std;

int main() {
    double N;
    cin >> N;
    int ip = (int)N;
    double dp = N - ip;
    if (dp == 0.0) {
        cout << "int " << ip << endl;
    } else {
        cout << "float " << ip << " " << dp << endl;
    }
    return 0;
}
