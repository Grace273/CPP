#include <bits/stdc++.h>
using namespace std;

int main()
{
   int Toonces_speed = 60, Toonces_minutes_left, Gonzalezs_speed = 75, Gonzalezs_minutes_left, kilometers_left = 10, time_saved;
   // int Toonces_speed, Toonces_minutes_left, Gonzalezs_speed, Gonzalezs_minutes_left, kilometers_left, time_saved;
   // cin >> Toonces_speed >> Gonzalezs_speed >> kilometers_left; 

   Toonces_minutes_left = kilometers_left*60 / Toonces_speed;      
   Gonzalezs_minutes_left = kilometers_left*60 / Gonzalezs_speed;
   time_saved = Toonces_minutes_left - Gonzalezs_minutes_left;

   cout << "It will take Toonces " << Toonces_minutes_left << " min to go the last " << kilometers_left << "km." << endl;
   cout << "It will take Gonzalez " << Gonzalezs_minutes_left << " min to go the last " << kilometers_left << "km." << endl;
   cout << "minutes guy Gonzalez saved " << time_saved << " minutes on the last " << kilometers_left << " km compared to Toonces." << endl;

   return 0;
}