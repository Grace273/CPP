#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "Hello World";

    cout << str[6];
    cout << str.length() << " " << str[11];

    // Combine String

    string greeting = "Hello World!\nHello World!\n";

    greeting = greeting + "Adding string.";
    greeting += "Adding string.";

    cout << "After combine string: "<< greeting << endl;
    cout << greeting << endl;

    //str = "Hello" + " world!"; not allowed in C++
    cout << str.length() << endl;

    // Insert and Cut String
    //str.insert(Position, String_to_Insert)
    str = str.insert(5, "Insertion");
    cout << "After insert: " << str << endl;

    // str.substr(Position, Length)
    str = str.substr(0,3);
    cout << "After substr: " << str << endl;

    // Replace String
    //str.replace(Position, Length, String_to_Replace)
    str = str.replace(2, 2, "oo");
    cout << "After replace: " << str << endl;

    //begin() - iterator to the first element
    // end() - iterator to the last element
    str.replace(str.begin(), str.end()-3, "Replace");
    cout << "After replace: " << str << endl;

    str.replace(str.begin(), str.begin()+3, "Replace");
    cout << "After replace: " << str << endl;

    
}