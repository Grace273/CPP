#include <bits/stdc++.h>
using namespace std;

int main()
{
    int youngest_age;   // Variable
    int middle_age;     // Variable
    int oldest_age;     // Variable

    cin >> youngest_age >> middle_age ;

    oldest_age = middle_age + ( middle_age - youngest_age );
    // It will ouput the answer
    cout << oldest_age << endl;
    return 0;
}