#include <bits/stdc++.h>
using namespace std;

int main() {

    //int x=0;
    //while (x<10) {
        //cout << "x is smaller than 10" << endl;
        //cout << x << endl;

        //x-=2;
    //}

    //char input; 
   // while (cin >> input) {
   //     cout << "Within while loop!" << endl;
   //     cout << "Your input is " << input << endl;

    //    if (input=='Q' || input == 'q')
   //      break;
   // }

   string response;
   do{
       cout << "Enter menu choice" << endl; 
       cout << "More" << endl << "Quit" << endl;
       cin >> response;
       cout << "You input:" << response<< endl;
   } while (response != "Quit");
}

