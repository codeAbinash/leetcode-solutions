int count(int n, int *memory){
    if(n <= 1) return 1;
    if(memory[n] > 0) return memory[n];
    return memory[n] = count(n - 1, memory) + count(n - 2, memory);
}

int climbStairs(int n){
    int memory[46] = {0};
    return count(n, memory);
}