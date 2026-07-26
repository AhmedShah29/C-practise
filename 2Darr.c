#include <stdio.h>

int main() {

    int nums[][3] = {{1, 2, 3}, {4 , 5, 6}, {7, 8, 9}};

    /*
    printf("%d\n", nums[0][2]); // 3
    printf("%d\n", nums[1][2]); // 6
    printf("%d\n", nums[2][2]); // 9
    */

    //printing via nested loops

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}