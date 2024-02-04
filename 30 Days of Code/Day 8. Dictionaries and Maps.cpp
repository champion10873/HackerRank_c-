#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    map<string, string> phoneBook;

    // Read the phone book entries
    for (int i = 0; i < n; i++) {
        string name, phoneNumber;
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }

    // Process queries
    string query;
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}