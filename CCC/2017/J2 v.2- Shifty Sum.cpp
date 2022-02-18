#include <bits/stdc++.h>
using namespace std;


int main() {
    int number, num_of_shift, shifts[6] = {}, sum = 0;
    cin >>number >> num_of_shift;

    for (int shift_num = num_of_shift; shift_num >= 0; shift_num--) {
        shifts[shift_num] = number;
        number = number * 10;
        sum = sum + shifts[shift_num];
    }
    cout << sum << endl;

    return 0;
}