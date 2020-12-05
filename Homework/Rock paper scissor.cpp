#include <bits/stdc++.h>

using namespace std;

int main() {
    char p_input, c_input;
    int random_number;
    srand((unsigned int)time(NULL));
    random_number = rand() % 3 + 1;
    cin >> p_input;
    if (random_number == 1 && p_input == "Rock" || p_input == "rock")
        cout << "You picked rock and computor picked rock!" << endl;
        cout << "You tied";
    if (random_number == 2 && p_input == "Rock" || p_input == "rock")
        cout << "You picked rock and computor picked paper!" << endl;
        cout << "You lost";
    if (random_number == 3 && p_input == "Rock" || p_input == "rock")
        cout << "You picked rock and computor picked scissor!" << endl;
        cout << "You won!";
    if (random_number == 1 && p_input == "Rock" || p_input == "rock")
        cout << "You picked rock and computor picked rock!" << endl;
        cout << "You tied";


    return 0;
}