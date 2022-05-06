#include <bits/stdc++.h>
using namespace std;
int main() {
    char x, A_andOr_B[2];
    int value, instructions;
    map <char, int> variable = {
        {'A', 0},
        {'B', 0}
    };

    cin >> instructions;
    while (instructions != 7){
        if (instructions == 1) {
            cin >> x >> value;
            variable[x] = value;
        } else if (instructions == 2) {
            cin >> x;
            cout << variable[x] << endl;
        } else if (instructions == 3) {
            for (int i = 0; i < 2; i++){
                cin >> x;
                A_andOr_B[i] = x;
            }
            variable[A_andOr_B[0]] = variable[A_andOr_B[0]] + variable[A_andOr_B[1]];
        } else if (instructions == 4) {
            for (int i = 0; i < 2; i++){
                cin >> x;
                A_andOr_B[i] = x;
            }
            variable[A_andOr_B[0]] = variable[A_andOr_B[0]] * variable[A_andOr_B[1]];
        } else if (instructions == 5) {
            for (int i = 0; i < 2; i++){
                cin >> x;
                A_andOr_B[i] = x;
            }
            variable[A_andOr_B[0]] = variable[A_andOr_B[0]] - variable[A_andOr_B[1]];
        } else if (instructions == 6) {
            for (int i = 0; i < 2; i++){
                cin >> x;
                A_andOr_B[i] = x;
            }
            variable[A_andOr_B[0]] = variable[A_andOr_B[0]] / variable[A_andOr_B[1]];
        }
        cin >> instructions;
    }

    return 0;
}