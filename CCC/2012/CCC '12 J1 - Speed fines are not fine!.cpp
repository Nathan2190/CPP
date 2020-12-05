#include <bits/stdc++.h>

using namespace std;

int main() {
    int limit, speed, difference, fine;
    cin >> limit >> speed;
    if (limit >= speed) {
        cout << "Congratulations, you are within the speed limit!" << endl;
    } else {
        difference = speed - limit;

        if (difference > 0 && difference <= 20)
            fine = 100;

        if (difference > 20 && difference <= 30)
            fine = 270;

        if (difference > 30)
            fine = 500;

        cout << "You are speeding and your fine is $" << fine << "." << endl;
    }
    return 0;
}