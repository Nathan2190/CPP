#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> lol = {2, 4, 6, 8};
    cout << lol[0] << endl;
    for (int i = 0; i < lol.size(); i++)
        cout << lol[i] << endl;
    for (auto item : lol)
        cout << item << endl;
    return 0;
}