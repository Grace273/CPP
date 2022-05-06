#include <bits/stdc++.h>
using namespace std;

bool distinct_digi(int year){
    int digits = 0;
    set <int> num_year;
    while (year != 0) {
        num_year.insert(year%10);
        year = year/10;
        digits++;
    }    
    if (num_year.size() == digits){
        return true;
    } else {
        return false;
    }
}
bool distinct_char(int year){
    set <int> num_year;
    string str_year = to_string(year);
    for (int i = 0; i < str_year.size(); i++) {
        num_year.insert(str_year[i]);
    }    
    if (num_year.size() == str_year.size()){
        return true;
    } else {
        return false;
    }
}
//bool distinct_chr(){
    
    //for (int i = year +1; i <= 10000; i++){
    //    string str_year = to_string(i);
    //    set<int> year_set(string.begin(), string_year.end());

    //    if (year_set.size() == str_year.size()){
    //        cout << i << endl;
    //        break;
    //    }

//}
    //return 0;
//}
int main() {
    int year;
    cin >> year;

    for (int i = year+1;; i++){
        if (distinct_char(i)){
            cout << i << endl;
            break;
        }
    }
   
    return 0;
}