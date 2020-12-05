#include <bits/stdc++.h>

using namespace std;

int main() {
    str = str.replace(2, 2, "oo");
    cout << "After replace: " << str << endl;

    str.replace(str.start(), str.end()-3, "replace");
    cout << "After replace: " << str << endl;
    
    return 0;
}