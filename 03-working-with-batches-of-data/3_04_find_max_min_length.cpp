// Write a program to report the length of the longest and shortest string in its input

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Please enter some words, followed by end-of-file: " << endl;

    vector<string> allWords;
    string word;

    typedef vector<int>::size_type vec_sz;
    vector<vec_sz> wordSizes;

    while (cin >> word) {
        allWords.push_back(word);
        wordSizes.push_back(word.size());
    }

    // sort values
    sort(wordSizes.begin(), wordSizes.end());
    int upperBound = wordSizes.size();

    // write the results
    cout << "Your words: " << endl;

    for (int i = 0; i < allWords.size(); i++) {
        cout << allWords[i] << endl;
    }
    cout << "Length of the shortest word: " << wordSizes[0] << endl;
    cout << "Length of the longest word: " << wordSizes[upperBound - 1] << endl;
}


