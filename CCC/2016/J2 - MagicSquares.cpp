#include <bits/stdc++.h>
using namespace std;
int main() {
    int numbers[4][4] = {};
    int row_sum[4] = {};
    int column_sum[4] = {};
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++) {
            cin >> numbers[i][j];   
        }
    }
      
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++) {
            row_sum[i] = row_sum[i] + numbers[i][j];
        }
    }

    for (int j = 0; j < 4; j++){
        for (int i = 0; i < 4; i++) {
            column_sum[j] = column_sum[j] + numbers[i][j];
        }
    }

    int sum = row_sum[0];

    for (int i = 0; i < 4; i++){
        if (sum!=row_sum[i]||sum!=column_sum[i]){
            cout << "not magic" << endl;
            return 0;
        }
    }

    cout << "magic" << endl;
}
       
   
       
       
       
       
       