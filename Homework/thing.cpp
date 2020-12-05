#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Type 0 to stop the program" << endl;
    cout << "To start, Type a number from 6~100 " << endl;
    int input;
    cin >> input;
    if (input == 0) {
        cout << "Program ended" << endl;
        exit;
    } else {
        if (input < 6 || input > 100){
            cout << "You can't enter a number that is lower than 6 or higher than 100!" << endl;
        } else {
            for (int x = 1; x <= input; x++)
                for (int y = x+1; y <= input; y++)
                    for (int z = y+1; z <= input; z++)
                        if (x + y + z == input)
                            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}