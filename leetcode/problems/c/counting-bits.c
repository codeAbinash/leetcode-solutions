// by @codeAbinash
// Time Complexity : O(nlogn)
// Space Complexity O(n)

int* countBits(int n, int* returnSize){
    int count,num;
    int *arr = (int *)calloc(n + 1,sizeof(int));
    
    *returnSize = n + 1;

    for(int i = 0; i <= n; i++){
        num = i; count = 0;

        while(num){
            count += num & 1;
            num /= 2;
        }
        arr[i] = count;
    }

    return arr;
}

// Better Solution 
// by @codeAbinash
// Time Complexity O(n)
// Space Complexity O(n)
int* countBits(int n, int* returnSize){
    int *newArr = (int *)calloc(++n,sizeof(int));
    *returnSize  = n;
    for(int i = 1; i < n; ++i){
        if(i & 1)
            newArr[i] = newArr[i - 1] + 1;
        else
            newArr[i] = newArr[i >> 1];
    }
    return newArr;
}