#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ISBN, third_last_digit, second_last_digit, last_digit;
    ISBN = 91;

    cin >> third_last_digit >> second_last_digit >> last_digit;

    cout <<"The 1-3-sum is "<<ISBN+(third_last_digit*1)+(second_last_digit*3)+(last_digit*1);

    return 0;
}