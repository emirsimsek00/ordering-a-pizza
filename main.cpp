#include <iostream>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int topping;
    
    bool sizval;
    
    double total;
    
    string size;
    
    cout << "What size pizza would you like to order?" << endl;
    cin >> size;
    
    cout << "How many toppings do you want?" << endl;
    cin >> topping;
    
    // Validate pizza size
    if (size != "S" && size != "M" && size != "L") {
        sizval = false;
    } else {
        sizval = true; 
    }
    
    // Handle invalid size and toppings first
    if (!sizval && topping < 0) {  // Both invalid size and toppings
        cout << "Invalid pizza size and number of toppings." << endl;
    } else if (!sizval && topping >= 0) {  // Invalid size
        cout << "Invalid pizza size." << endl;
    } else if (sizval && topping < 0) {  // Invalid number of toppings
        cout << "Invalid number of toppings." << endl;
    } else {
        // Calculate total based on valid size and toppings
        if (size == "S") {  // Small
            total = 8 + 0.99 * topping;
        } else if (size == "M") {  // Medium
            total = 10 + 1.99 * topping;
        } else if (size == "L") {  // Large
            total = 14 + 2.99 * topping;
        }
        cout << "Your total is $" << fixed << setprecision(2) << total << endl;
    }

    return 0;
}