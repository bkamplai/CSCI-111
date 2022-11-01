#include <iostream>
#include <cstring>

using namespace std;

int main() {

    cout << "Please enter a palindrome candidate word: " << endl;
    char word[256] ="";
    cin >> word;

    int res = 1; // Assume it is palindrome
    //int str_length = strlen(word);

    for (int i=0; (i<=strlen(word)/2)-1; i++) {

        if (word[i] != word[strlen(word)/2-i]) {

            res = 0;
            break;

        }

    } if (res==1) {

        cout << "palindrome" << endl;

    } else {

        cout << "NOT palindrome" << endl;

    }

    return 0;

}