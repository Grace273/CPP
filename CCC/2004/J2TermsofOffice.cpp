#include <bits/stdc++.h>
using namespace std;

int start_year, end_year, years_between;

void positionchanges(){

    cout<< "All positions change in year " << start_year << endl;

    years_between=(end_year-start_year)/60;

    while (years_between >0) {
        start_year = start_year + 60;
        years_between--;
        cout<< "All positions change in year " << start_year << endl;
    }

}

int main(){
    
    cin >> start_year >> end_year;
    positionchanges();
    return 0;
}
