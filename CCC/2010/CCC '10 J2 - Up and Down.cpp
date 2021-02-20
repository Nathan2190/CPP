#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, s, Nikky, Byron, Nt, Bt = 0; 
    cin >> a >> b >> c >> d >> s;
    Byron = 0;
    for (int i = 0; i < 10000000; i++)
    {
        Nt = Nt + a + b;
        Nikky = Nikky + a - b;
        Bt = Bt + c + d;
        Byron = Byron + c - d;
        if (Nt + a > s)
        {
            Nikky += s - Nt;
            break;
        }
        if (Nt + b > s)
        {
            Nikky -= s - Nt;
            break;
        }
        if (Bt + c > s)
        {
            Byron += s - Bt;
            break;
        }
        if (Bt +d > s)
        {
            Byron -= s - Bt;
            break;
        }
    }
    if (Nikky > Byron)
    {
        cout << "Nikky" << endl;
    }
    if (Nikky < Byron)
    {
        cout << "Byron" << endl;
    }
    if (Nikky == Byron)
    {
        cout << "Tied" << endl;
    }
    
    
    return 0;
}