#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string username;
    getline(cin, username);
 
    // Check if the username contains only English alphabets and has at most 10 letters
    bool valid = true;
    if (username.length() > 10) {
        valid = false;
    } else {
        for (char c : username) {
            if (!isalpha(c)) {
                valid = false;
                break;
            }
        }
    }

    if (valid) {
        // Do something with the username...
        cout << "Hello " << username << "!" << endl;
    } else {
        cout << "Invalid username." << endl;
    }

    return 0;
}
