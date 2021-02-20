#include <bits/stdc++.h>

using namespace std;

int main() {
    int one, two, three;
    cin >> one >> two >> three;
    if ((two > one && two > three && three < one && three < two) || (two < one && two < three && three > one && three > two))
        cout << one << endl;
    if ((one > two && one > three && three < one && three < two) || (one < two && one < three && three > one && three > two))
        cout << two << endl;
    if ((one > two && one > three && two < one && two < three) || (one < two && one < three && two > one && two > three))
        cout << three << endl;
    return 0;
}