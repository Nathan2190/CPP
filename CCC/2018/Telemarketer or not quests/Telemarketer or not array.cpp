#include <bits/stdc++.h>

using namespace std;

int main() {
    int num[4];
    for (int i = 0; i < 4; i++)
        cin >> num[i];
    
    if((num[1] == 8 || num[1] == 9) && (num[4] == 8 || num[4] ==9) && (num[3] == num[4])) 
        cout << "ignore";
    else
        cout << "answer";
    
    return 0;
}