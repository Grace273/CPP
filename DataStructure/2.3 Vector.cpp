#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> vect = {5, 4, 3, 1, 6, 2}; //index 5 = vect[vect.size()-1]    "5"'s element/value = vect.front() "2"'s element/value = vect.back()
    // Access and Iterate Vector
    // Method 1
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    // Method 2
    for (auto item : vect) {
        cout << item;
    }
    cout << endl;
    // Vector Iterator
    sort(vect.begin(), vect.end());               // Ascending
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    sort(vect.begin(), vect.end(), greater<>());  // Descending
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    sort(vect.begin(), vect.begin() + 3); // Only sort first 3 elements
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    //Add element to the end
    vect.push_back(9);
    cout << "Add element to end: " ;
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    //Insert element by index, insert "10" the the second element
    vect.insert(vect.begin()+1,10);
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    //Remove the last element
    vect.pop_back();
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    //Remove the first element
    vect.erase(vect.begin());
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;
    //Remove the fifth element
    vect.erase(vect.begin()+4);   
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];   // "10" counts as one element
    }
    cout << endl;
    //Remove the second element to third element
    vect.erase(vect.begin()+1, vect.begin()+3);
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
    cout << endl;

}   
