#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << fixed << setprecision(9);
    double R;
    cin >> R;
    const double PI = 3.141592653;
    double area = PI * R * R;
    cout << area << endl;

    return 0;
}
