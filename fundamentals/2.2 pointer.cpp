#include <bits/stdc++.h>

using namespace std;

int main() {

int oof = 150;

int *ptr = &oof;
cout << *ptr << endl;
cout << ptr << endl;

int &ref = oof;
cout << ref << endl;
cout << &ref << endl;
}