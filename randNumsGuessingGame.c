#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = rand() % (max - min + 1) + min;

    printf("--- NUM GUESSING GAME ---\n");
    
    do{
        printf("guess a num between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess < answer){
            printf("TOO LOW TERRAIN!\n");
        }else if(guess > answer){
            printf("OVER G!\n");
        }else{
            printf("bulls eye!");
        }

    }while(guess != answer);

    printf("The answer is %d\n", answer);
    printf("it tok u %d tries", tries);
    
    return 0;
}