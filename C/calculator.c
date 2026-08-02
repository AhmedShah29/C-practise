#include <stdio.h>

int main() {

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the frist number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &operator); // used the space method to skip the new line char in the input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Infinty\n"); //pro code typed "u cant divide by zero" u know the answer 
            }
            break;
        default:
            printf("Uknown oprator\n");
    }

    printf("Reuslt: %lf", result);

    return 0;
}