#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
        calloc is a fn that allocates mem and set it to zero
        malloc() fn is faster but calloc leads to less bugs 
        because it sets the mem to 0 and it takes time 
        thats whay malloc is faster
    */

    int number = 0;
    printf("Enter a number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL){
        printf("can't allocate memory");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter a score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;



    return 0;
}