#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    char name[10] = "";
    /*
    printf("Enter your age: ");
    scanf("%d", &age);
   */
    if(age == 0){
        printf("bruh\n");
    }
    else if(age == 67){
        printf("hahaha 67 deleting system32");
    }
    else if(age == 69){
        printf("unc");
    }
    else if(age < 18){
        printf("6 7 type shit");
    }
    else if(age >= 18){
        printf("Grown A$$ man");
    }

    //I am not doing the bool one i get it

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You didnt enter ur name: \n");
    }
    else{
        printf("Hello %s", name);
    }

    return 0;
}