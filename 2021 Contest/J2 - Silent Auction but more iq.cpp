#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    string name[N];
    int bid[N];
    string highest;
    int highesti;

    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> bid[i];
    }
    for (int i = 1; i < N; i++)
    {
        if(bid[0] < bid[i])
            bid[0] = bid[i];
            name[0] = bid[i - 1];
    }
    
    cout << name[0] << endl;

    
    
    return 0;
}