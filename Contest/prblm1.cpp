#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, p;
    cin >> x >> p;
    double og_price = p / (1 - x / 100);
    og_price = round(og_price * 100) / 100;
    cout << og_price << endl;
    return 0;
}
