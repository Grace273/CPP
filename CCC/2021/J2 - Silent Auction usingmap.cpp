#include <bits/stdc++.h>
using namespace std;
int main() {
    int num_of_bids, amount, winning_amount = 0;;
    string name, winner;
    map <string, int> name_and_bid = {

    };

    cin >> num_of_bids;

    for (int i = 0; i < num_of_bids; i++){
        cin >> name >> amount;
        name_and_bid[name] = amount;
        if (name_and_bid[name] > winning_amount){
            winning_amount = amount; // map is ordered in C++, but not in python
            winner = name;
        }
    }

    cout << winner;

    return 0;
}