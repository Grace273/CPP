#include <bits/stdc++.h>
using namespace std;
int main(){

    int grade;

    cin >> grade;

    if (grade >= 1) {
        cout << "Parents get $20." << endl;
    } else if (grade > 7) {
        cout << "Parents get another $10" << endl;
    } else if (grade < 1 || grade > 12) {
        cout << "Not eligible." << endl;
    }
}