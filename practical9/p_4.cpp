#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;

    while (true) {
        cout << "\n1. Add Folder\n2. Add File\n3. Display Directory\n4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            string folder;
            cout << "Enter folder name: ";
            cin >> folder;
            directory[folder];
            cout << "Folder added\n";
        }

        else if (choice == 2) {
            string folder, file;
            cout << "Enter folder name: ";
            cin >> folder;

            if (directory.find(folder) != directory.end()) {
                cout << "Enter file name: ";
                cin >> file;
                directory[folder].push_back(file);
                cout << "File added\n";
            } else {
                cout << "Folder not found\n";
            }
        }

        else if (choice == 3) {
            cout << "\nDirectory Structure:\n";
            for (map<string, vector<string>>::iterator it = directory.begin(); it != directory.end(); ++it) {
                cout << it->first << ":\n";
                for (vector<string>::iterator vit = it->second.begin(); vit != it->second.end(); ++vit) {
                    cout << "  - " << *vit << endl;
                }
            }
        }

        else if (choice == 4) {
            break;
        }

        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
