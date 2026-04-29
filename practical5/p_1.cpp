#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph;
    getline(cin, paragraph);

    string words[1000];
    int freq[1000];
    int count = 0;

    for (int i = 0; i < 1000; i++) freq[i] = 0;

    string temp = "";

    for (int i = 0; i <= paragraph.length(); i++) {
        char ch = paragraph[i];

        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;

        if (ch != ' ' && ch != '\0') {
            temp += ch;
        } else {
            if (temp != "") {
                int found = -1;
                for (int j = 0; j < count; j++) {
                    if (words[j] == temp) {
                        found = j;
                        break;
                    }
                }
                if (found != -1) {
                    freq[found]++;
                } else {
                    words[count] = temp;
                    freq[count] = 1;
                    count++;
                }
                temp = "";
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << words[i] << " : " << freq[i] << endl;
    }

    return 0;
}
