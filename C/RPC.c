#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputorChoice();
int getUserChoice();
void checkWinner(int getUserChoice, int getComputorChoice);

int main() {

    srand(time(NULL));

    printf("--- ROCK PAPER SCISSORS ---\n");

    int userChoice = getUserChoice();
    int computorChoice = getComputorChoice();

    switch(userChoice){
        case 1:
            printf("U chose ROCK !\n");
            break;
        case 2:
            printf("U chose PAPER !\n");
            break;
        case 3: 
            printf("U chose SCISSORS !\n");
            break;
    }

    switch(computorChoice){
    case 1:
        printf("Computor chose ROCK !\n");
        break;
    case 2:
        printf("Computor chose PAPER !\n");
        break;
    case 3: 
        printf("Computor chose SCISSORS !\n");
        break;
    }

    checkWinner(userChoice, computorChoice);


    return 0;
}

int getComputorChoice() {
    return (rand() % 3) + 1;
}

int getUserChoice() {
    int choice = 0;

    do{
        printf("Choice an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter ur choice: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);
    return choice;
}

void checkWinner(int userChoice, int computorChoice) {

    if(userChoice == computorChoice){
        printf("Tie!");
    }
    else if((userChoice == 1 && computorChoice == 3) ||
            (userChoice == 2 && computorChoice == 1) ||
            (userChoice == 3 && computorChoice == 2)){
        printf("U won!");
    }
    else{
        printf("U lost!");
    }
}