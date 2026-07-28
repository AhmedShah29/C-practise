#include <stdio.h>

int main() {

    // "r" is for read mode 
    //use can put a file path adn use da "\\" for the path isted of \ 
    FILE *pFile = fopen("fileName.txt", "w");

    char text[] = "hello World!";

    if(pFile == NULL){
        printf("cannot open the file");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("file was written good man : )");

    fclose(pFile);

    return 0;
}