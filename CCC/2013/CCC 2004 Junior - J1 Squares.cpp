#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_tiles;
    int largest_square_side_length;

    cin >> number_of_tiles;

    largest_square_side_length = sqrt(number_of_tiles);
    
    cout << "The largest square has side length " << largest_square_side_length <<"."<<endl;

    return 0;
}