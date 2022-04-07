#include <bits/stdc++.h>
using namespace std;
int main() {
    int button_num, num_of_press;
    vector <char> songs = {'A', 'B', 'C', 'D', 'E'};

    while (cin >> button_num >> num_of_press){
        for (int i = 0; i < num_of_press; i++) {
            if (button_num == 1) {
                songs.push_back(songs.front());
                songs.erase(songs.begin());
            } else if (button_num == 2) {
                songs.insert(songs.begin(), songs.back());
                songs.pop_back();
            } else if (button_num == 3) {
                swap(songs[0], songs[1]);
            } else {
                for (auto item : songs) {
                cout << item << " ";
                }
            }
        }
    }
    return 0;
}