#include <bits/stdc++.h>

using namespace std;

int main() {
    bitset <8> bits("00000000");
    cout << "bits: " << bits << endl;

    bits.set(4, 1);
    cout << "bits: " << bits << endl;

    bits.reset(0);
    cout << "bits: " << bits << endl;

    cout << bits.to_ulong() << endl;
    cout << bits.to_ullong() << endl;


    return 0;
}