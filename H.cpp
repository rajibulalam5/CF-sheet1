#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    int frslt = floor(A / B);
    int crslt = ceil(A / B);
    int rrslt = round(A / B);
    cout << "floor " << A << " / " << B << " = " << frslt << endl;
    cout << "ceil " << A << " / " << B << " = " << crslt << endl;
    cout << "round " << A << " / " << B << " = " << rrslt << endl;
    return 0;
}
