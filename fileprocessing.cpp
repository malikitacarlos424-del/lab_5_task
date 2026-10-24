#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

// Function to reverse the statement
string Reverse(string fileData) {
    string reversed = "";

    for (int i = fileData.length() - 1; i >= 0; i--) {
        reversed += fileData[i];
    }

    return reversed;
}

int main() {
    // Open the text file
    ifstream myFile("TEXTFILE.txt");

    string fileData;
    string line;

    // Read the contents into fileData
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            if (!fileData.empty()) {
                fileData += "\n";
            }
            fileData += line;
        }

        myFile.close();
    }
    else {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    cout << "Original statement: " << fileData << endl;

    // Count vowels
    int vowels = 0;

    for (char ch : fileData) {
        ch = tolower(static_cast<unsigned char>(ch));

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    // Count words
    int words = 0;
    stringstream ss(fileData);
    string word;

    while (ss >> word) {
        words++;
    }

    cout << "Number of words: " << words << endl;

    // Reverse the statement
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    // Capitalize the second letter of each word
    string capitalized = fileData;
    bool secondLetter = false;

    for (int i = 0; i < capitalized.length(); i++) {
        if (isspace(static_cast<unsigned char>(capitalized[i]))) {
            secondLetter = false;
        }
        else {
            if (secondLetter) {
                capitalized[i] = toupper(
                    static_cast<unsigned char>(capitalized[i])
                );
                secondLetter = false;
            }
            else {
                secondLetter = true;
            }
        }
    }

    cout << "Second letter capitalized: " << capitalized << endl;

    return 0;
}