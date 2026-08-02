#include <stdio.h>

/*
    enum is a custom data type but with fixed value 
    the inner values are constant so they have to be in UPERCASE
    like the typedef they're made outside of da main fn
*/

enum Num{
    ONE, TWO, THREE, FOUR = 4
    // they're indexed from 0 
    // u can set it a vlue u wont  (should be int)
    // u can also typedef the enum to thraw out the enum 
    // keyword when u call the data type
    // to do it u will have to add the typedef before the enum keyword
    // and then the enum name at the end of the {}
};

typedef enum{
    HELLO, MAN, GOOD
}stuff;

int main() {

    stuff mood = GOOD;
    enum Num number = ONE;

    printf("%d\n", number);
    printf("%d", mood);


    return 0;
}