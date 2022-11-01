/*
###################################################################
# Program name: unknown_num_of_digits.cpp
# Author      : Brandon Kamplain
# Date written: Aug. 30, 2021
# Description : This program asks the user for an unknown number of
# digits, and then break the integer number down to its respective
# digits – separated by blank spaces.
###################################################################
*/

#include <iostream>
using namespace std;

int main() {

unsigned long long int num;
cout << "Please enter an integer value made of unknown number of digits: ";
cin >> num;

// ones = o, tens = t, hundreds = h, thousands = th, ten-thousands = tth,
// hundred-thousands = hth, m = millions, tm = ten-millions, hm = hundred-millions,
// b = billion, tb = ten-billion, hb = hundred-billion, tr = trillion,
// ttr = ten-trillion, htr = hundred-trillions, q = quadrillion, tq = ten-quadrillion
unsigned long long int o, t, h, th, tth, hth, m, tm, hm, b, tb, hb, tr, ttr, htr, q, tq, rem;
if (num>9 && num<=99) { //Tens

    t = num/10;
    rem = num%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << t << " " << o << endl;

} else if (num>=100 && num<=999) { //Hundreds

    h = num/100;
    rem = num%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << h << " " << t << " " << o << endl;

} else if (num>=1000 && num<=9999) { //Thousands

    th = num/1000;
    rem = num%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << th << " " << h << " " << t << " " << o << endl;

} else if (num>=10000 && num<=99999) { //Ten-Thousands

    tth = num/10000;
    rem = num%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << tth << " " << th << " " << h << " " << t << " " << o << endl;

} else if (num>=100000 && num<=999999) { //Hundred-Thousands

    hth = num/100000;
    rem = num%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;

} else if (num>=1000000 && num<=9999999) { //Millions

    m = num/1000000;
    rem = num%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;

} else if (num>=10000000 && num<=99999999) { //Ten Millions

    tm = num/10000000;
    rem = num%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=100000000 && num<=999999999) { //Hundred Millions

    hm = num/100000000;
    rem = num%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=1000000000 && num<=9999999999) { //Billion

    b = num/1000000000;
    rem = num%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=10000000000 && num<=99999999999) { //Ten Billion

    tb = num/10000000000;
    rem = num%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=100000000000 && num<=999999999999) { //Hundred Billion

    hb = num/100000000000;
    rem = num%100000000000;
    
    tb = rem/10000000000;
    rem = rem%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << hb << " " << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=1000000000000 && num<=9999999999999) { //Trillion

    tr = num/1000000000000;
    rem = num%1000000000000;
    
    hb = rem/100000000000;
    rem = rem%100000000000;
    
    tb = rem/10000000000;
    rem = rem%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << tr << " " << hb << " " << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=10000000000000 && num<=99999999999999) { //Ten Trillion

    ttr = num/10000000000000;
    rem = num%10000000000000;
    
    tr = rem/1000000000000;
    rem = rem%1000000000000;
    
    hb = rem/100000000000;
    rem = rem%100000000000;
    
    tb = rem/10000000000;
    rem = rem%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << ttr << " " << tr << " " << hb << " " << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=100000000000000 && num<=999999999999999) { //Hundred Trillion

    htr = num/100000000000000;
    rem = num%100000000000000;
    
    ttr = rem/10000000000000;
    rem = rem%10000000000000;
    
    tr = rem/1000000000000;
    rem = rem%1000000000000;
    
    hb = rem/100000000000;
    rem = rem%100000000000;
    
    tb = rem/10000000000;
    rem = rem%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << htr << " " << ttr << " " << tr << " " << hb << " " << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=1000000000000000 && num<=9999999999999999) { //Quadrillion

    q = num/1000000000000000;
    rem = num%1000000000000000;
    
    htr = rem/100000000000000;
    rem = rem%100000000000000;
    
    ttr = rem/10000000000000;
    rem = rem%10000000000000;
    
    tr = rem/1000000000000;
    rem = rem%1000000000000;
    
    hb = rem/100000000000;
    rem = rem%100000000000;
    
    tb = rem/10000000000;
    rem = rem%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << q << " " << htr << " " << ttr << " " << tr << " " << hb << " " << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else if (num>=10000000000000000 && num<=99999999999999999) { //Ten Quadrillion

    tq = num/10000000000000000;
    rem = num%10000000000000000;
    
    q = rem/1000000000000000;
    rem = rem%1000000000000000;
    
    htr = rem/100000000000000;
    rem = rem%100000000000000;
    
    ttr = rem/10000000000000;
    rem = rem%10000000000000;
    
    tr = rem/1000000000000;
    rem = rem%1000000000000;
    
    hb = rem/100000000000;
    rem = rem%100000000000;
    
    tb = rem/10000000000;
    rem = rem%10000000000;
    
    b = rem/1000000000;
    rem = rem%1000000000;
    
    hm = rem/100000000;
    rem = rem%100000000;
    
    tm = rem/10000000;
    rem = rem%10000000;
    
    m = rem/1000000;
    rem = rem%1000000;
    
    hth = rem/100000;
    rem = rem%100000;

    tth = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    cout << "The integer value " << num << " is made of digits: " << endl;
    cout << tq << " " << q << " " << htr << " " << ttr << " " << tr << " " << hb << " " << tb << " " << b << " " << hm << " " << tm << " " << m << " " << hth << " " << tth << " " << th << " " << h << " " << t << " " << o << endl;
    
} else {

cout << "Please inter an integer between 2 and 17 digits" << endl;

} 

return 0;

}