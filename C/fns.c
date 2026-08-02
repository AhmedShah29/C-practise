#include <stdio.h>
#include <string.h>

double square(double num){
    return num * num;
}

void happyBirthday(char name[]/*,int age*/) {
    printf("hello %s i am under the water\n", name);
}

int main() {

    //finlly FUNCTIONS 
    //I am not doing sh#t without the functions

    char name[15] = "";

    printf("Enter ur name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    happyBirthday(name);

    double x = square(3.0);
    printf("%lf", x)

    return 0;
}