#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    int ldN = N % 10;
    int ldM = M % 10;
    int result = ldN + ldM;
    cout << result << endl;
    return 0;
}
