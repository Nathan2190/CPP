#include <bits/stdc++.h>

using namespace std;

int main() {
    int int_N, occupied;
    string day1, day2;

    for (int i = 0; i < int_N; i++)
    {
        if (day1[i] == 'C' && day2[i] == 'C')
            occupied++;
    }

    cout << occupied << endl;
    
    return 0;
}