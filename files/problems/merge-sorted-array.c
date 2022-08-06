void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = nums1Size - 1, i1 = m - 1, i2 = n - 1;
    while (i1 >=0 && i2 >= 0) {
        if(nums1[i1] > nums2[i2])
            nums1[i--] = nums1[i1--];
        else
            nums1[i--] = nums2[i2--];
    }
    while (i2 >= 0)
        nums1[i--] = nums2[i2--];
}

int main() { return 0; }