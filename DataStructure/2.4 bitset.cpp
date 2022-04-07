#include <bits/stdc++.h>
using namespace std;
int main() {
    //Declare Bitset and bitset operation

    bitset <8> bits("00000000");
    //bitset <8> bits(0);  //decimal number

    bits.set(0,1);
    //or
    bits[0] = 1;

    bits.set(7,1);
    bits[7] = 1;

    bits.reset(7);
    bits[7] = 0;

    //Output bitset
    cout << bits << endl;

    int x = 5;
    cout << int(6.5) << endl; // convert decimal
    cout << bitset<8>(x) << endl;

    string binary_str = bitset<8>(x).to_string();
    cout << binary_str << endl;
    cout << binary_str[2] << endl;

    //Access and Iterate Bitset
}