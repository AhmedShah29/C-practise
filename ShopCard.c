#include <stdio.h>
#include <string.h>

int main() {
    
    char item[15] = "";
    float price = 0.0f;
    int quantity = 0;
    char currncy = '$';
    float total = 0.0f;

    printf("what item do u need?:");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what etch item price?:");
    scanf("%f", &price);

    printf("How mutch do u need?:");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("\n u have bought %d %s\n", quantity, item);
    printf("Total is: %c%.2f", currncy, total);

    return 0;
}

//shop card program 