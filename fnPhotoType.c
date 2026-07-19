#include <stdio.h>

void hello(char name[], int age); //function phototype

int main() {

    //thats a new thing will see...
    // functions cant be called before declaration 
    // more like arrow functions in js
    //this will make some problems when devloping Rox
    // functions phototype lets u make a funtions with args but not the job
    //u add the job later

    hello("Ahmed", 69);




    return 0;
}

void hello(char name[], int age){
    printf("Hello %s ur age is %d\n", name, age);
    //phototype funtion allows to set the job after declaring it
}