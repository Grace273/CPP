#include <bits/stdc++.h>
using namespace std;

int main() {

    int lines;
    cin >> lines;

    // for ( int i=0; i<=lines; i++) {     // 0 ~ 4 total 0 <= i <= 4, 
    for ( int i=0; i<lines; i++) {     // 0 ~ 4 total 0 <= i < 4, 0 ~ 3
        int num;
        char symbol;
        cin >> num >> symbol;
        for ( int j=0; j<num; j++) {
            cout <<symbol;
        }
        cout << endl;
    }

    return 0;
}