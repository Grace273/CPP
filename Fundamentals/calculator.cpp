#include <bits/stdc++.h>
using namespace std;

float a,b;
char operation;

void addition(){
    cout << "= " << a+b << endl;
}

void subtraction(){
    cout << "= " << a-b << endl;
}
void multiplication(){
    cout << "= " << a*b << endl;
}
void division(){
    cout << "= " << a/b << endl;
}

int main() {

    cout<< "Enter your calculation ie; '3+4' (multiplication is '*' division is '/')" << endl;

    cin >> a >> operation >> b;

    if (operation == '+'){
        addition();
    } else if (operation == '-'){
        subtraction();
    } else if (operation == '*'){
        multiplication();
    } else if (operation == '/'){
        division();
    }
    
    return 0;
}