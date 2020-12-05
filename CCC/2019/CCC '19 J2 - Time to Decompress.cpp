#include <bits/stdc++.h>

using namespace std;

int main() {
    int L;
    cin >> L;
    int num;
    char letter;
    if (L < 80 && L >= 1){
        for (int i = 0; i < L; i++)
        {
            cin >> num >> letter;
            for (int i = 0; i < num; i++)
            {
                cout << letter;
            }
            cout << endl;
        }
        
        
        
    }
    return 0;
}