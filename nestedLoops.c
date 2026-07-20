#include <stdio.h>

int main() {

    /*
    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 10; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    */

    int rows = 0;
    int colums = 0;
    char symbol = '\0';

    printf("Enter a num of rows: ");
    scanf("%d", &rows);

    printf("Enter a num of colums: ");
    scanf("%d", &colums);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

   
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums; j++){
        printf("%c", symbol);
        }
        printf("\n");
    }


    return 0;
}