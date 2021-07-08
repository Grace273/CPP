#include <bits/stdc++.h>
using namespace std;
int main(){
   int cpu_choice;
   char player_choice;

   srand((unsigned)time(0));
   cpu_choice = rand()%3 + 1;

   cout << "Choose" << '\n' << "1) rock (r)" << '\n' << "2) paper (p)" << '\n' << "3) scissors (s)" << endl;
   cin >> player_choice; 

   cout << cpu_choice << '\n';

   if (player_choice == 'r') {
      if (cpu_choice == 1) { 
         cout << "Computer chose rock, it's a tie." << endl;
      } else if (cpu_choice == 2) {
         cout << "Computer chose paper, CPU wins." << endl;
      } else if (cpu_choice == 3) {
         cout << "Computer chose scissors, player wins." << endl;
      }
      
   } 
   
   if (player_choice == 'p') {
      if (cpu_choice == 1) {
         cout << "Computer chose rock, player wins." << endl;
      } else if (cpu_choice == 2) {
         cout << "Computer chose paper, it's a tie." << endl;
      } else if (cpu_choice == 3) {
         cout << "Computer chose scissors, CPU wins." << endl;
      }
      
   }

   if (player_choice == 's') {
      if (cpu_choice == 1) {
         cout << "Computer chose rock, CPU wins." << endl;
      } else if (cpu_choice == 2) {
         cout << "Computer chose paper, player wins." << endl;
      } else if (cpu_choice == 3) {
         cout << "Computer chose scissors, it's a tie." << endl;
      }
      
   }

   return 0;
}
