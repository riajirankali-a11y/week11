
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> freq;

    string word;

    cout << "Enter words (type END to stop):" << endl;

    while (cin >> word && word != "END") {
        freq[word]++;
    }

    cout << "\nWord Frequencies:" << endl;

    string mostFrequent;
    int maxCount = 0;

    for (auto p : freq) {
        cout << p.first << " : "
             << p.second << endl;

        if (p.second > maxCount) {
            maxCount = p.second;
            mostFrequent = p.first;
        }
    }

    if (!freq.empty()) {
        cout << "\nMost frequent word: "
             << mostFrequent << endl;

        cout << "Frequency: "
             << maxCount << endl;
    }
    else {
        cout << "No words entered." << endl;
    }

    return 0;
}
