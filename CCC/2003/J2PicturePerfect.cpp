#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_of_photos, perimeter, length, width;

    cin >> num_of_photos;
    

    while (num_of_photos != 0) {
        length = sqrt(num_of_photos);
        width = num_of_photos/length;
        // Validate length x width = num_of_photos ?
        // What should we do if the length and width are not we want
        // length--; we get new length, and new width
        // Validate length x width = num_of_photos
        // What should we do if the length and width are not we want
        while ( length*width != num_of_photos) {
            length--;
            width = num_of_photos/length;
        }

        perimeter = length + length + width + width;

      
        cout << "Minimum perimeter is " << perimeter << " with dimensions " << length << " x " << width << endl;
         

        cin >> num_of_photos;
    }

    
    return 0;
}