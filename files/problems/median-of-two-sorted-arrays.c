double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
    int i = 0, j = 0, k = 0;
    int mid = (nums1Size + nums2Size) / 2;
    double m1, m2;

    while (i <= nums1Size && j <= nums2Size) {
        m1 = m2;
        if (nums1[i] < nums2[j]) {
            m2 = nums1[i];
            i++;
            k++;
        } else {
            m2 = nums2[j];
            j++;
            k++;
        }

        if (mid == k) break;
    }
    while (i < nums2Size && k <= mid) {
        m1 = m2;
        m2 = nums1[i];
        i++;
        k++;
    }
    while (j < nums2Size && k <= mid) {
        m1 = m2;
        m2 = nums2[j];
        j++;
        k++;
    }
    return m2;
}