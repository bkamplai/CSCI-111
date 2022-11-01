 #include <iostream>
#include <string.h>

using namespace std;

//void check_arg_count(int, char*);
void check_arg_count(int);
void multiply(string, string);
void initialize (int[], int);

int main(int argc, char* argv[]) {

    //string str1 = argv[1];
    //string str2 = argv[2];

    //check_arg_count(argc, *argv);
    check_arg_count(argc);

    //cout << argv[1] << " " << argv[2] << endl << endl;

    //multiply(str1, str2);

    multiply(argv[1], argv[2]);

    return 0;

}

/*void check_arg_count(int argc, char *argv) {

    if (argc != 3) {

        cout << "\n\nUsage number of arguments: prog_name string1 string2. Exiting... \n\n";
        exit(1);

    }

}*/

void check_arg_count(int argc) {

    if (argc != 3) {

        cout << "\n\nUsage number of arguments: prog_name string1 string2. Exiting... \n\n";
        exit(1);

    }

}

void multiply(string str1, string str2) {

    int res[str1.size()+str2.size()];
    initialize (res,str1.size()+str2.size());

    int len_str1 = str1.length();
    int len_str2 = str2.length();

    for (int i=len_str1-1; i>=0; i--) {

        for (int j=len_str2-1; j>=0; j--) {

            int curr_val = res[i+j+1];
            int next_val = res[i+j];

            //int val1 = str1[i] - '0';
            //int val2 = str2[j] - '0';

            int val1 = str1[i] - 48;
            int val2 = str2[j] - 48;

            int accruent = curr_val + (val1*val2);

            res[i+j+1] = accruent%10;
            res[i+j] = next_val+(accruent/10);

        }

    }

    int combined_size = str1.size()+str2.size();

    cout << endl << endl;

    for (int i=0;i<combined_size; i++) {

        if (res[i] == 0 && i == 0)

            continue;

        cout <<res[i];

    }

    cout << endl << endl;

}

void initialize (int res[], int size) {

    for (int i=0;i<size; i++) {

        res[i] = 0;

    }

}
