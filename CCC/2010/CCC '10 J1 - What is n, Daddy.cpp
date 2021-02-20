#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    if(input == 1 || input == 9 || input == 10)
        cout << "1" << endl;
    else if (input == 2 || input == 3 || input == 7 || input == 8)
        cout << "2" << endl;
    else if(input == 4 || input == 5 || input == 6)
        cout << "3" << endl;

    return 0;
}