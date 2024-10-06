#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> countWordsInSentence(const string& sentence) {
    unordered_map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        // Remove punctuation from the word
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        wordCount[word]++;
    }

    return wordCount;
}

int main(){

string sentence = "Hello my name is Jane";
    unordered_map<string, int> result = countWordsInSentence(sentence);

    for (const auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;

}


// #include <iostream>
// #include <sstream>
// #include <unordered_map>
// #include <string>
// #include <cctype>
// #include <iterator>
// #include <algorithm>

// using namespace std;

// unordered_map<string, int> countWordsInSentence(const string& sentence) {
//     unordered_map<string, int> wordCount;
//     stringstream ss(sentence);
//     string word;

//     while (ss >> word) {
//         // Remove punctuation from the word
//         word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
//         wordCount[word]++;
//     }

//     return wordCount;
// }

// int main() {
//     string sentence = "Hello, hello! This is a test. A test sentence.";
//     unordered_map<string, int> result = countWordsInSentence(sentence);

//     for (const auto& pair : result) {
//         cout << pair.first << ": " << pair.second << endl;
//     }

//     return 0;
// }