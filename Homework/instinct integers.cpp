#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    int int1;
    int int2;
    int int3;
    
    while (int1 + int2 + int3 != num) {
        int1++;
        int2++;
        int3++;
    }
    cout << "number1:" << int1 << endl;
    cout << "number2:" << int2 << endl;
    cout << "number3:" << int3 << endl;
    return 0;
}