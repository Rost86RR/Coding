#include <stdio.h>
#include "cs50.h" //custom libr

int main(){

    //ask user for input
    printf ("Give me an integer: ");
    int x = GetInt();
    printf ("Give me another integer: ");
    int y = GetInt();

    //do the math
    printf ("The sum of %i and %i is %i\n", x, y, x+y);

    return 0;
}