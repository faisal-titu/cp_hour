int removeDuplicates(int* nums, int numsSize) {
    int i = 0, count = 1;
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] == nums[i]) {
            count++;
            if (count <= 2) {
                nums[++i] = nums[j];
            }
        } else {
            count = 1;
            nums[++i] = nums[j];
        }
    }
    return i + 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    int result = removeDuplicates(nums, n);
    printf("%d\n", result);
    for(int i = 0; i < result; i++){
        printf("%d ", nums[i]);
    }
}