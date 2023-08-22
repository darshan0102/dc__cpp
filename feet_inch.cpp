#include <iostream>

using namespace std;

int main() {
    int feet;
    
 
    cout << "Enter the number of feet: ";
    cin >> feet;
    
    int inches = feet * 12;
    
    
    cout << feet << " feet to " << inches << " inches.";
    
    return 0;
}
