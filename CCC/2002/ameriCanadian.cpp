#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;

    cin >> x;
    while (x != "quit!") { 
        
        if (x == "color") {
            cout << "colour" << endl;
        } else if (x == "neighbor") {
            cout << "neighbour" << endl;
        } else if (x == "taylor") {
            cout << "taylour" << endl;
        } else if ( x == "instructor"){
            cout << "instructour" << endl;
        } else {
            cout << x << endl;
        }
        
        cin >> x;

    }

    return 0;
}