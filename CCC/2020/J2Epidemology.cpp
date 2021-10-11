#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int goal, day0_infected, next_day_infected, total, day=0, infected;
    cin >> goal >> day0_infected >> next_day_infected;
    total = day0_infected;
    infected = day0_infected;
   
    while (total <= goal) {
        infected = next_day_infected * infected;
        total = total + infected;
        day++;
    }
    cout << day << endl;
    return 0;
}
