#include <bits/stdc++.h>
using namespace std;
int main() {

  int weight[3];
  for (int i =0; i< 3; i++){
    cin >> weight[i];
  }
  int n = sizeof(weight)/sizeof(weight[0]); // or int n=3
  sort (weight, weight+3);
  cout << weight[1] << endl;
      
    
    
   
    
}

