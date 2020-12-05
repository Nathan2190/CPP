#include <bits/stdc++.h>

using namespace std;

int main() {
    char input1, input2, input3, input4, input5, input6;
    int score;
    cin >> input1 >> input2 >> input3 >> input4 >> input5 >> input6;

    if (input1 == 'W' )
        score++;

    if (input2 == 'W' )
        score++;

    if (input3 == 'W' )
        score++;

    if (input4 == 'W' )
        score++;

    if (input5 == 'W' )
        score++;

    if (input6== 'W' )
        score++;

    if (score == 0)
        cout << -1 << endl;

    if (score == 1 || score == 2)
        cout << 1 << endl;

    if (score == 3 || score == 4)
        cout << 2 << endl;

    if  (score == 5 || score == 6)
        cout << 3 << endl;

    return 0;
}