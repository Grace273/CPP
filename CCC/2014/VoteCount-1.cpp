#include <bits/stdc++.h>
using namespace std;
int main() {

    int num_of_votes, a_votes = 0, b_votes = 0;
    string votes;

    cin >> num_of_votes >> votes;

    for (int i = 0; i < num_of_votes; i++){
        if (votes[i] == 'A'){
            a_votes++;
        } else {
            b_votes++;
        }
    }
    if (a_votes > b_votes) {
        cout << "A";
    } else if (b_votes > a_votes) {
        cout << "B";
    } else if (b_votes == a_votes) {
        cout << "Tie";
    }
    return 0;
}