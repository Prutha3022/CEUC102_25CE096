#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    string filename;

    while (true) {
        cout << "Enter file path (or type exit): ";
        cin >> filename;

        if (filename == "exit") return 0;

        ifstream file(filename);

        if (!file) {
            cout << "Error: Cannot open file. Try again.\n";
            continue;
        }

        string line;
        int lineNo = 0;

        while (getline(file, line)) {
            lineNo++;
            stringstream ss(line);
            double num, sum = 0;
            int count = 0;
            bool valid = true;

            while (ss >> num) {
                sum += num;
                count++;
            }

            if (!ss.eof()) {
                valid = false;
            }

            if (valid && count > 0) {
                cout << "Line " << lineNo << " -> Sum: " << sum
                     << ", Avg: " << (sum / count) << endl;
            } else {
                cout << "Line " << lineNo << " -> Invalid data skipped\n";
            }
        }

        file.close();
        break;
    }

    return 0;
}
