#include <bits/stdc++.h>
using namespace std;
int main() {
    map <string, int> my_dict = {
        {"Grace", 10},
        {"Tyler", 6}
    };

    cout << my_dict["Grace"] << endl;


    // ADD
    my_dict["D"] = 8;

    // UPDATE
    my_dict["A"] = 9;

    // DELETE
    my_dict.erase("A");
    
    for (auto &item : my_dict) {
        cout << item.first << " " << item.second << endl;
    }
    //DETERMINE KEY EXIST IN MAP
    int has_key = my_dict.count("2"); //1   2 is a key
    //if (has_key > 0) {
    if (my_dict.count("2") > 0) {
        cout << "Key does exist." << endl;
    } else{
        cout << "Key doesn't exist!" << endl;
    }
}