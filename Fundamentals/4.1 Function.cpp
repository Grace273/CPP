#include <bits/stdc++.h>
using namespace std;


//void my_function() {
    //cout << "Hello world!" <<endl; //code to be executed
    //cout << "Hi world!" <<endl;
//}

//int main() {
   // my_function(); //call the funciton
   // my_function();
    //return 0;
//}

// Define code once, use many times
// Organized code structure

//DRY: Don't Repeat Yourself


//Function with Parameters (no return value)

//void my_function(string name, int age) {
   // cout << "Name: " << name << " Age: " << age << endl;
//}

//int main () {
   // my_function("Alvin", 12);
   // my_function("Bruce", 10);
   // return 0;
//}

//Funciton with Parameters and Return value

int add_function(int x, int y) {
    int z = x + y;
    return z;
}

int main() {
    int sum = add_function(1, 12);
    sum = add_function (2,10);
    return 0;
}