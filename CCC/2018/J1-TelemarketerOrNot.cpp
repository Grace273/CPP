#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int last_four_digits[9];

    for (int i = 0; i < 4; i++) {
        cin >> last_four_digits[i];
    }

    if ((last_four_digits[0] == 8 || last_four_digits[0] == 9) && 
        (last_four_digits[3] == 8 || last_four_digits[3] == 9) && 
        (last_four_digits[1] == last_four_digits[2])){
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }

}