#include <iostream>
#include <cstring>

using namespace std;

int main() {

char aStr[] = "hello";

//cout << strlen(aStr) << endl;
//cout << aStr[1] << endl;

for (int i=strlen(aStr) - 1; i >= 0; i--) {

    cout << aStr[i];

}
cout << "\n\n\n\n\n";
return 0;

}