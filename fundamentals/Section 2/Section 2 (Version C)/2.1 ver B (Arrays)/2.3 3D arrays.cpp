#include <bits/stdc++.h>

using namespace std;

int main() {
    int array_3d[2][2][2] = {

    {{1,2},{3,4}},
    {{5,6},{7,8}}
    };

    for (int a = 0; a < 2; a++)
        for (int b = 0; b < 2; b++)
            for (int c = 0; c < 2; c++)
                cout << array_3d[a][b][c] << " ";
                cout << endl;
        
    
    return 0;
}