#include <bits/stdc++.h>

using namespace std;

int main() {
    int antennas, eyes;
    cin >> antennas >> eyes;
    if (antennas >= 3 && eyes <= 4)
        cout << "TroyMartian" << endl;
    if (antennas <= 6 && eyes >= 2)
        cout << "VladSaturnian" << endl;
    if (antennas <= 2 && eyes <= 3)
        cout << "GraemeMercurian" << endl;
    return 0;
}