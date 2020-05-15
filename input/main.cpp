#include <iostream>
using namespace std;
int main(){

    float x; // Variable x
    float y; // Variable y

    cout << "Type an number: "; // Enter the number
    cin >> x; // Get the value
    cout << "Type an number: "; // Enter the number
    cin >> y; // Get the value
    // cout << x << endl; // Show the value x
    // cout << y << endl; // Show the value y
    double division = x / y;
    cout << division << endl;
    //cout << (x<y) << endl;
    int sum = x + y;
    cout << "The sum of " << x << " and " << y << " is equal to " << sum << endl;
    int multiply = x * y;
    cout << "The multiply of " << x << " and " << y << " is equal to " << multiply << endl;
    float divide = x / y;
    cout << "The division of " << x << " and " << y << " is equal to " << divide << endl;
    int subtract = x - y;
    cout << "The subtraction of " << x << " and " << y << " is equal to " << subtract << endl;
    // cout << "The increment of " << x << " is " << ++x << endl;
    // Logic operators

    bool True = x == y;
    cout << True << endl;
    return 0;
}
