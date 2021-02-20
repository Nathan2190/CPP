#include <bits/stdc++.h>

using namespace std;

int main() {
    int input[4], total, a, b, c, d;
    cin >> input[0] >> input[1] >> input[2] >> input[3];
    if (input[0] == 1)
    {
        a = 461;
    }
    if (input[0] == 2)
    {
        a = 431;
    }
    if (input[0] == 3)
    {
        a = 420;
    }
    if (input[0] == 4)
    {
        a = 0;
    }


    if (input[1] == 1)
    {
        b = 100;
    }
    if (input[1] == 2)
    {
        b = 57;
    }
    if (input[1] == 3)
    {
        b = 70;
    }
    if (input[1] == 4)
    {
        b = 0;
    }


    if (input[2] == 1)
    {
        c = 130;
    }
    if (input[2] == 2)
    {
        c = 160;
    }
    if (input[2] == 3)
    {
        c = 118;
    }
    if (input[2] == 4)
    {
        c = 0;
    }


    if (input[3] == 1)
    {
        d = 167;
    }
    if (input[3] == 2)
    {
        d = 266;
    }
    if (input[3] == 3)
    {
        d = 75;
    }
    if (input[3] == 4)
    {
        d = 0;
    }

    total = a + b + c + d;
    cout << "Your total Calorie count is " << total << ".";
    
    return 0;
}