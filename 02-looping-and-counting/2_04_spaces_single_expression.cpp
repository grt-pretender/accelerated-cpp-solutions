/* The framing program writes the mostly blank lines that separate the borders 
from the greeting one character at a time. 
Change the program so that it writes all the spaces needed in a single output expression.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter your first name: ";
    
    // get user input & make a message
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";
    
    // the number of blanks surrounding the greeting: 2 options
    const int pad_for_rows = 3;
    const int pad_for_cols = 1;

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
                    ++c;
                } else {
                // pre-count number of spaces to draw
                    string::size_type count_spaces = r == pad_for_rows + 1 ? pad_for_cols : cols - c - 1;
                    cout << string(count_spaces, ' ');
                    c += count_spaces;
                }
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
