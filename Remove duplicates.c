#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    if (nums == NULL || numsSize <= 0) {
        return 0;
    }
    if (numsSize <= 2) {
        return numsSize;
    }
    
    int write_index = 2;
    
    for (int read_index = 2; read_index < numsSize; read_index++) {
        if (nums[read_index] != nums[write_index - 2]) {
            nums[write_index] = nums[read_index];
            write_index++;
        }
    }
    
    return write_index;
}
