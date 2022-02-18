#include <bits/stdc++.h>
using namespace std;

int number, num_of_shift, previous_num;

void shiftysum() {
    previous_num = number;

    while (num_of_shift > 0 ){
        previous_num = (previous_num*10);
        number = number + previous_num;
        num_of_shift--; 
    }
    cout << number << endl;
}

int main() {

    cin >>number >> num_of_shift;
    previous_num = number;
    shiftysum();
    return 0;
}