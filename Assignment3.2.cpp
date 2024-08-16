#include <iostream>
#include <string>

using namespace std;

// Function to translate a word into alien language
void translateWord(string* wordPtr) {
    // Simulate alien translation by replacing vowels with 'x'
    for (int i = 0; i < wordPtr->length(); ++i) {
        char c = (*wordPtr)[i]; // Access character at index i
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            (*wordPtr)[i] = 'x'; // Replace vowel with 'x'
        }
    }
}

int main() {
    // Welcome message
    cout << "Welcome to the Alien Language Translator!" << endl;

    // Create a string and a pointer to it
    string englishWord = "hello";
    string* wordPtr = &englishWord;

    // Display original word
    cout << "English word: " << englishWord << endl;

    // Translate the word using the pointer
    translateWord(wordPtr);

    // Display translated word
    cout << "Alien word: " << englishWord << endl;

    return 0;
}