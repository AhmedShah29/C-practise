#include <stdio.h>

int main() {

    int choice = 0;
    float pounds = 0.0f;
    float KG = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("Options: \n");
    printf("1 - KG to pound\n");
    printf("2 - pound to KG\n");
    printf("Enter ur choice(1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        //KG to pound
        printf("Enter the wight in kilograms: ");
        scanf("%f", &KG);
        pounds = KG * 2.20462;
        printf("%.2f Kilograms is %.2f in pounds\n", KG, pounds);
    }
    else if (choice == 2){
        //pund to KG
        printf("Enter the wight in pound: ");
        scanf("%f", &pounds);
        KG = pounds / 2.20462;
        printf("%.2f in pounds is %.2f Kilograms\n", pounds, KG);
    }
    else{
        printf("Invalid choice! are u dumb?\n");
    }







    return 0;
}