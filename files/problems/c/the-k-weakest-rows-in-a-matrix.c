int cmp(const void* a, const void* b) {
    return *(*(int**)a + 1) - *(*(int**)b + 1);
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize) {
    int* arr = calloc(k, sizeof(arr));
    int** count = calloc(matSize, sizeof(count));
    int tmp = 0;
    *returnSize = k;

    for (int i = 0; i < matSize; i++) {
        *(count + i) = calloc(2, sizeof(*count));
        *(*(count + i)) = i;
    }

    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < *matColSize; j++) {
            if (0 == *(*(mat + i) + j)) break;
            tmp++;
        }
        *(*(count + i) + 1) = tmp;
        tmp = 0;
    }

    qsort(count, matSize, sizeof(int*), cmp);

    for (int i = 0; i < k; i++)
        *(arr + i) = *(*(count + i));

    return arr;
}