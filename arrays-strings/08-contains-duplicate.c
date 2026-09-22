#include <stdio.h>

int containsDuplicate(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    // Test Case 1
    int nums1[] = {1, 2, 3, 1};

    printf("Test Case 1: %s\n",
           containsDuplicate(nums1, 4) ? "true" : "false");

    // Test Case 2 - Edge Case
    int nums2[] = {1, 2, 3, 4};

    printf("Test Case 2: %s\n",
           containsDuplicate(nums2, 4) ? "true" : "false");

    return 0;
}