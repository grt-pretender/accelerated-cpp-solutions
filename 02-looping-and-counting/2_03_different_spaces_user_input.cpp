/* Rewrite the framing program to ask the user to supply the amount of spacing 
to leave between the frame and the greeting.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter your first name: ";
    
    // get user input & make a message
    string name;
    int pad_for_rows;
    int pad_for_cols;

    cin >> name;
    const string greeting = "Hello, " + name + "!";

    cout << "How many spaces do you want on either side of the greeting?" << std::endl;
    cin >> pad_for_cols;
    cout << "How many spaces do you want above and below the greeting?" << std::endl;
    cin >> pad_for_rows;
    
    // the number of rows and columns to write
    const int rows = pad_for_rows * 2 + 3;
    const string::size_type cols = greeting.size() + pad_for_cols * 2 + 2;

    cout << endl;
    
    // write rows
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        
        // invariant: we have written c characters so far in the current row
        while (c != cols) {
                // is it time to write a greeting message?
            if (r == pad_for_rows + 1 && c == pad_for_cols + 1) {
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
