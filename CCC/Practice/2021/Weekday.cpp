#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int number_of_days;
    cin >> number_of_days;

    if (number_of_days % 7 == 0){
        cout << "Sunday" << endl;
    } else if (number_of_days % 7 == 1){
        cout << "Monday" << endl;
    } else if (number_of_days % 7 == 2){
        cout << "Tuesday" << endl;
    } else if (number_of_days % 7 == 3){
        cout << "Wednesday" << endl;
    } else if (number_of_days % 7 == 4){
        cout << "Thursday" << endl;
    } else if (number_of_days % 7 == 5){
        cout << "Friday" << endl;
    } else if (number_of_days % 7 == 6){
        cout << "Saturday" << endl;}
}
