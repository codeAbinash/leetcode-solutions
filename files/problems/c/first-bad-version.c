int firstBadVersion(int n) {
    long low = 1;
    long mid;
    while (low <= n) {
        mid = (low + n) / 2;
        if (isBadVersion(mid))
            n = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}