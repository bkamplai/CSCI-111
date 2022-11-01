#include <stdio.h>
#include "arith_proto.h"

int main() {

    float a = 19.1;
    float b = 2.51;

    printf("\n\n");

    printf ("%4.1f\n", add(a,b));
    printf ("%4.1f\n", sub(a,b));
    printf ("%4.1f\n", mul(a,b));
    printf ("%4.1f\n", div(a,b));

    printf ("\n\n");

    return 0;

}