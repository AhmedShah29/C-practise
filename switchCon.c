#include <stdio.h>

int main() {

    int dayOfweek = 0;
    printf("Enter a num of week: ");
    scanf("%d", &dayOfweek);

    switch(dayOfweek){
        case 1:
            printf("its Monday");
            break;
        case 2:
            printf("its Tuesday");
            break;
        case 3: 
            printf("its Wednesday");
            break;
        case 4: 
            printf("its Thursday");
            break;
        case 5:
            printf("its Saturday");
            break;
        default:
            printf("let me out gang");
        //I know it so i am not ganna finish it (just like js)
    }

    return 0;
}