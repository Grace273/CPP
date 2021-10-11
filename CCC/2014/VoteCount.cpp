#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int votes, a_votes=0, b_votes=0;
    cin >> votes;

    for (int i = 0; i<votes; i++) {
        char input;
        if (input =='A') {
            a_votes++;
        } else {
            b_votes++;
        }

    }
    if (a_votes>b_votes) {
        cout << "A";
        
    } else if (b_votes>a_votes) {
        cout << "B";
    }else if (b_votes==a_votes) {
        cout << "Tie";
    }

    return 0;
}