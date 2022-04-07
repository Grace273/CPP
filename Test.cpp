#include <bits/stdc++.h>
using namespace std;
int main() {
    int num_of_parking_spaces;
    string day_1_parking, day_2_parking;
    bitset <8> occupied_twice(0);

    cin >> num_of_parking_spaces >> day_1_parking >> day_2_parking;

    for(int i = 0; i < num_of_parking_spaces; i++) {
        if (day_1_parking[i] == 'C' && day_2_parking[i] == 'C') {
            occupied_twice[i] = 1;
        }
    }
    for(int i = 0; i < 8; i++) {
        if (occupied_twice[i] == 1) {
            ++;
        }
    }
    cout << occupied;
    return 0;
}