#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter your first name: ";
    
    // get user input & make a message
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";
    
    // the number of blanks surrounding the greeting
    const int pad = 0;

    // the number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;
    
    // write rows
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        
        // invariant: we have written c characters so far in the current row
        while (c != cols) {
                // is it time to write a greeting message?
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                // are we on the border?
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
