#include <stdio.h>
#include <stdlib.h>

int main() {

    //malloc() is a fn thats "dynamically" allocates a num of bytes in mem

    int number = 0;

    printf("Enter da number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Mem alloc faild\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter a grade number %d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c \n", grades[i]);
    }

    free(grades); //mem free
    grades = NULL; // avoids dangling pointer

    
    return 0;
}