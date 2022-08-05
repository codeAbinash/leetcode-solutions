bool isPowerOfTwo(int n) {
    if (n == 0) return false;
    while (n > 1 && (n & 1) == 0) 
        n >>= 1;
    return n == 1;
}

int main() {
    printf("%d", isPowerOfTwo(16));
    return 0;
}