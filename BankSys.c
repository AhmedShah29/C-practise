#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {

    int choice = 0;
    float balance =0.0f;

    printf("--- ATM ---");

    do{
        printf("\nSelect an option\n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\n Enter ur choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nBy broke\n");
                break;
            default:
                printf("\nUknown choice use 1 -4\n");
        }

    }while(choice != 4);


    return 0;
}

void checkBalance(float balance) {
    
}
float deposit() {


    return 0.0f;
}
float withdraw(float balance) {

    return 0.0f;
}