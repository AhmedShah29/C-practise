#include <stdio.h>
#include <stdbool.h>

int main() {

    // condition ? true : false (returned)

    /*
    int x = 5;
    int y = 6;
    int max = x > y ? x : y;

    printf("%d", max);
    */
    bool isOnline = true;
    printf("%s", isOnline ? "true" : "false");

    return 0;
}