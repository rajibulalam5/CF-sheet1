#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    int fd = X / 1000;
    if (fd % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
  return 0;
}
