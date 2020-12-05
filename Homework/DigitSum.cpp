#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    if (input < 1 || input > 10){
        cout << "The input has to be higher than 0 or lower than 10" << endl;
    } else {
        for (int a = 0; a < input; a++)
            for (int b = 0; b < input; b++)
                for (int c = 0; c < input; c++)
                    for (int d = 0; d < input; d++)
                        for (int e = 0; e < input; e++)
                            if (a + b + c + d + e == input)
                                cout << a << b << c << d << e << endl;
    } 
    return 0;
}