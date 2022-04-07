#include <bits/stdc++.h>
using namespace std;
int main() {

    int num_of_parking_spaces, occupied_twice = 0;
    string day_1_parking, day_2_parking;

    cin >> num_of_parking_spaces >> day_1_parking >> day_2_parking;

    for(int i = 0; i < num_of_parking_spaces; i++) {
        if (day_1_parking[i] == 'C' && day_2_parking[i] == 'C') {
            occupied_twice++;
        }
    }
    cout << occupied_twice;
    return 0;
}