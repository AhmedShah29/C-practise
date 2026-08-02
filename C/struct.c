#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct someone{
    char name[9];
    int age;
    float gpa;
    bool isFullTime;
};

typedef struct{
    char name[9];
    int age;
    float gpa;
    bool isFullTime;
}someone;

void printSomeone(someone person);

int main() {

    //structs are a place that has multi data like objects in OOP langs

    // struct someone Ahmed = {"Ahmed", 67, 3.9, true}; //without typedef
    someone Ahmed  = {"Ahmed", 67, 3.9, true}; //with typedef
    someone Shadow = {"3bdo", 69, 3.9, false};
    someone embty = {0}; //to make a embty object with all vars set to 0

    strcpy(embty.name, "sakalolo");
    embty.age = 56;
    embty.gpa = 3.9;
    embty.isFullTime = true;

    printSomeone(Ahmed);
    printSomeone(Shadow);
    printSomeone(embty);

    /*
     to make a struct u type the "struct" Keyword fallowed by 
     da strcut name u made outside of da main fn and a name of the object u wont 
     like Ahmed  
    */

    /*
        we can also use the typedef keyword to remove the need to 
        type the word sruct when calling so it can be:

    */



    return 0;
}

void printSomeone(someone person){
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("GPA: %.1f\n", person.gpa);
    printf("Full time? %s\n", person.isFullTime ? "true" : "false");
    printf("\n");
}