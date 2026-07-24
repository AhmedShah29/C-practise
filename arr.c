#include <stdio.h>

int main() {

    //declaring

    int nums[] = {1, 2, 3, 4, 5, 6};
    char grades[] = {'A', 'B', 'C', 'D'}; 

    int size = sizeof(nums) / sizeof(nums[0]);

    //reassign
    nums[0] = 0;

    //printing
    printf("%d\n", nums[0]);

    for(int i = 0; i < size; i++){
        printf("%d ", nums[i]);
    }

    /*
        to get the "lenght" of an arry u have to devivde the sizeof the arry
        and the and the sizeof a sinlge element in da arry (index 0) so the math is :
        sizeof(arry) / sizeof(arry[0]) = arry.lenght
        note:
        sizeof() funtion return the size in bytes
    */

    return 0;
}