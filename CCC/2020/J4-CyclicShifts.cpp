#include <bits/stdc++.h>
using namespace std;
int main() {    
    string text, shift_num;
    int num_of_match;
    cin >> text >> shift_num;

    for(int i = 0; i < shift_num.size(); i++){
        auto num_of_match = text.find(shift_num);
        if (num_of_match!= string::npos){
            cout << "yes";
            return 0;
        } else {
            shift_num.push_back(shift_num.front());
            shift_num.erase(shift_num.begin());
        }
    }
    cout << "no";

    return 0;
}