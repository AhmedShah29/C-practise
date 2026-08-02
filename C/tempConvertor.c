#include <stdio.h>

int main() {

    char option = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Convertor Program\n");
    printf("options:\n");
    printf("C - celsius to fahrenheit\n");
    printf("F - fahrenheit to clsius\n");
    printf("Enter a option: ");
    scanf("%c", &option);

    if(option == 'c'){
        // F to C
        printf("Enter the temp in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is %.1f fahrenheit\n", celsius, fahrenheit);
    }
    else if(option == 'f'){
        //F to C
        printf("Enter the temp in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit is %.1f Celsius\n", fahrenheit, celsius);
    }
    else{
        //Error handling 
        printf("Uknown option are u dumb?");
    }


    return 0;
}