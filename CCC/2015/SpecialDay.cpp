#include <bits/stdc++.h>
using namespace std;

int main() {
    int month, day;
    cin >> month >> day;

    if ((month==1 && day<=31) || (month==2 && day<=17)) {
        cout << "Before" << endl;
    } else if (month==2 && day==18) {
        cout << "Special" << endl;
    } else {
        cout << "After" << endl;
    }
    return 0;
}