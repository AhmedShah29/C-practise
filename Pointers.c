#include <stdio.h>

void brithday(int *age);

int main() {

    //pointer is a var thats stores a mem address of another var
    // alows u to pass data insted of copying them

    int age = 18;
    //int *pAge = &age;

    /*
        both are the same value
        printf("%p\n", &age);
        printf("%p\n", pAge);
    */

    brithday(&age);

    printf("You are %d years old\n", age);

    return 0;
}

void brithday(int *age){
    (*age)++;
}