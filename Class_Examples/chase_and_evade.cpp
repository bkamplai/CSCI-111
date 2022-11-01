/*
- There is a field in which (p)redator and p(r)ey live & thrive.


- Field could be as large as we like. However, we keep it small for faster execution time.
  Initially, Fox (F) and Rabbit (R) occupying (top-left and bottom-right) two opposing diametrically cells of say a 20X20 array.

- Assumption 1: there is - AT LEAST, 20-block (units of distance) distance between Predator and prey.
  
- Assumption 2: at 5-block distance, predator (e.g., a Fox) and a prey (e.g. rabbit) notice one another. 
  This means that at 5-block distance both animals know of each others coordinates.
  This is when the chasing and evading starts: in randomized directions with (F) trying to get closer to (R) and by
  (R) trying to increase the distance. Each animal take a turn in giving chase and running away. At each turn the field display
  needs to be updated (re-drawn with animals new positions).
  
- Assumption 3: 
- at distance of 3 blocks chase and evade intensity increases. meaning that each animal get a chance to move toward/away
by the distance of 3 blocks, 2 blocks or 1 block (i.e. finalize the catch).

Assumption 4: if (F) moves into (R) cell (coordinates) then the chase is over. 
However, if (R) manages to increase its distance to greater than 5 blocks (i.e. 6 and higher) it is set free.
In both of these scenario, the program comes to a halt with appropriate message (i.e., "captured" or "got away").
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define length 20

void init_field_blank(char[][length]);
void init_field(char[][length]);
void display_field(char[][length]);
int Fox_move();
int Rabbit_move(char[][length]);

int main() {

    char field[length][length];

    init_field_blank(field);
    display_field(field);


    return 0;

}

void init_field_blank(char b[length][length]) {

    for (int i = 0; i<length; i++) {

        for (int j = 0; j<length; j++) {

            b[i][j] = ' ';

        }

    }

}

void init_field(char a[length][length]) {

    init_field_blank(a);
    a[0][0] = 'F';
    a[length-1][length-1] = 'R';

}

void display_field(char c[length][length]) {

    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i<length; i++) {
        
        cout << "|";

        for (int j = 0; j<length; j++) {

            cout << c[i][j] << " |";

        }

        cout << endl;
        cout << "-------------------------------------------------------------" << endl;

    }

}