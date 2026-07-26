#include <stdio.h>
#include <string.h>

int main() {

    /*
    char names[][9] = {"Ahmed", "Ali", "Nora", "Mohamed", "Khald"};

    int size = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < size; i++){
        printf("%s\n", names[i]);
    }
    */

    char names[5][9] = {0};

    int raws = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < raws; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < raws; i++){
        printf("%s\n", names[i]);
    }

    

    return 0;
}