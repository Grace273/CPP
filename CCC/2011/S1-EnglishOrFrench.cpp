#include <bits/stdc++.h>
using namespace std;
int main() {

    int num_of_lines, num_of_s = 0, num_of_t = 0;
    string text;

    cin >> num_of_lines;
    cin.ignore();

    for (int i = 0; i < num_of_lines; i++){
        getline(cin, text);
        for (int i = 0; i < text.size(); i++){
            if (text[i] == 's'|| text[i] == 'S'){
                num_of_s++;
            } else if (text[i] == 't'|| text[i] == 'T'){
                num_of_t++;
            }
        }
    }
    if (num_of_s > num_of_t) {
        cout << "French";
    } else if (num_of_t > num_of_s) {
        cout << "English";
    } else if (num_of_s == num_of_t) {
        cout << "French";
    }
    return 0;
}