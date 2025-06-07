// Time complexity is O(1)
#define SIZE 30011
static int hash[SIZE];

void hash_init() {
    for (int i = 0; i < SIZE; i++)
        hash[i] = -1;
}

int hash_find(int n) {
    int key = (n % SIZE + SIZE) % SIZE;
    return hash[key];
}

void hash_insert(int n, int index) {
    int key = (n % SIZE + SIZE) % SIZE;
    hash[key] = index;
}


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL || numsSize < 2) {
        *returnSize = 0;
        return NULL;
    }

    hash_init();

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int idx = hash_find(complement);
        if (idx != -1) {
            result[0] = idx;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        hash_insert(nums[i], i);
    }

    free(result);
    *returnSize = 0;
    return NULL;
}