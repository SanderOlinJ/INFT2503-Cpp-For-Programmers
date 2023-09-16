#include <iostream>

using namespace std;

int main() {
    // TASK A
    cout << "----------------\nTask A" << endl;
    string word1, word2, word3;
    cout << "Word nr. 1:" << endl;
    cin >> word1;
    cout << "Word nr. 2:" << endl;
    cin >> word2;
    cout << "Word nr. 3:" << endl;
    cin >> word3;

    // TASK B
    cout << "----------------\nTask B" << endl;
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << sentence << endl;

    // TASK C
    cout << "----------------\nTask C" << endl;
    cout << "Length of word nr. 1: " << word1.length() << endl
         << "Length of word nr. 2: " << word2.length() << endl
         << "Length of word nr. 3: " << word3.length() << endl
         << "Length of sentence: " << sentence.length() << endl;

    // TASK D
    cout << "----------------\nTask D" << endl;
    string sentence2 = sentence;

    //TASK E
    cout << "----------------\nTask E" << endl;
    for (int i = 9; i <= 11; i++){
        if (sentence.length() > i) {
            sentence2[i] = 'x';
        }
    }
    cout << sentence << endl
         << sentence2 << endl;

    // TASK F
    cout << "----------------\nTask F" << endl;
    string sentence_start;
    if (sentence.length() > 5) {
        sentence_start = sentence.substr(0, 5);
    } else {
        sentence_start = sentence.substr(0, sentence.length());
    }
    cout << sentence << endl
         << sentence_start << endl;

    // TASK G
    cout << "----------------\nTask G" << endl;
    size_t found = sentence.find("hallo");
    if (found != string::npos) {
        cout << "The sentence contains the word \"hallo\"." << std::endl;
    } else {
        cout << "The sentence does not contain the word \"hallo\"." << std::endl;
    }

    // TASK H
    cout << "----------------\nTask H" << endl;
    string searchString = "er";
    size_t foundPos = sentence.find(searchString);
    int count = 0;
    while (foundPos != std::string::npos) {
        count++;
        foundPos = sentence.find(searchString, foundPos + 1);
    }
    cout << "The total number of '" << searchString <<  "' occurrences is: " << count << endl;

    return 0;
}
