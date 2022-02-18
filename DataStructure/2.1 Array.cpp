#include <bits/stdc++.h>
using namespace std;
int main() {

    //int doors[3]
    //int door_number[3] = {1,2,3};
    //int height[] = {3, 6, 9};
    //char spell[4] = {'W', 'O', 'O', 'F'};
    //float pi[1] = {3.14};
    //string greetings[] = {"Hi", "Hello", "Hey"};

    int foo[3];//  = {100, 200, 300};
    cin >> foo[0];
    

    //for (int i=0; i<3; i++) {
      //  cout << i<< endl;
        //cout << foo[i]<< endl;
    //}
    
    cout << "sizeof(int): " << sizeof(int) << " sizeof(foo): " << sizeof(foo) << endl;  // size of int 32 bit 4 bytes, foo size : 12 bytes
    cout << "array size or length: " << sizeof(foo)/sizeof(foo[0]) << endl;

  //SORT ARRAY ELEMENT 
  sort(arr, arr + n); // Ascending Order
  sort(arr, arr + n, greater<>()) //Descending Order
      //start //end
}