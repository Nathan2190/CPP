#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("file.out");

    string str = "string";

    fout << "string";
    int x = 123;

    fout << x;
    
    ifstream fin ("file.out");
    fin >> str;
    cout << str;
    
    return 0;
}