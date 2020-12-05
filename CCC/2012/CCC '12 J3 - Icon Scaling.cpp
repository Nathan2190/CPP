#include <bits/stdc++.h>

using namespace std;

int main() {
    int K, new_value;
    int original_value = 3;
    cin >> K;
    if (K < 25 && K > 1){
        new_value = K * original_value;
        for (int i = 0; i < K; i++)
        {
            cout << '*' * K << 'x' * K << '*' * K;
        }
        
    }
    return 0;
}