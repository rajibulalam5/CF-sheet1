#include<iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double result = (a * b) / c; 

    long long myNumber = result;
    double myRes = result - myNumber; 

    if (myRes > 0) {
        cout << "double" << endl;
    } else if (myNumber <= 2147483647) {
        cout << "int" << endl;
    } else {
        cout << "long long" << endl;
    }

    return 0;
}