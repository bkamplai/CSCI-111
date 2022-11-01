/*
###################################################################
# Program name: assignment_3.cpp
# Author      : Brandon Kamplain
# Date written: Oct. 27, 2021
# Description : This program takes in inputed file and encrypts it
# using a "secret" key, displays the encrypted text, then decrypts
# the text and displays that.
###################################################################
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

//Function prototypes
void encrypt_file();
void display_encrypted_file();
void decrypt_file();
void display_decrypted_file();

int main () {

    encrypt_file();
    display_encrypted_file();
    decrypt_file();
    display_decrypted_file();

    return 0;

}

//Function definitions

void encrypt_file() {

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("inputfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {}

    int n = myText.length();
 
    // declaring arrays
    char input_array[n + 1];
    char encrypt_array[n + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(input_array, myText.c_str());
 
    for (int i = 0; i < n; i++) {
        
        if (input_array[i] == 'a') {
            encrypt_array[i] = 'z';
        } else if (input_array[i] == 'b') {
            encrypt_array[i] = 'y';
        } else if (input_array[i] == 'c') {
            encrypt_array[i] = 'x';
        } else if (input_array[i] == 'd') {
            encrypt_array[i] = 'w';
        } else if (input_array[i] == 'e') {
            encrypt_array[i] = 'v';
        } else if (input_array[i] == 'f') {
            encrypt_array[i] = 'u';
        } else if (input_array[i] == 'g') {
            encrypt_array[i] = 't';
        } else if (input_array[i] == 'h') {
            encrypt_array[i] = 's';
        } else if (input_array[i] == 'i') {
            encrypt_array[i] = 'r';
        } else if (input_array[i] == 'j') {
            encrypt_array[i] = 'q';
        } else if (input_array[i] == 'k') {
            encrypt_array[i] = 'p';
        } else if (input_array[i] == 'l') {
            encrypt_array[i] = 'o';
        } else if (input_array[i] == 'm') {
            encrypt_array[i] = 'n';
        } else if (input_array[i] == 'n') {
            encrypt_array[i] = 'm';
        } else if (input_array[i] == 'o') {
            encrypt_array[i] = 'l';
        } else if (input_array[i] == 'p') {
            encrypt_array[i] = 'k';
        } else if (input_array[i] == 'q') {
            encrypt_array[i] = 'j';
        } else if (input_array[i] == 'r') {
            encrypt_array[i] = 'i';
        } else if (input_array[i] == 's') {
            encrypt_array[i] = 'h';
        } else if (input_array[i] == 't') {
            encrypt_array[i] = 'g';
        } else if (input_array[i] == 'u') {
            encrypt_array[i] = 'f';
        } else if (input_array[i] == 'v') {
            encrypt_array[i] = 'e';
        } else if (input_array[i] == 'w') {
            encrypt_array[i] = 'd';
        } else if (input_array[i] == 'x') {
            encrypt_array[i] = 'c';
        } else if (input_array[i] == 'y') {
            encrypt_array[i] = 'b';
        } else if (input_array[i] == 'z') {
            encrypt_array[i] = 'a';
        } else if (input_array[i] == 'A') {
            encrypt_array[i] = 'Z';
        } else if (input_array[i] == 'B') {
            encrypt_array[i] = 'Y';
        } else if (input_array[i] == 'C') {
            encrypt_array[i] = 'X';
        } else if (input_array[i] == 'D') {
            encrypt_array[i] = 'W';
        } else if (input_array[i] == 'E') {
            encrypt_array[i] = 'V';
        } else if (input_array[i] == 'F') {
            encrypt_array[i] = 'U';
        } else if (input_array[i] == 'G') {
            encrypt_array[i] = 'T';
        } else if (input_array[i] == 'H') {
            encrypt_array[i] = 'S';
        } else if (input_array[i] == 'I') {
            encrypt_array[i] = 'R';
        } else if (input_array[i] == 'J') {
            encrypt_array[i] = 'Q';
        } else if (input_array[i] == 'K') {
            encrypt_array[i] = 'P';
        } else if (input_array[i] == 'L') {
            encrypt_array[i] = 'O';
        } else if (input_array[i] == 'M') {
            encrypt_array[i] = 'N';
        } else if (input_array[i] == 'N') {
            encrypt_array[i] = 'M';
        } else if (input_array[i] == 'O') {
            encrypt_array[i] = 'L';
        } else if (input_array[i] == 'P') {
            encrypt_array[i] = 'K';
        } else if (input_array[i] == 'Q') {
            encrypt_array[i] = 'J';
        } else if (input_array[i] == 'R') {
            encrypt_array[i] = 'I';
        } else if (input_array[i] == 'S') {
            encrypt_array[i] = 'H';
        } else if (input_array[i] == 'T') {
            encrypt_array[i] = 'G';
        } else if (input_array[i] == 'U') {
            encrypt_array[i] = 'F';
        } else if (input_array[i] == 'V') {
            encrypt_array[i] = 'E';
        } else if (input_array[i] == 'W') {
            encrypt_array[i] = 'D';
        } else if (input_array[i] == 'X') {
            encrypt_array[i] = 'C';
        } else if (input_array[i] == 'Y') {
            encrypt_array[i] = 'B';
        } else if (input_array[i] == 'Z') {
            encrypt_array[i] = 'A';
        } else if (input_array[i] == ' ') {
            encrypt_array[i] = ' ';
        } else if (input_array[i] == '.') {
            encrypt_array[i] = '.';
        } else if (input_array[i] == '!') {
            encrypt_array[i] = '!';
        } else if (input_array[i] == '(') {
            encrypt_array[i] = '(';
        } else if (input_array[i] == ')') {
            encrypt_array[i] = ')';
        } else if (input_array[i] == '-') {
            encrypt_array[i] = '-';
        } else if (input_array[i] == ';') {
            encrypt_array[i] = ';';
        } else if (input_array[i] == ':') {
            encrypt_array[i] = ':';
        } else if (input_array[i] == '"') {
            encrypt_array[i] = '"';
        } else if (input_array[i] == ',') {
            encrypt_array[i] = ',';
        }else if (input_array[i] == '?') {
            encrypt_array[i] = '?';
        }
    }

    // Close the file
    MyReadFile.close();

    // Create a text file
    ofstream MyWriteFile("encryptedfile.txt");

    // Write to the file
    MyWriteFile << encrypt_array;
 
    // Close the file
    MyWriteFile.close();



}

void display_encrypted_file() {

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("encryptedfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    
        // Output the text from the file
        cout << endl << "Encrypted file: " << myText << endl << endl;

    }

}

void decrypt_file() {

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("encryptedfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {}

    int n = myText.length();
 
    // declaring arrays
    char encrypt_array[n + 1];
    char decrypt_array[n + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(encrypt_array, myText.c_str());
 
    for (int i = 0; i < n; i++) {
        
        if (encrypt_array[i] == 'z') {
            decrypt_array[i] = 'a';
        } else if (encrypt_array[i] == 'y') {
            decrypt_array[i] = 'b';
        } else if (encrypt_array[i] == 'x') {
            decrypt_array[i] = 'c';
        } else if (encrypt_array[i] == 'w') {
            decrypt_array[i] = 'd';
        } else if (encrypt_array[i] == 'v') {
            decrypt_array[i] = 'e';
        } else if (encrypt_array[i] == 'u') {
            decrypt_array[i] = 'f';
        } else if (encrypt_array[i] == 't') {
            decrypt_array[i] = 'g';
        } else if (encrypt_array[i] == 's') {
            decrypt_array[i] = 'h';
        } else if (encrypt_array[i] == 'r') {
            decrypt_array[i] = 'i';
        } else if (encrypt_array[i] == 'q') {
            decrypt_array[i] = 'j';
        } else if (encrypt_array[i] == 'p') {
            decrypt_array[i] = 'k';
        } else if (encrypt_array[i] == 'o') {
            decrypt_array[i] = 'l';
        } else if (encrypt_array[i] == 'n') {
            decrypt_array[i] = 'm';
        } else if (encrypt_array[i] == 'm') {
            decrypt_array[i] = 'n';
        } else if (encrypt_array[i] == 'l') {
            decrypt_array[i] = 'o';
        } else if (encrypt_array[i] == 'k') {
            decrypt_array[i] = 'p';
        } else if (encrypt_array[i] == 'j') {
            decrypt_array[i] = 'q';
        } else if (encrypt_array[i] == 'i') {
            decrypt_array[i] = 'r';
        } else if (encrypt_array[i] == 'h') {
            decrypt_array[i] = 's';
        } else if (encrypt_array[i] == 'g') {
            decrypt_array[i] = 't';
        } else if (encrypt_array[i] == 'f') {
            decrypt_array[i] = 'u';
        } else if (encrypt_array[i] == 'e') {
            decrypt_array[i] = 'v';
        } else if (encrypt_array[i] == 'd') {
            decrypt_array[i] = 'w';
        } else if (encrypt_array[i] == 'c') {
            decrypt_array[i] = 'x';
        } else if (encrypt_array[i] == 'b') {
            decrypt_array[i] = 'y';
        } else if (encrypt_array[i] == 'a') {
            decrypt_array[i] = 'z';
        } else if (encrypt_array[i] == 'Z') {
            decrypt_array[i] = 'A';
        } else if (encrypt_array[i] == 'Y') {
            decrypt_array[i] = 'B';
        } else if (encrypt_array[i] == 'X') {
            decrypt_array[i] = 'C';
        } else if (encrypt_array[i] == 'W') {
            decrypt_array[i] = 'D';
        } else if (encrypt_array[i] == 'V') {
            decrypt_array[i] = 'E';
        } else if (encrypt_array[i] == 'U') {
            decrypt_array[i] = 'F';
        } else if (encrypt_array[i] == 'T') {
            decrypt_array[i] = 'G';
        } else if (encrypt_array[i] == 'S') {
            decrypt_array[i] = 'H';
        } else if (encrypt_array[i] == 'R') {
            decrypt_array[i] = 'I';
        } else if (encrypt_array[i] == 'Q') {
            decrypt_array[i] = 'J';
        } else if (encrypt_array[i] == 'P') {
            decrypt_array[i] = 'K';
        } else if (encrypt_array[i] == 'O') {
            decrypt_array[i] = 'L';
        } else if (encrypt_array[i] == 'N') {
            decrypt_array[i] = 'M';
        } else if (encrypt_array[i] == 'M') {
            decrypt_array[i] = 'N';
        } else if (encrypt_array[i] == 'L') {
            decrypt_array[i] = 'O';
        } else if (encrypt_array[i] == 'K') {
            decrypt_array[i] = 'P';
        } else if (encrypt_array[i] == 'J') {
            decrypt_array[i] = 'Q';
        } else if (encrypt_array[i] == 'I') {
            decrypt_array[i] = 'R';
        } else if (encrypt_array[i] == 'H') {
            decrypt_array[i] = 'S';
        } else if (encrypt_array[i] == 'G') {
            decrypt_array[i] = 'T';
        } else if (encrypt_array[i] == 'F') {
            decrypt_array[i] = 'U';
        } else if (encrypt_array[i] == 'E') {
            decrypt_array[i] = 'V';
        } else if (encrypt_array[i] == 'D') {
            decrypt_array[i] = 'W';
        } else if (encrypt_array[i] == 'C') {
            decrypt_array[i] = 'X';
        } else if (encrypt_array[i] == 'B') {
            decrypt_array[i] = 'Y';
        } else if (encrypt_array[i] == 'A') {
            decrypt_array[i] = 'Z';
        } else if (encrypt_array[i] == ' ') {
            decrypt_array[i] = ' ';
        } else if (encrypt_array[i] == '.') {
            decrypt_array[i] = '.';
        } else if (encrypt_array[i] == '!') {
            decrypt_array[i] = '!';
        } else if (encrypt_array[i] == '(') {
            decrypt_array[i] = '(';
        } else if (encrypt_array[i] == ')') {
            decrypt_array[i] = ')';
        } else if (encrypt_array[i] == '-') {
            decrypt_array[i] = '-';
        } else if (encrypt_array[i] == ';') {
            decrypt_array[i] = ';';
        } else if (encrypt_array[i] == ':') {
            decrypt_array[i] = ':';
        } else if (encrypt_array[i] == '"') {
            decrypt_array[i] = '"';
        } else if (encrypt_array[i] == ',') {
            decrypt_array[i] = ',';
        }else if (encrypt_array[i] == '?') {
            decrypt_array[i] = '?';
        }
    }

    // Close the file
    MyReadFile.close();

    // Create a text file
    ofstream MyWriteFile("decryptedfile.txt");

    // Write to the file
    MyWriteFile << decrypt_array;
 
    // Close the file
    MyWriteFile.close();

}

void display_decrypted_file() {

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("decryptedfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    
        // Output the text from the file
        cout << "Decrypted file: " << myText << endl << endl;

    }

}