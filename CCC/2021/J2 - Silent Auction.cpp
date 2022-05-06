#include <bits/stdc++.h>
using namespace std;
int main() {
    int num_of_bids, amount, winning_amount = 0;
    string name, winner;

    cin >> num_of_bids;
    
    for (int i = 0; i < num_of_bids; i++){
        cin >> name >> amount;
        if (amount > winning_amount){
            winning_amount = amount;
            winner = name;
        }
    }
    cout << winner;
}