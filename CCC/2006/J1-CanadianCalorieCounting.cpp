#include <bits/stdc++.h>
using namespace std;
int main() {

    int burgers[4] = {461, 431, 420, 0};
    int sides[4] = {100, 57, 70, 0};
    int drinks[4] = {130, 160, 118, 0};
    int desserts[4] = {167, 266, 75, 0};
    int calorie_count;
    int choice[4] = {0};

    for (int i = 0; i < 4; i++) {
        cin >> choice[i];
    }
    
    calorie_count = burgers[choice[0]-1] + sides[choice[1]-1] + drinks[choice[2]-1] + desserts[choice[3]-1];
    cout << "Your total Calorie count is " << calorie_count << "." << endl;
    return 0;


}