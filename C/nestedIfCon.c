#include <stdio.h>
#include <stdbool.h>


int main() {

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = true;

    //procode taking it so mutch slowly (as a js jonoir dev)...

    if(isStudent){
        if(isSenior){
            printf("You get a senior discount of 20%\n");
            printf("You get a student discount of 10%\n");
            price *= 0.7;
        }
        else{
            printf("You get a student discount of 10%\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a senior discount of 20%\n");
            price *= 0.8;
        }
    }



    printf("Price is %.2f\n", price);
    return 0;
}