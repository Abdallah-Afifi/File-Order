

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool file_ordered(string infile) {
    ifstream fin(infile);
    string prev_word, curr_word;
    fin >> prev_word; // read the first word from the file
    while (fin >> curr_word) { // read the rest of the words
        if (curr_word < prev_word) { // if the current word is less than the previous one
            return false; // the file is not ordered
        }
        prev_word = curr_word; // update the previous word
    }
    return true; // all words are ordered
}

int main() {
    string infile = "words.txt";
    bool ordered = file_ordered(infile);
    if (ordered) {
        cout << "The file " << infile << " is ordered." << endl;
    }
    else {
        cout << "The file " << infile << " is not ordered." << endl;
    }
    return 0;
}

