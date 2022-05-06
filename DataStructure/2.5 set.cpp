#include <bits/stdc++.h>
using namespace std;
int main(){
    //set are containers that only store unique elements following a specific order
   // set<char> my_set;
    set<int> my_set = {2, 3, 4, 1};

    my_set.insert(3);
    my_set.insert(2);
    my_set.insert(1);
    my_set.insert(5);

    cout << "Set size: " << my_set.size()<<endl;

    //ITERATE SET AND DELETE ELEMENT
    //for (int item: my_set);
    for (auto item : my_set){
        cout << item << " ";
    }
    cout << endl;
    //Delete element and delete all elements
   // my_set.erase(1);
   // my_set. clear();

   for (auto it = my_set.begin(); it != my_set.end(); it++){
       cout << "element's Values: " << *it << endl;
   }

    //Access Set by Index
    //auto it = my_set.begin(); //Pointer of first element
    //cout << *it << endl;

    //advance(it, 2);    //Current pointer + 2
    //cout << *it << endl;

    //DETERMINE ELEMENT IN SET
    auto find_it = my_set.find(7);
    if (find_it != my_set.end()){
        cout << "Found!" << endl;
    } else {
        cout << "Not found!" << endl;
    }

    //UNORDERED SET

    unordered_set<int> unorder_set;

    unorder_set.insert(1);
    unorder_set.insert(3);
    unorder_set.insert(4);
    unorder_set.insert(2);
    unorder_set.insert(2);

    for (auto item : unorder_set){
        cout << item << " ";
    }

    return 0;
}