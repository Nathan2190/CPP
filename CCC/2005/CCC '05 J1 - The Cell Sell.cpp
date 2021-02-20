#include <bits/stdc++.h>

using namespace std;

int main() {
    double daytime, evening, weekend, dc1, ec1, wc1, dc2, ec2, wc2, t1, t2;
    cin >> daytime >> evening >> weekend;
    dc1 = (daytime - 100) * 0.25;
    dc2 = (daytime - 250) * 0.45;
    ec1 = evening * 0.15;
    ec2 = evening * 0.35;
    wc1 = weekend * 0.2;
    wc2 = weekend * 0.25;
    t1 = dc1 + ec1 + wc1;
    t2 = dc2 + ec2 + wc2;
    cout << "Plan A costs " << t1 << endl;
    cout << "Plan B costs " << t2 << endl;
    if (t1 < t2)
    {
        cout << "Plan A is cheapest." << endl;
    }
    if (t1 > t2)
    {
        cout << "Plan B is cheapest." << endl;
    }
    if (t1 == t2)
    {
        cout << "Plan A and B are the same price." << endl;
    }
    return 0;
}