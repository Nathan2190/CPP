#include <bits/stdc++.h>

using namespace std;

int main() {
    int B3, B2, B1, A3, A2, A1;
    cin >> B3 >> B2 >> B1 >> A3 >> A2 >> A1;
    if (B3 >= 0 || B3 <= 100 || B2 >= 0 || B2 <= 100 || B1 >= 0 || B1 <= 100 || A3 >= 0 || A3 <= 100 || A2 >= 0 || A2 <= 100 || A1 >= 0 || A1 <= 100){
    if ((B3 * 3 + B2 * 2 + B1) > (A3 * 3 + A2 * 2 + A1))
        cout << "B" << endl;
    if ((B3 * 3 + B2 * 2 + B1) < (A3 * 3 + A2 * 2 + A1))
        cout << "A" << endl;
    if ((B3 * 3 + B2 * 2 + B1) == (A3 * 3 + A2 * 2 + A1))
        cout << "T" << endl;
    }
    return 0;
}