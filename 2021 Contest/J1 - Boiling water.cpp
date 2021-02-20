#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, p, sea_level;
    cin >> b;
    p = 5 * b - 400;
    cout << p << endl;
    if (p > 100)
    {
        cout << "-1" << endl;
    }
    if (p < 100)
    {
        cout << "1" << endl;
    }
    if (p == 100)
    {
        cout << "0" << endl;
    }
    
    
    return 0;
}