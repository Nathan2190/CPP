#include <bits/stdc++.h>

using namespace std;

int main() {
    bitset <8> bits("00000000");
    bitset <8> bits(0);
    bits.set(0, 1);
    bits.set(7, 1);
    bits.reset(7);
    cout << bits << endl;
    int x = 5;
    cout << bitset<16>(x) << endl;
    string b_str = bitset<8>(x).to_string();
    cout << b_str << endl;


    return 0;
}