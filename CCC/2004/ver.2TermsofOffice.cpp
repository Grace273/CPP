#include <bits/stdc++.h>
using namespace std;

void positionchanges(int start_year, int end_year){
    int years_between;
    cout<< "All positions change in year " << start_year << endl;
    years_between=(end_year-start_year)/60;
    while (years_between >0) {
        start_year = start_year + 60;
        years_between--;
        cout<< "All positions change in year " << start_year << endl;
    }
}

int main(){
    int start_year, end_year;
    cin >> start_year >> end_year;
    positionchanges(start_year, end_year);
    return 0;
}