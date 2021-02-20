#include <bits/stdc++.h>

using namespace std;

int main() {
    int H, M, A, T;
    cin >> H >> M;
    T = 0;
    for (int i = 0; i < M; i++)
    {
        T += 1;
        A = (-6 * (T ^ 4)) + (H * (T ^ 3)) + ((2 * (T ^ 2)) + T);
        if (A <= 0)
        {   
            cout << "The balloon first touches ground at hour:" << endl;
            cout << T << endl;
            break;
        }
        
    }

    if (M == T)
    {
        cout << "The balloon does not touch ground in the given time." << endl;
    }
    
    return 0;
}