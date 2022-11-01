#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

//Function prototypes
void isInputFileReadable(ifstream&, string, string);
void read_inputfile(ifstream&, string, string);
void compute_freq(ifstream&, int[]);
void close_file_ptr(ifstream&);

int main() {

    ifstream inputfile_ptr;

    string inputfile_dir = "/Users/brandonkamplain/OneDrive - Colorado Mesa University/2021-22/Fall_2021/CSCI_111/Class_Examples/";
    string file_name = "Alice's_Adventures_in_Wonderland.txt";

    read_inputfile(inputfile_ptr, inputfile_dir, file_name);

    return 0;

}

void isInputFileReadable(ifstream& ifs, string dir, string fname) {

    ifs.open(fname);

    if (ifs.fail()) {

        cout << "Failed to open input file: " << dir + fname << endl;
        exit(1);

    }

}

void read_inputfile(ifstream& ifs, string dir, string fname) {

    isInputFileReadable(ifs, dir, fname);

    int vowels_freq[5] = {0};

    compute_freq(ifs, vowels_freq);

    //Extract book's name (get rid of the file extension)
    string delimiter = ".";
    size_t pos = 0;
    string book_name;

    while ((pos = fname.find(delimiter)) != std::string::npos) {

        book_name = fname.substr(0, pos);
        fname.erase (0, pos + delimiter.length());

    }

    cout << "\n\n\tThere are \n\n" << endl;
    cout << "\t" << vowels_freq[0] << " a's, " << endl;
    cout << "\t" << vowels_freq[1] << " e's, " << endl;
    cout << "\t" << vowels_freq[2] << " i's, " << endl;
    cout << "\t" << vowels_freq[3] << " o's, " << endl;
    cout << "\t" << vowels_freq[4] << " u's, " << endl << endl << endl;

    cout << "\tin " << "\"" << book_name << "\"" << " book." << endl << endl;

    close_file_ptr(ifs);

}

void compute_freq(ifstream& ifs, int vowels_freq[5]) {

    char temp;

    ifs.get(temp);

    while(!ifs.eof()) {

        switch(temp) {

            case 'a':
                vowels_freq[0]++;
                break;
            case 'e':
                vowels_freq[1]++;
                break;
            case 'i':
                vowels_freq[2]++;
                break;
            case 'o':
                vowels_freq[3]++;
                break;
            case 'u':
                vowels_freq[4]++;
                break;

        }

        ifs.get(temp);

    }

}

void close_file_ptr(ifstream& ifs) {

    ifs.close();

}