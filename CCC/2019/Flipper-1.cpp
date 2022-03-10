#include <bits/stdc++.h>
using namespace std;
int main() {  
    int grid_numbers[2][2]= {
        {1, 2},
        {3, 4}
    };
    int horizontal_flips = 0, vertical_flips = 0;
    string flip;
    cin >> flip;

    for (int i = 0; i < flip.size(); i++){
        if (flip[i] == 'H'){
            horizontal_flips++;
        } else {
            vertical_flips++;
        }
    }

    if (horizontal_flips % 2 == 1){
        swap(grid_numbers[0][0], grid_numbers[1][0]);
        swap(grid_numbers[0][1], grid_numbers[1][1]);  
    }
    
    if (vertical_flips % 2 == 1){
        swap(grid_numbers[0][0], grid_numbers[0][1]);
        swap(grid_numbers[1][0], grid_numbers[1][1]);
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            cout << grid_numbers[i][j] << " ";
        }    
        cout << endl;
    }
    return 0;
}