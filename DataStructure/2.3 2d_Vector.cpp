#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <vector<int>> vect_2d = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i = 0; i < vect_2d.size(); i++){
        for (int j = 0; j < vect_2d.size(); j++){
            cout << vect_2d[i][j] << " ";
        }
        cout << endl;
    }
}