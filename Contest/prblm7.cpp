#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    
    long long n, m, k;
    cin >> n >> m >> k;

    
    long long totalKatryoshkas = 0;

    
    long long type3 = min({n, m, k});
    totalKatryoshkas += type3;
    n -= type3;
    m -= type3;
    k -= type3;

    
    long long type2 = min({n / 2, m, k});
    totalKatryoshkas += type2;
    n -= 2 * type2;
    m -= type2;
    k -= type2;

    
    long long type1 = min(n / 2, k);
    totalKatryoshkas += type1;


    cout << totalKatryoshkas << endl;

    return 0;
}
