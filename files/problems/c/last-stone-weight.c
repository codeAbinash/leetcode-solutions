int compare(const void* a, const void* b) {
    return *(const int*)b - *(const int*)a;
}

int lastStoneWeight(int* stones, int stonesSize) {
    if (stonesSize < 2) return stones[0];
    
    while (true) {
        qsort(stones, stonesSize, sizeof(int), compare);
        
        int first = stones[0], second = stones[1];
        
        stones[0] = stones[1] = 0;

        if (first != second) stones[0] = first - second;
        
        if (second == 0) return first;
    }
    return 0;
}