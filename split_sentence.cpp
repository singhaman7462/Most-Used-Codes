#include <bits/stdc++.h>
using namespace std;
pair<unordered_map<string, int>, vector<string>> countWordsAndStoreInOrder(const string& sentence) {
    unordered_map<string, int> wordCount;
    vector<string> wordsInOrder;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        // Remove punctuation from the word
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        
        // Store word in map and vector
        wordCount[word]++;
        wordsInOrder.push_back(word);
    }

    return {wordCount, wordsInOrder};
}


int main(){


    string sentence = "Hello, hello! This is a test. A test sentence.";
    auto result = countWordsAndStoreInOrder(sentence);

    // Output unordered_map with word counts
    cout << "Word counts:" << endl;
    for (const auto& pair : result.first) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Output vector with words in original order
    cout << "\nWords in order:" << endl;
    for (const string& word : result.second) {
        cout << word << " ";
    }


}


