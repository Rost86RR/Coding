#include <stdio.h>
#include "cs50.h" //custom lib

int main(){

    //ask user for input a positive integer
    printf ("Give me an integer a positive integer: ");
    int x = GetPositiveInt();
    printf ("Give me another integer a positive integer: ");
    int y = GetPositiveInt();

    //do the math
    printf ("The sum of %i and %i is %i\n", x, y, x+y);

    return 0;
}