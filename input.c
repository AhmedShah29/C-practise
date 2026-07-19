#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float GPA = 0.0f;
    char greade = '\0';
    char name[9] = "";

    printf("Enter ur age:");
    scanf(" %d", &age);

    printf("Enter ur GPA:");
    scanf(" %F", &GPA);

    // when looking for a lot strings use the fgets function insted (if it has spaces)
    // we can use the getchar function before the fgets funtion (on top of it)
    fgets(name, sizeof(name), stdin);
    return 0;
}