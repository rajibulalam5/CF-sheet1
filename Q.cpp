#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    if (X == 0 && Y == 0) {
        cout << "Origem" << endl;
    } else if (X == 0) {
        cout << "Eixo Y" << endl;
    } else if (Y == 0) {
        cout << "Eixo X" << endl;
    } else {
        if (X > 0) {
            if (Y > 0) {
                cout << "Q1" << endl;
            } else {
                cout << "Q4" << endl;
            }
        } else {
            if (Y > 0) {
                cout << "Q2" << endl;
            } else {
                cout << "Q3" << endl;
            }
        }
    }
 return 0;
}
