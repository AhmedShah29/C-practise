#include <stdio.h>

typedef struct{
    char model[9];
    int year;
    int price;
}Car;

void printStructArr(Car car) {
    printf("Car model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: %d\n", car.price);
    printf("\n");
}

int main(){

    Car cars[] = {
        {"Mustang", 2026, 32000}, 
        {"Toyota", 2067, 69000}, 
        {"Ford", 2020, 6700}
    };

    printStructArr(cars[0]);
    printStructArr(cars[1]);
    printStructArr(cars[2]);

    return 0;
}