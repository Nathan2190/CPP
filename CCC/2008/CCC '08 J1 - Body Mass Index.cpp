#include <bits/stdc++.h>

using namespace std;

int main() {
    float weight, height, c;
    cin >> weight >> height;
    c = weight / (height * height);
    if(c > 25)
        cout << "Overweight" << endl;
    if(c <= 25 && c >= 18.5)
        cout << "Normal weight" << endl;
    if(c < 18.5)
        cout << "Underweight" << endl;
    return 0;
}