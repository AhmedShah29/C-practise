#include <stdio.h>
#include <math.h>

int main() {

    double principle = 0.0;
    double rate = 0.0;
    double total = 0.0;
    int years = 0;
    int timesCompounded = 0;

    printf("Compound Interst calculator\n");

    printf("Enter the orinciple: ");
    scanf("%lf", &principle);

    printf("Enter the interest rate %% : ");
    scanf("%lf", &rate);
    rate /= 100;

    printf("Enter the Number of years: ");
    scanf("%d", &years);

    printf("Enter Number of times compinded per year: ");
    scanf("%d", &timesCompounded);

    total = principle * pow(1 + rate / timesCompounded, timesCompounded * years); //holy sh*t

    printf("After %d years the total will be $%.2lf", years, total);


    return 0;
}