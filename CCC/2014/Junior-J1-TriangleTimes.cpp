#include <bits/stdc++.h>
using namespace std;

int main(){

    int angle_1, angle_2, angle_3;

    cin >> angle_1 >> angle_2 >> angle_3;

    if (angle_1+angle_2+angle_3==180){
        if (angle_1==60 && angle_2== 60 && angle_3== 60){
            cout << "Equilateral" << endl;
        } else if (angle_1==angle_2 || angle_2==angle_3 || angle_1==angle_3){
            cout << "Isosceles" << endl;
        } else{
            cout << "Scalene" << endl;
        }

    } else if (angle_1+angle_2+angle_3 > 180 || angle_1+ angle_2+ angle_3 < 180){
        cout << "Error" << endl; 
    }
   
}