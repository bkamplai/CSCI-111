#include <iostream>
#include <cmath>

using namespace std;

#define delta 0.000311

int main() {

    /*
    f(x) = 3x^2 + 4x

    Closed form (continuous) solution

    Upper bound (x^3 + 2x^2)|4
               minus
    Lower bound (x^3 + 2x^2)|2

    (4^3 + 2(4)^2) - (2^3 + 2(2)^2) = 80

    Integral (discrete) solution - The equation (coeff. and expo.) is HARD CODED.
    */

   float c1 = 3, c2 = 4;
   float e1 = 2, e2 = 1;

   float ub = 4, lb = 2;

   float tot_area = 0;

   cout << endl << endl;

   while (lb+delta <= ub) {

       tot_area = tot_area + delta*(c1*(pow(lb, e1)) + c2*(pow(lb, e2)));
       lb = lb+delta;

   }

   cout << "Area under the curve is: " << tot_area << endl << endl;

    return 0;
    
}