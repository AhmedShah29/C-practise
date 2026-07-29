#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    printf("Enter a number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if(prices == NULL){
        printf("can't allocate memory\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Entre price number %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNum = 0;
    printf("Enter a new number: ");
    scanf("%d", &newNum);

    float *temp = realloc(prices, newNum * sizeof(float));

    if(temp == NULL){
        printf("can't allocate memory");
    }
    else{
        prices = temp;
        temp = NULL;

        for(int i = number; i < newNum; i++){
            printf("Entre price number %d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for(int i = 0; i < newNum; i++){
            printf("$%.2f ", prices[i]);
        }
    }

    

    free(prices);
    prices = NULL;

    return 0;
}