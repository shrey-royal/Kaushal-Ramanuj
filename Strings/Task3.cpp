#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWords(const string& sentence) {
    string reversedSentence;
    string reversedWord;

    for(char ch : sentence) {
        if(ch == ' ') {
            reverse(reversedWord.begin(), reversedWord.end());
            reversedSentence += reversedWord + ' ';
            reversedWord.clear();
        } else {
            reversedWord += ch;
        }
    }

    reverse(reversedWord.begin(), reversedWord.end());
    reversedSentence += reversedWord;

    return reversedSentence;
}

int main() {
    string input = "Hello World, how are you?";
    string output = reverseWords(input);

    cout << "Input: " << input << endl << "Output: " << output << endl;

    return 0;
}
