#include <stdio.h>
#include <string.h>

int main() {

    char name[10] = "";

    printf("Enter ur name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("name cant be embty plz add a name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("hello %s", name);

    return 0;
}