#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    map<string, int> freq;
    string word = "";

    for (int i = 0; i <= sentence.length(); i++) {
        char ch = sentence[i];

        if (ch >= 'A' && ch <= 'Z') ch += 32;

        if (ch != ' ' && ch != '\0') {
            word += ch;
        } else {
            if (word != "") {
                freq[word]++;
                word = "";
            }
        }
    }

    for (map<string, int>::iterator it = freq.begin(); it != freq.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
