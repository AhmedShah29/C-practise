#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // print statment 
    printf("Apple\n");

    //data types (doubles are not mentioned)
    int age = 67; //size 4 bytes %i || %d
    float GPA = 3.5; // 4 bytes %f
    double PI = 3.14159265359; //8 bytes %lf.sizeNum || %f
    char level = 'S'; // 1 byte %c
    char name[] = "hello~"; //string (an arry of chars) size = 1byte * string lenght %s
    bool isGood = true; // can use 1 and 0 insted of t and f size 1 byte


    //format print
    printf("I am %d years old my GPA is %f my level is %c my name is %s\n", age, GPA, level, name);
    printf("%lf.15\n", PI);
    //con
    if(isGood){
        printf("Hes fine asf\n");
    }
    else{
        printf("hes fucked\n");
    }

    //format specifier

    int num = 1;
    int num1 = 2;
    int num3 = 3;

    //arithmatic

    int x = 2;
    int y = 3;
    int z = x + y;

    printf("%d", z);
    return 0;
} 