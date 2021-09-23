#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum; 
    cin >> sum;

    for (int a=1; a<=100; a++) {
        for (int b= a+1; b<=100; b++) {
            for (int c= b+1; c<=100; c++) {
                if (a + b + c == sum ) { 
                    cout << a << " " << b << " " << c << endl;
            
                
            
                }

            }
        }
    }
}
