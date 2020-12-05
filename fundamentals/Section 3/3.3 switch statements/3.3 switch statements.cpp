#include <bits/stdc++.h>

using namespace std;

int main() {
    char response;
    cin >> response;

    if (response == 'a') {
        cout << "this is a" << endl;
    } else if (response == 'A') {
        cout << "this is A" << endl;
    } else if (response == 'b') {
        cout << "this is b" << endl;
    } else if (response == 'B') {
        cout << "this is B" << endl;
    } else if (response == 'c') {
        cout << "this is c" << endl;
    } else if (response == 'C') {
        cout << "this is C" << endl;
    } else {
        cout << "that's not a letter" << endl;
    }

    return 0;
}