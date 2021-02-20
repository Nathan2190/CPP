#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K, N2;
    cin >> N >> K;
    N2 = N;
    for (int i = 0; i < K; i++)
    {
        N2 = N2 * 10;
        N += N2;
    }
    cout << N << endl;

    return 0;
}