#include <bits/stdc++.h>

using namespace std;

int main() {
    int order, total = 0;
    int burger[5] = {0, 461, 431, 420, 0};
    int side[5] = {0, 100, 57, 70, 0};
    int drink[5] = {0, 130, 160, 118, 0};
    int dessert[5] = {0, 167, 266, 75, 0};

    cin >> order;
    total += burger[order];
    cin >> order;
    total += side[order];
    cin >> order;
    total += drink[order];
    cin >> order;
    total += dessert[order];


    cout << "Your total Calorie count is " << total << ".";
    
    return 0;
}