#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    if(result == NULL){
        *returnSize = 0;
        return NULL;
    }

    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL && returnSize == 2) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result); // free only if result is not NULL
    } else {
        printf("No solution found.\n");
    }

    return 0;
}

